#include <llapi/event/block/HopperPushOutEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

HopperPushOutEvent::HopperPushOutEvent(Vec3 const& pos, int dimensionId) : pos(pos), dimensionId(dimensionId) {}

LL_GETTER_IMPL(HopperPushOutEvent, Vec3, pos, getPos);
LL_GETTER_IMPL(HopperPushOutEvent, int, dimensionId, getDimensionId);

} // namespace block

template class Event<block::HopperPushOutEvent>;
template class Listener<block::HopperPushOutEvent>;
template class EventManager<block::HopperPushOutEvent>;

} // namespace ll::event

TClasslessInstanceHook(bool, "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
                       BlockSource* blockSource, Container* container, Vec3* pos, int a5) {

    using ll::event::block::HopperPushOutEvent;
    using EventManager = ll::event::EventManager<HopperPushOutEvent>;

    HopperPushOutEvent event(*pos, blockSource->getDimensionId());
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }

    return original(this, blockSource, container, pos, a5);
}