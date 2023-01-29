#pragma once

#include <list>
#include <set>
#include <string>
#include <functional>

#include <magic_enum.hpp>

#include "llapi/event/Cancellable.h"
#include "llapi/event/Listener.h"
#include "llapi/utils/WinHelper.h"
#include "llapi/LLAPI.h"

namespace ll::event {

/**
 * @brief Event base class.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Event {

public:
    /**
     * @brief Subscribe the event.
     * @param callback The callback function.
     * @param priority The priority of the listener.
     * @return The listener instance.
     * @see Priority
     * @par Example
     * @code
     * AEvent::subscribe([](AEvent& ev) {
     *     // do something
     *     ev.cancel();
     * });
     * @endcode
     */
    LIAPI static Listener<EventType> subscribe(const std::function<void(EventType&)>& callback,
                                               Priority priority = Priority::Normal);

    /**
     * @brief Subscribe the event.
     * @param listener The listener instance to subscribe.
     */
    LIAPI static void subscribe(const Listener<EventType>& listener);

    /**
     * @brief Unsubscribe the event.
     * @param listener The listener instance to unsubscribe.
     */
    LIAPI static void unsubscribe(const Listener<EventType>& listener);

    /**
     * @brief Unsubscribe the event by id.
     * @param id The listener id.
     */
    LIAPI static void unsubscribe(int listenerId) noexcept;
};

} // namespace ll::event
