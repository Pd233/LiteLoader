#include <llapi/event/block/BlockInteractedEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

BlockInteractedEvent::BlockInteractedEvent(BlockInstance const& blockInstance, Player* player)
: blockInstance(blockInstance), player(player) {}

LL_GETTER_IMPL(BlockInteractedEvent, Player*, player, getPlayer);
LL_GETTER_IMPL(BlockInteractedEvent, BlockInstance, blockInstance, getBlockInstance);

} // namespace block

template class Event<block::BlockInteractedEvent>;
template class Listener<block::BlockInteractedEvent>;
template class EventManager<block::BlockInteractedEvent>;

} // namespace ll::event

TClasslessInstanceHook(
    unsigned short,
    "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
    Player* player, BlockPos* blockPos) {
    ll::event::block::BlockInteractedEvent event(Level::getBlockInstance(*blockPos, player->getDimensionId()), player);
    ll::event::EventManager<ll::event::block::BlockInteractedEvent>::fireEvent(event);
    if (event.isCancelled()) {
        return 0;
    }
    return original(this, player, blockPos);
}