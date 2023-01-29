#include <llapi/event/block/PistonTryPushEvent.h>
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

PistonTryPushEvent::PistonTryPushEvent(BlockInstance const& pistonBlockInstance,
                                       BlockInstance const& targetBlockInstance)
: pistonBlockInstance(pistonBlockInstance), targetBlockInstance(targetBlockInstance) {}

LL_GETTER_IMPL(PistonTryPushEvent, BlockInstance, pistonBlockInstance, getPistonBlockInstance);
LL_GETTER_IMPL(PistonTryPushEvent, BlockInstance, targetBlockInstance, getTargetBlockInstance);
} // namespace block

template class Event<block::PistonTryPushEvent>;
template class Listener<block::PistonTryPushEvent>;
template class EventManager<block::PistonTryPushEvent>;

} // namespace ll::event

TInstanceHook(bool, "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
              PistonBlockActor, BlockSource* blockSource, BlockPos* blockPos, char a3, char a4) {

    using ll::event::block::PistonTryPushEvent;
    using EventManager = ll::event::EventManager<PistonTryPushEvent>;

    auto targetBlockInstance = Level::getBlockInstance(blockPos, blockSource);
    if (targetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
        return original(this, blockSource, blockPos, a3, a4);

    auto pistonBlockInstance = Level::getBlockInstance(this->getPosition(), blockSource);

    PistonTryPushEvent tryPushEvent(pistonBlockInstance, targetBlockInstance);
    EventManager::fireEvent(tryPushEvent);
    if (tryPushEvent.isCancelled()) {
        return false;
    }

    return original(this, blockSource, blockPos, a3, a4);
}