#include <llapi/event/player/PlayerAttackEvent.h>
#include <llapi/event/EventManager.h>
#include <llapi/mc/ServerPlayer.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace player {

PlayerAttackEvent::PlayerAttackEvent(Player* player, Player* target, float damage)
: player(player), target(target), damage(damage) {}

LL_GETTER_IMPL(PlayerAttackEvent, Player*, player, getPlayer);
LL_GETTER_IMPL(PlayerAttackEvent, Player*, target, getTarget);
LL_GETTER_IMPL(PlayerAttackEvent, float, damage, getDamage);
LL_SETTER_IMPL(PlayerAttackEvent, float, damage, setDamage);

} // namespace player

template class Event<player::PlayerAttackEvent>;
template class Listener<player::PlayerAttackEvent>;
template class EventManager<player::PlayerAttackEvent>;

} // namespace ll::event

struct {
    Player* player{};
    Actor* target{};
    bool cancelled = false;
} currentAttackingPlayer;
TInstanceHook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z", Player, Actor* ac,
              ActorDamageCause cause) {
    currentAttackingPlayer.player = this;
    currentAttackingPlayer.target = ac;
    auto res = original(this, ac, cause);
    if (currentAttackingPlayer.cancelled) {
        currentAttackingPlayer.cancelled = false;
        return false;
    }
    return res;
}
TInstanceHook(float, "?calculateAttackDamage@Actor@@QEAAMAEAV1@@Z", Actor, Actor* other) {
    auto damage = original(this, other);
    if ((Actor*)currentAttackingPlayer.player == this && currentAttackingPlayer.target == other) {
        ll::event::player::PlayerAttackEvent event((Player*)this, (Player*)other, damage);
        currentAttackingPlayer.player = nullptr;
        currentAttackingPlayer.target = nullptr;
        ll::event::EventManager<ll::event::player::PlayerAttackEvent>::fireEvent(event);
        if (event.isCancelled()) {
            currentAttackingPlayer.cancelled = true;
            return 0;
        }
        return event.getDamage();
    }
    return damage;
}
