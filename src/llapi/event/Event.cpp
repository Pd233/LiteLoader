#include <llapi/event/Event.h>
#include <llapi/utils/StringHelper.h>
#include <llapi/LLAPI.h>
#include <liteloader/LiteLoader.h>

namespace ll::event {

namespace detail {

int globalListenerId = 0;

LIAPI int getCurrentListenerId() noexcept {
    return globalListenerId++;
}

LIAPI void logEventError(const std::string& msg, const std::string& detail, const std::string& event, int listenerId,
                         HMODULE plugin) {
    std::string pluginName = "[Unknown]";
    if (plugin != nullptr) {
        auto info = ll::getPlugin(plugin);
        if (info != nullptr) {
            pluginName = info->name;
        } else {
            pluginName = GetModuleName(plugin);
        }
    }
    logger.error(msg);
    for (auto& line : SplitStrWithPattern(detail, "\n")) {
        logger.error(line);
    }
    logger.error("- In event: {}", event);
    logger.error("- In listener: {} (Subscribed by Plugin <{}>)", listenerId, pluginName);
}

} // namespace detail

template <typename EventType>
std::list<Listener<EventType>> EventManager<EventType>::listenerList;

} // namespace ll::event