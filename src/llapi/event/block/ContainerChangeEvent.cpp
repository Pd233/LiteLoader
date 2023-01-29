#include <llapi/event/block/ContainerChangeEvent.h>
#include <llapi/event/EventManager.h>

#include <llapi/mc/LevelContainerModel.hpp>
#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {
namespace block {

// clang-format off
ContainerChangeEvent::ContainerChangeEvent(Player* player, Actor* actor, BlockInstance const& blockInstance,
     Container* container, ItemStack* previousItemStack, ItemStack* newItemStack, int slot)
: player(player)
, actor(actor)
, blockInstance(blockInstance)
, container(container)
, slot(slot)
, previousItemStack(previousItemStack)
, newItemStack(newItemStack) {}
// clang-format on

LL_GETTER_IMPL(ContainerChangeEvent, Player*, player, getPlayer);
LL_GETTER_IMPL(ContainerChangeEvent, Actor*, player, getActor);
LL_GETTER_IMPL(ContainerChangeEvent, BlockInstance, blockInstance, getBlockInstance);
LL_GETTER_IMPL(ContainerChangeEvent, Container*, container, getContainer);
LL_GETTER_IMPL(ContainerChangeEvent, int, slot, getSlot);
LL_GETTER_IMPL(ContainerChangeEvent, ItemStack*, previousItemStack, getPreviousItemStack);
LL_GETTER_IMPL(ContainerChangeEvent, ItemStack*, newItemStack, getNewItemStack);

} // namespace block

template class Event<block::ContainerChangeEvent>;
template class Listener<block::ContainerChangeEvent>;
template class EventManager<block::ContainerChangeEvent>;

} // namespace ll::event

TInstanceHook(void, "?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z", LevelContainerModel,
              int slotNumber, ItemStack* oldItem, ItemStack* newItem) {

    using ll::event::block::ContainerChangeEvent;
    using EventManager = ll::event::EventManager<ContainerChangeEvent>;

    // IDA LevelContainerModel::LevelContainerModel
    auto player = static_cast<Player*>(dAccess<Actor*>(reinterpret_cast<char*>(this), 208));

    if (player->hasOpenContainer()) {
        auto blockPos = reinterpret_cast<BlockPos*>(reinterpret_cast<char*>(this) + 216);
        auto blockInstance = Level::getBlockInstance(blockPos, player->getDimensionId());

        ContainerChangeEvent event(player, this->getEntity(), blockInstance, blockInstance.getContainer(), oldItem,
                                   newItem, slotNumber + this->_getContainerOffset());
        EventManager::fireEvent(event);

        return original(this, slotNumber, oldItem, newItem);
    }
}