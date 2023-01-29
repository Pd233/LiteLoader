#include <llapi/event/block/BlockExplodedEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

BlockExplodedEvent::BlockExplodedEvent(BlockInstance const& blockInstance, Actor* explodeSource)
: blockInstance(blockInstance), explodeSource(explodeSource) {}

LL_GETTER_IMPL(BlockExplodedEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(BlockExplodedEvent, Actor*, explodeSource, getExplodeSource);

} // namespace block

template class Event<block::BlockExplodedEvent>;
template class Listener<block::BlockExplodedEvent>;
template class EventManager<block::BlockExplodedEvent>;

} // namespace ll::event

TInstanceHook(void, "?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z", Block,
              BlockSource* blockSource, BlockPos* blockPos, Actor* actor) {

    using ll::event::block::BlockExplodedEvent;
    using EventManager = ll::event::EventManager<BlockExplodedEvent>;

    auto blockInstance = BlockInstance::createBlockInstance(this, *blockPos, blockSource->getDimensionId());
    BlockExplodedEvent event(blockInstance, actor);
    EventManager::fireEvent(event);

    if (event.isCancelled()) {
        return;
    }
    return original(this, blockSource, blockPos, actor);
}