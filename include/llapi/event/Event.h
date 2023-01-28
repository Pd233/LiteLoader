/**
 * @file include/llapi/event/Event.h
 * @brief Event base classes.
 * @author Jasonzyt(https://github.com/Jasonzyt), LiteLDev(https://github.com/LiteLDev)
 * @copyright Copyright (c) 2020-present LiteLDev.
 */
#pragma once
#include <llapi/Global.h>
#include <llapi/utils/WinHelper.h>
#include <list>

namespace ll::event {

namespace detail {
/**
 * @brief Get global listener id and +1.
 * @return Current global listener id.
 */
LIAPI int getCurrentListenerId() noexcept;
/**
 * @brief Log event error.
 * @param msg Error message.
 * @param detail Error detail.
 * @param event Event name.
 * @param listenerId Listener id.
 * @param plugin Plugin handle.
 */
LIAPI void logEventError(const std::string& msg, const std::string& detail, const std::string& event, int listenerId,
                         HMODULE plugin);
} // namespace detail

/**
 * @brief Event priority enum.
 * @details The lower the priority, the earlier the event is executed.
 * @note Don't try forcing to be executed first.
 * @see EventManager::addListener
 */
enum class Priority : int8_t {
    Lowest = 0,
    Low = 1,
    Normal = 2,
    High = 3,
    Highest = 4,
    Monitor = 5
};

template <typename EventType>
class EventManager;

/**
 * @brief Event listener.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Listener {

    int id = -1;
    Priority priority = Priority::Normal;
    HMODULE plugin = nullptr;
    void* callback = nullptr;

    friend class EventManager<EventType>;

public:
    Listener(void* callback, Priority priority) {
        this->callback = callback;
        this->priority = priority;
        id = detail::getCurrentListenerId();
        plugin = GetCurrentModule();
    }

    /**
     * @brief Get plugin handle.
     * @return The plugin handle.
     */
    [[nodiscard]] HMODULE getPlugin() const {
        return plugin;
    }

    /**
     * @brief Call the event.
     * @param event Event instance to call.
     */
    void call(EventType& event) const;

    /**
     * @brief Unsubscribe the event.
     */
    void unsubscribe();
};

/**
 * @brief Event manager class.
 * @tparam EventType Event type.
 * @details This class is used to manage event listeners.
 */
template <typename EventType>
class EventManager {
    static std::list<Listener<EventType>> listenerList;

public:
    /**
     * @brief Add an event listener.
     * @param listener The listener instance to add.
     */
    static void addListener(const Listener<EventType>& listener) {
        int8_t priority = listener.priority;
        if (priority < 0 || priority > 5) {
            priority = (int8_t)Priority::Normal;
        }
        for (auto it = listenerList.begin(); it != listenerList.end(); ++it) {
            if ((int8_t)it->priority > priority) {
                listenerList.insert(it, listener);
                return;
            }
        }
        listenerList.push_back(listener);
    }

    /**
     * @brief Remove an event listener.
     * @param listener The listener to remove.
     */
    static void removeListener(const Listener<EventType>& listener) {
        listenerList.remove(listener);
    }

    /**
     * @brief Get the listener by id.
     * @param id The listener id.
     */
    static std::optional<Listener<EventType>> getListener(int id) noexcept {
        auto res = std::find(listenerList.begin(), listenerList.end(),
                             [id](const Listener<EventType>& listener) { return listener.id == id; });
        if (res != listenerList.end()) {
            return *res;
        }
        return {};
    }

    /**
     * @brief Get if the event has listeners.
     * @return True if the event has listeners.
     */
    [[nodiscard]] static bool hasListener() noexcept {
        return !listenerList.empty();
    }

    /**
     * @brief Call the event.
     * @param event Event instance to call.
     */
    static void call(EventType& event) {
        for (auto& listener : listenerList) {
            listener.call(event);
        }
    }
};

/**
 * @brief Event base class.
 * @tparam EventType Event type.
 */
