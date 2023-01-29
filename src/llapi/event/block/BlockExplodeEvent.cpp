#include <llapi/event/block/BlockExplodeEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Types.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/Vec3.hpp>
#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

// clang-format off
BlockExplodeEvent::BlockExplodeEvent(BlockInstance const& blockInstance,
    float radius, float maxResistance, bool isCanBreaking, bool isGeneratefire)
: blockInstance(blockInstance)
, radius(radius)
, maxResistance(maxResistance)
, isCanBreaking(isCanBreaking)
, isGeneratefire(isGeneratefire) {}
// clang-format on

LL_GETTER_IMPL(BlockExplodeEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(BlockExplodeEvent, float, radius, getRadius);
LL_SETTER_IMPL(BlockExplodeEvent, float, radius, setRadius);
LL_GETTER_IMPL(BlockExplodeEvent, float, maxResistance, getMaxResistance);
LL_SETTER_IMPL(BlockExplodeEvent, float, maxResistance, setMaxResistance);
LL_GETTER_IMPL(BlockExplodeEvent, bool, isCanBreaking, getIsCanBreaking);
LL_SETTER_IMPL(BlockExplodeEvent, bool, isCanBreaking, setIsCanBreaking);
LL_GETTER_IMPL(BlockExplodeEvent, bool, isGeneratefire, getIsGnerateFire);
LL_SETTER_IMPL(BlockExplodeEvent, bool, isGeneratefire, setIsGnerateFire);

} // namespace block

template class Event<block::BlockExplodeEvent>;
template class Listener<block::BlockExplodeEvent>;
template class EventManager<block::BlockExplodeEvent>;

} // namespace ll::event

TClasslessInstanceHook2("BlockExplodeEvent_hook_?explode@Explosion@@QEAAXXZ", void, "?explode@Explosion@@QEAAXXZ") {

    using ll::event::block::BlockExplodeEvent;
    using EventManager = ll::event::EventManager<BlockExplodeEvent>;

    try {
        auto acId = *(ActorUniqueID*)((QWORD*)this + 11);
        auto actor = Level::getEntity(acId);
        auto pos = ((Vec3*)(QWORD*)this)->toBlockPos();
        auto radius = *((float*)this + 3);
        auto blockSource = (BlockSource*)*((QWORD*)this + 12);
        auto maxResistance = *((float*)this + 26);
        auto genFire = (bool)*((BYTE*)this + 80);
        auto canBreaking = (bool)*((BYTE*)this + 81);

        auto blockInstance = Level::getBlockInstance(pos, blockSource);

        BlockExplodeEvent event(blockInstance, radius, maxResistance, canBreaking, genFire);
        EventManager::fireEvent(event);
        if (event.isCancelled()) {
            return;
        }

        *((float*)this + 3) = event.getRadius();
        *((float*)this + 26) = event.getMaxResistance();
        *((BYTE*)this + 80) = event.getIsGnerateFire();
        *((BYTE*)this + 81) = event.getIsCanBreaking();


    } catch (...) {
        ll::logger.error("Event Callback Failed!");
        ll::logger.error("Uncaught Exception Detected!");
        ll::logger.error("In Event: Entity or Block Explosion");
    }
}