#include <llapi/event/block/CmdBlockExecuteEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/CommandOrigin.hpp>
#include <llapi/mc/BaseCommandBlock.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {
// clang-format off
CmdBlockExecuteEvent::CmdBlockExecuteEvent(
    std::string const& command, bool isMinecart, BlockInstance const& blockInstance, Actor* minecart)
: command(command), isMinecart(isMinecart), blockInstance(blockInstance), minecart(minecart) {}

CmdBlockExecuteEvent::CmdBlockExecuteEvent(
    std::string&& command, bool isMinecart, BlockInstance const& blockInstance, Actor* minecart)
: command(command), isMinecart(isMinecart), blockInstance(blockInstance), minecart(minecart) {}
// clang-format on

LL_GETTER_IMPL(CmdBlockExecuteEvent, std::string, command, getCommand);
LL_GETTER_IMPL(CmdBlockExecuteEvent, bool, isMinecart, getIsMinecart);
LL_GETTER_IMPL(CmdBlockExecuteEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(CmdBlockExecuteEvent, Actor*, minecart, getMinecart);

} // namespace block

template class Event<block::CmdBlockExecuteEvent>;
template class Listener<block::CmdBlockExecuteEvent>;
template class EventManager<block::CmdBlockExecuteEvent>;

} // namespace ll::event

TInstanceHook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
              BaseCommandBlock, BlockSource* blockSource, CommandOrigin* origin, bool* a4) {

    using ll::event::block::CmdBlockExecuteEvent;
    using EventManager = ll::event::EventManager<CmdBlockExecuteEvent>;

    auto& command = this->getCommand();
    bool isMinecart = false;
    Actor* minecart = nullptr;
    BlockInstance blockInstance = BlockInstance();

    if (static_cast<OriginType>(origin->getOriginType()) == OriginType::MinecartBlock) {
        isMinecart = true;
        minecart = origin->getEntity();
    } else {
        isMinecart = false;
        blockInstance = Level::getBlockInstance(origin->getBlockPosition(), blockSource);
    }

    CmdBlockExecuteEvent event(command, isMinecart, blockInstance, minecart);
    EventManager::fireEvent(event);
    if (event.isCancelled())
        return false;

    return original(this, blockSource, origin, a4);
}