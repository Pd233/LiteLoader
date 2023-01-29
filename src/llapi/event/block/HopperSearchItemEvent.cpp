#include <llapi/event/block/HopperSearchItemEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

HopperSearchItemEvent::HopperSearchItemEvent(bool isMinecart, BlockInstance const& hopperBlock, Vec3 const& minecartPos,
                                             int dimensionId)
: isMinecart(isMinecart), hopperBlock(hopperBlock), minecartPos(minecartPos), dimensionId(dimensionId) {}

LL_GETTER_IMPL(HopperSearchItemEvent, bool, isMinecart, getIsMinecart);
LL_GETTER_IMPL(HopperSearchItemEvent, BlockInstance, hopperBlock, getHopperBlock);
LL_GETTER_IMPL(HopperSearchItemEvent, Vec3, minecartPos, getMinecartPos);
LL_GETTER_IMPL(HopperSearchItemEvent, int, dimensionId, getDimensionId);

} // namespace block

template class Event<block::HopperSearchItemEvent>;
template class Listener<block::HopperSearchItemEvent>;
template class EventManager<block::HopperSearchItemEvent>;

} // namespace ll::event

TClasslessInstanceHook(bool,
                       "?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
                       BlockSource* blockSource, Container* container, Vec3* pos) {

    using ll::event::block::HopperSearchItemEvent;
    using EventManager = ll::event::EventManager<HopperSearchItemEvent>;

    bool isMinecart = dAccess<bool>(this, 5); // IDA Hopper::Hopper
    HopperSearchItemEvent event(isMinecart,
                                isMinecart ? BlockInstance() : Level::getBlockInstance(pos->toBlockPos(), blockSource),
                                isMinecart ? (*pos) : Vec3(), blockSource->getDimensionId());
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return original(this, blockSource, container, pos);
}