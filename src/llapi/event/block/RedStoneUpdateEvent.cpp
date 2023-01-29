#include <llapi/event/block/RedStoneUpdateEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

RedStoneUpdateEvent::RedStoneUpdateEvent(BlockInstance const& blockInstance, bool isActivated, int redStonePower)
: blockInstance(blockInstance), redStonePower(redStonePower), isActivated(isActivated) {}

LL_GETTER_IMPL(RedStoneUpdateEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(RedStoneUpdateEvent, int, redStonePower, getRedStonePower);
LL_SETTER_IMPL(RedStoneUpdateEvent, int, redStonePower, setRedStonePower);
LL_GETTER_IMPL(RedStoneUpdateEvent, bool, isActivated, getIsActivated);

} // namespace block

template class Event<block::RedStoneUpdateEvent>;
template class Listener<block::RedStoneUpdateEvent>;
template class EventManager<block::RedStoneUpdateEvent>;

} // namespace ll::event

// 红石粉
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedStoneWireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {

    using ll::event::block::RedStoneUpdateEvent;
    using EventManager = ll::event::EventManager<RedStoneUpdateEvent>;

    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return original(this, blockSource, blockPos, level, isActive);
}

// 红石火把
TClasslessInstanceHook(void, "?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {

    using ll::event::block::RedStoneUpdateEvent;
    using EventManager = ll::event::EventManager<RedStoneUpdateEvent>;

    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return original(this, blockSource, blockPos, level, isActive);
}

// 红石中继器
TClasslessInstanceHook(void, "?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {

    using ll::event::block::RedStoneUpdateEvent;
    using EventManager = ll::event::EventManager<RedStoneUpdateEvent>;

    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return original(this, blockSource, blockPos, level, isActive);
}

// 红石比较器
TClasslessInstanceHook(void, "?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
                       BlockSource* blockSource, BlockPos* blockPos, int level, bool isActive) {

    using ll::event::block::RedStoneUpdateEvent;
    using EventManager = ll::event::EventManager<RedStoneUpdateEvent>;

    RedStoneUpdateEvent event(Level::getBlockInstance(blockPos, blockSource), level != 0, level);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    level = event.getRedStonePower();
    return original(this, blockSource, blockPos, level, isActive);
}