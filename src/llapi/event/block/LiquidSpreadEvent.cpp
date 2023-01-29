#include <llapi/event/block/LiquidSpreadEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/LiquidBlockDynamic.hpp>
#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

LiquidSpreadEvent::LiquidSpreadEvent(BlockInstance const& blockInstance,BlockPos const& target, int dimensionId)
: blockInstance(blockInstance), target(target), dimensionId(dimensionId) {}

LL_GETTER_IMPL(LiquidSpreadEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(LiquidSpreadEvent, BlockPos, target, getTarget);
LL_GETTER_IMPL(LiquidSpreadEvent, int, dimensionId, getDimensionId);

} // namespace blockk

template class Event<block::LiquidSpreadEvent>;
template class Listener<block::LiquidSpreadEvent>;
template class EventManager<block::LiquidSpreadEvent>;

} // namespace ll::event

TInstanceHook(bool, "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z", LiquidBlockDynamic,
              class BlockSource& blockSource, class BlockPos const& to, class BlockPos const& from, unsigned char unk) {

    using ll::event::block::LiquidSpreadEvent;
    using EventManager = ll::event::EventManager<LiquidSpreadEvent>;

    auto result = original(this, blockSource, to, from, unk);
    if (!result)
        return false;
        
    auto dimensionId = blockSource.getDimensionId();
    auto blockInstance =
        BlockInstance::createBlockInstance(const_cast<Block*>(&this->getRenderBlock()), from, dimensionId);
    LiquidSpreadEvent event(blockInstance, to, dimensionId);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return result;
}