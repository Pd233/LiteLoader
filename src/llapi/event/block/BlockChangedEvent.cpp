#include <llapi/event/block/BlockChangedEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

BlockChangedEvent::BlockChangedEvent(BlockInstance const& previousBlockInstance, BlockInstance const& newBlockInstance)
: previousBlockInstance(previousBlockInstance), newBlockInstance(newBlockInstance) {}

LL_GETTER_IMPL(BlockChangedEvent, BlockInstance, previousBlockInstance, getPreviousBlockInstance);
LL_GETTER_IMPL(BlockChangedEvent, BlockInstance, newBlockInstance, getNewBlockInstance);

} // namespace block

template class Event<block::BlockChangedEvent>;
template class Listener<block::BlockChangedEvent>;
template class EventManager<block::BlockChangedEvent>;

} // namespace ll::event

TInstanceHook(void,
              "?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@PEAVActor@@@Z",
              BlockSource, BlockPos* blockPos, int a3, Block* afterBlock, Block* beforeBlock, int a6, void* a7,
              Actor* actor) {

    using ll::event::block::BlockChangedEvent;
    using EventManager = ll::event::EventManager<BlockChangedEvent>;

    int dimId = this->getDimensionId();
    auto previousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *blockPos, dimId);
    auto newBlockInstance = BlockInstance::createBlockInstance(afterBlock, *blockPos, dimId);

    BlockChangedEvent event(previousBlockInstance, newBlockInstance);
    EventManager::fireEvent(event);

    if (event.isCancelled()) {
        return;
    }
    return original(this, blockPos, a3, afterBlock, beforeBlock, a6, a7, actor);
}