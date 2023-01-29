#include <llapi/event/block/PistonPushEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockPos.hpp>
#include <llapi/mc/PistonBlockActor.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/Block.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

PistonPushEvent::PistonPushEvent(BlockInstance const& pistonBlockInstance, BlockInstance const& targetBlockInstance)
: pistonBlockInstance(pistonBlockInstance), targetBlockInstance(targetBlockInstance) {}

LL_GETTER_IMPL(PistonPushEvent, BlockInstance, pistonBlockInstance, getPistonBlockInstance);
LL_GETTER_IMPL(PistonPushEvent, BlockInstance, targetBlockInstance, getTargetBlockInstance);

} // namespace block

template class Event<block::PistonPushEvent>;
template class Listener<block::PistonPushEvent>;
template class EventManager<block::PistonPushEvent>;

} // namespace ll::event

TInstanceHook2("PistonPushEvent_hook_?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
               bool, "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
               PistonBlockActor, BlockSource* blockSource, BlockPos* blockPos, char a3, char a4) {

    using ll::event::block::PistonPushEvent;
    using EventManager = ll::event::EventManager<PistonPushEvent>;

    auto result = original(this, blockSource, blockPos, a3, a4);
    if (!result)
        return false;

    auto targetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
    if (targetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
        return true;

    auto pistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

    PistonPushEvent pushEvent(pistonBlockInstance, targetBlockInstance);
    EventManager::fireEvent(pushEvent);

    return true;
}