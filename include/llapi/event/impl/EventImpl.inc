/**
 * @brief This file is the implementation of the event.
 * @note Only LiteLoader itself should include this file in the source code of event.
 */

#include <llapi/event/Event.h>
#include <llapi/event/EventManager.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/LLAPI.h>


namespace ll::event {

template <typename EventType>
Listener<EventType> Event<EventType>::subscribe(const std::function<void(EventType&)>& callback, Priority priority) {
    Listener<EventType> listener(callback, priority);
    subscribe(listener);
    return listener;
}

template <typename EventType>
void Event<EventType>::subscribe(const Listener<EventType>& listener) {
    EventManager<EventType>::addListener(std::move(listener));
}

template <typename EventType>
void Event<EventType>::unsubscribe(const Listener<EventType>& listener) {
    EventManager<EventType>::removeListener(listener);
}

template <typename EventType>
void Event<EventType>::unsubscribe(int listenerId) noexcept {
    auto listener = EventManager<EventType>::getListener(listenerId);
    if (listener) {
        unsubscribe(*listener);
    }
}

} // namespace ll::event
