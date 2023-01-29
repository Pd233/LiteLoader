#include <memory>

#include "llapi/event/Event.h"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"


#define DELETE_COPY(clazz)                                                                                             \
    clazz(const clazz&) = delete;                                                                                      \
    clazz& operator=(const clazz&) = delete;

namespace ll::event {

class PlayerJoinEvent : public Event<PlayerJoinEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);
    explicit PlayerJoinEvent(Player* player);

    DELETE_COPY(PlayerJoinEvent);
};
} // namespace ll::event
