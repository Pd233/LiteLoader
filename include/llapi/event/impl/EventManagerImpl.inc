/**
* @brief This file is the implementation of the event manager.
* @note Only LiteLoader itself should include this file in the source code of event.
*/

#include <llapi/event/EventManager.h>

namespace ll::event {

template <typename EventType>
std::set<Listener<EventType>> EventManager<EventType>::listenerList;

template <typename EventType>
void EventManager<EventType>::addListener(Listener<EventType> listener) {
    if (listener.priority > Priority::Monitor) {
        listener.priority = Priority::Normal;
    }
    listenerList.insert(listener);
}

template <typename EventType>
void EventManager<EventType>::removeListener(Listener<EventType> listener) {
    listenerList.erase(listener);
}

template <typename EventType>
std::optional<Listener<EventType>> EventManager<EventType>::getListener(int id) noexcept {
    auto res = std::find_if(listenerList.begin(), listenerList.end(),
                            [id](const Listener<EventType>& listener) { return listener.id == id; });
    if (res != listenerList.end()) {
        return *res;
    }
    return std::nullopt;
}

template <typename EventType>
bool EventManager<EventType>::hasListener() noexcept {
    return !listenerList.empty();
}

template <typename EventType>
void EventManager<EventType>::fireEvent(EventType& event) {
    for (auto& listener : listenerList) {
        const_cast<Listener<EventType>&>(listener).call(event);
    }
}

} // namespace ll::event