template <typename EventType>
class Event {

public:
    /**
     * @brief Subscribe the event(const).
     * @param callback The callback function(const).
     * @param priority The priority of the listener.
     * @return The listener instance.
     * @see Priority
     */
    static Listener<EventType> subscribe(void (*callback)(const EventType&), Priority priority = Priority::Normal) {
        Listener<EventType> listener(reinterpret_cast<void*>(callback), priority);
        subscribe(listener);
        return listener;
    }

    /**
     * @brief Subscribe the event(non-const).
     * @param callback The callback function(non-const).
     * @param priority The priority of the listener.
     * @return The listener instance.
     * @see Priority
     */
    static Listener<EventType> subscribe(void (*callback)(EventType&), Priority priority = Priority::Normal) {
        Listener<EventType> listener(reinterpret_cast<void*>(callback), priority);
        subscribe(listener);
        return listener;
    }

    /**
     * @brief Subscribe the event.
     * @param listener The listener instance to subscribe.
     */
    static void subscribe(const Listener<EventType>& listener) {
        EventManager<EventType>::addListener(std::move(listener));
    }

    /**
     * @brief Unsubscribe the event.
     * @param listener The listener instance to unsubscribe.
     */
    static void unsubscribe(const Listener<EventType>& listener) {
        EventManager<EventType>::removeListener(listener);
    }

    /**
     * @brief Unsubscribe the event by id.
     * @param id The listener id.
     */
    static void unsubscribe(int listenerId) noexcept {
        auto listener = EventManager<EventType>::getListener(listenerId);
        if (listener) {
            unsubscribe(*listener);
        }
    }
};

/**
 * @brief Cancellable event base class.
 * @tparam EventType Event type.
 */
template <typename EventType>
class CancellableEvent : public Event<EventType> {

    bool cancelled_ = false;

public:
    /**
     * @brief Get if the event is cancelled.
     * @return True if the event is cancelled.
     */
    [[nodiscard]] bool isCancelled() const {
        return cancelled_;
    }

    /**
     * @brief Set if the event is cancelled.
     * @param cancelled True if the event is cancelled.
     */
    void setCancelled(bool cancelled) {
        cancelled_ = cancelled;
    }

    /**
     * @brief Cancel the event.
     */
    void cancel() {
        cancelled_ = true;
    }
};

template <typename EventType>
void Listener<EventType>::call(EventType& event) const {
    if (callback) {
        if (priority >= Priority::Monitor) {
            EventType copy = event; // Avoid modifying the original event
            try {
                reinterpret_cast<void (*)(EventType&)>(callback)(copy);
            } catch (const seh_exception& e) {
                detail::logEventError("SEH Exception Occurs!", e.what(), typeid(EventType).name(), id, plugin);
            } catch (const std::exception& e) {
                detail::logEventError("C++ Exception Occurs!", e.what(), typeid(EventType).name(), id, plugin);
            } catch (...) {
                detail::logEventError("C++ Exception Occurs!", "Unknown", typeid(EventType).name(), id, plugin);
            }
            if constexpr (std::is_base_of_v<CancellableEvent<EventType>, EventType>) {
                event.setCancelled(copy.isCancelled());
            }
            return;
        }
        try {
            reinterpret_cast<void (*)(EventType&)>(callback)(event);
        } catch (const seh_exception& e) {
            detail::logEventError("SEH Exception Occurs!", e.what(), typeid(EventType).name(), id, plugin);
        } catch (const std::exception& e) {
            detail::logEventError("C++ Exception Occurs!", e.what(), typeid(EventType).name(), id, plugin);
        } catch (...) {
            detail::logEventError("C++ Exception Occurs!", "Unknown", typeid(EventType).name(), id, plugin);
        }
    }
}

template <typename EventType>
void Listener<EventType>::unsubscribe() {
    if (id != -1) {
        EventType::unsubscribe(*this);
        id = -1;
    }
}

} // namespace ll::event