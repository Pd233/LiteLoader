#include <llapi/event/player/PlayerConnectEvent.h>
#include <llapi/event/EventManager.h>
#include <llapi/mc/ServerPlayer.hpp>
#include <llapi/mc/ConnectionRequest.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace player {

PlayerConnectEvent::PlayerConnectEvent(Player* player) : player(player) {}

LL_GETTER_IMPL(PlayerConnectEvent, Player*, player, getPlayer);

} // namespace player

template class Event<player::PlayerConnectEvent>;
template class Listener<player::PlayerConnectEvent>;
template class EventManager<player::PlayerConnectEvent>;

} // namespace ll::event

TClasslessInstanceHook(void,
                       "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
                       "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
                       NetworkIdentifier* ni, ConnectionRequest* cr, ServerPlayer* sp) {
    ll::event::player::PlayerConnectEvent event((Player*)sp);
    ll::event::EventManager<ll::event::player::PlayerConnectEvent>::fireEvent(event);
    return original(this, ni, cr, sp);
}
