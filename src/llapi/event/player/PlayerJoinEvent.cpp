#include <llapi/event/player/PlayerJoinEvent.h>
#include <llapi/event/EventManager.h>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event::player {

PlayerJoinEvent::PlayerJoinEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerJoinEvent, Player*, player, getPlayer);

template class Event<PlayerJoinEvent>;
template class EventManager<PlayerJoinEvent>;
template class Listener<PlayerJoinEvent>;

} // namespace ll::event::player
