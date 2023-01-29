#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Actor.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief command block execute event.
 */
class CmdBlockExecuteEvent : public Event<CmdBlockExecuteEvent>, public Cancellable {
    LL_RO_MEMBER(std::string, command, getCommand);
    LL_RO_MEMBER(bool, isMinecart, getIsMinecart);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Actor*, minecart, getMinecart);

    // clang-format off
    CmdBlockExecuteEvent(
        std::string const& command, bool isMinecart, BlockInstance const& blockInstance,Actor* minecart);
    CmdBlockExecuteEvent(
        std::string&& command, bool isMinecart, BlockInstance const& blockInstance, Actor* minecart);
    // clang-format on

    LL_DELETE_COPY(CmdBlockExecuteEvent);
    LL_DELETE_MOVE(CmdBlockExecuteEvent);
};
} // namespace ll::event::block