#include <llapi/event/block/FarmLandDecayEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

FarmLandDecayEvent::FarmLandDecayEvent(BlockInstance const& blockInstance, Actor* actor)
: blockInstance(blockInstance), actor(actor) {}

LL_GETTER_IMPL(FarmLandDecayEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(FarmLandDecayEvent, Actor*, actor, getActor);

} // namespace block

template class Event<block::FarmLandDecayEvent>;
template class Listener<block::FarmLandDecayEvent>;
template class EventManager<block::FarmLandDecayEvent>;

} // namespace ll::event

TClasslessInstanceHook(void, "?transformOnFall@FarmBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z",
                       BlockSource* blockSource, BlockPos* blockPos, Actor* actor, float a5) {

    using ll::event::block::FarmLandDecayEvent;
    using EventManager = ll::event::EventManager<FarmLandDecayEvent>;

    auto blockInstance = Level::getBlockInstance(blockPos, blockSource);
    FarmLandDecayEvent event(blockInstance, actor);
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return;
    }

    return original(this, blockSource, blockPos, actor, a5);
}