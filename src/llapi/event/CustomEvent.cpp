#include <llapi/event/CustomEvent.h>
#include <llapi/event/EventManager.h>
#include <llapi/mc/Player.hpp>

#include <llapi/event/impl/EventImpl.inc>
#include <llapi/event/impl/EventManagerImpl.inc>
#include <llapi/event/impl/ListenerImpl.inc>

namespace ll::event {

template class Event<CustomEvent>;
template class EventManager<CustomEvent>;
template class Listener<CustomEvent>;

} // namespace ll::event
