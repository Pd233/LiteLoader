#include "llapi/event/Event.h"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Block interacted event.
 */
class BlockInteractedEvent : public Event<BlockInteractedEvent>, public Cancellable {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Player*, player, getPlayer);
    BlockInteractedEvent(BlockInstance const& blockInstance, Player* player);

    LL_DELETE_COPY(BlockInteractedEvent);
    LL_DELETE_MOVE(BlockInteractedEvent);
};
} // namespace ll::event::block