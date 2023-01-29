#include <llapi/event/player/PlayerJoinEvent.h>
#include <llapi/event/EventManager.h>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace player {

PlayerJoinEvent::PlayerJoinEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerJoinEvent, Player*, player, getPlayer);
} // namespace player

template class Event<player::PlayerJoinEvent>;
template class EventManager<player::PlayerJoinEvent>;
template class Listener<player::PlayerJoinEvent>;

} // namespace ll::event

TInstanceHook(bool, "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ", ServerPlayer) {
    ll::event::player::PlayerJoinEvent event(this);
    ll::event::EventManager<ll::event::player::PlayerJoinEvent>::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }
    return original(this);
}