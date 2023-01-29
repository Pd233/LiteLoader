#include <llapi/event/block/FireSpreadEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

FireSpreadEvent::FireSpreadEvent(BlockPos const& target, int dimensionId)
: target(target), dimensionId(dimensionId) {}

LL_GETTER_IMPL(FireSpreadEvent, BlockPos, target, getTarget);
LL_GETTER_IMPL(FireSpreadEvent, int, dimensionId, getDimensionId);

} // namespace block

template class Event<block::FireSpreadEvent>;
template class Listener<block::FireSpreadEvent>;
template class EventManager<block::FireSpreadEvent>;

} // namespace ll::event

bool onFireSpread_OnPlace = false;

TClasslessInstanceHook(void, "?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z", BlockSource* blockSource,
                       BlockPos* blockPos) {

    onFireSpread_OnPlace = true;
    original(this, blockSource, blockPos);
    onFireSpread_OnPlace = false;
}

TClasslessInstanceHook(bool, "?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z", BlockSource* blockSource,
                       BlockPos* blockPos) {

    using ll::event::block::FireSpreadEvent;
    using EventManager = ll::event::EventManager<FireSpreadEvent>;

    auto rtn = original(this, blockSource, blockPos);
    if (!onFireSpread_OnPlace || !rtn)
        return rtn;

    FireSpreadEvent event(*blockPos, blockSource->getDimensionId());
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }
    return rtn;
}