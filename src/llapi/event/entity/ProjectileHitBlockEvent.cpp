#include <llapi/event/entity/ProjectileHitBlockEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/BlockPos.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace entity {

ProjectileHitBlockEvent::ProjectileHitBlockEvent(BlockInstance const& blockInstance, Actor* source)
: blockInstance(blockInstance), source(source) {}

LL_GETTER_IMPL(ProjectileHitBlockEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(ProjectileHitBlockEvent, Actor*, source, getSource);

} // namespace entity

template class Event<entity::ProjectileHitBlockEvent>;
template class Listener<entity::ProjectileHitBlockEvent>;
template class EventManager<entity::ProjectileHitBlockEvent>;

} // namespace ll::event

TInstanceHook(void, "?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z", Block,
              BlockSource* blockSource, BlockPos* blockPos, Actor* actor) {

    using ll::event::entity::ProjectileHitBlockEvent;
    using EventManager = ll::event::EventManager<ProjectileHitBlockEvent>;

    // Exclude default position BlockPos::Zero
    if ((blockPos->x | blockPos->y | blockPos->z) == 0) // actor->getPos().distanceTo(bp->center())>5)
        return original(this, blockSource, blockPos, actor);

    if (this->getTypeName() != "minecraft:air") {
        auto blockInstance = Level::getBlockInstance(blockPos, blockSource);
        ProjectileHitBlockEvent event(blockInstance, actor);
        EventManager::fireEvent(event);
    }
    return original(this, blockSource, blockPos, actor);
}