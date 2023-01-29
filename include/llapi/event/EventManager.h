#pragma once

#include "llapi/event/Listener.h"

namespace ll::event {

/**
 * @brief Event manager class.
 * @tparam EventType Event type.
 * @details This class is used to manage event listeners.
 */
template <typename EventType>
class EventManager {
private:
    static std::set<Listener<EventType>> listenerList;

public:
    /**
     * @brief Add an event listener.
     * @param listener The listener instance to add.
     */
    LIAPI static void addListener(Listener<EventType> listener);

    /**
     * @brief Remove an event listener.
     * @param listener The listener to remove.
     */
    LIAPI static void removeListener(Listener<EventType> listener);

    /**
     * @brief Get the listener by id.
     * @param id The listener id.
     */
    LIAPI static std::optional<Listener<EventType>> getListener(int id) noexcept;

    /**
     * @brief Get if the event has listeners.
     * @return True if the event has listeners.
     */
    [[nodiscard]] LIAPI static bool hasListener() noexcept;

    /**
     * @brief Call the event.
     * @param event Event instance to fireEvent.
     */
    LIAPI static void fireEvent(EventType& event);
};

} // namespace ll::event