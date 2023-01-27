/**
 * @file  ProcessGlobals.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ProcessGlobals.
 *
 */
namespace ProcessGlobals {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?g_defaultProcessQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
     * @hash   34439574
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_defaultProcessQueue;
    /**
     * @symbol ?g_processQueue@ProcessGlobals@@3U?$atomic@PEAUXTaskQueueObject@@@std@@A
     * @hash   1591639642
     */
    MCAPI extern struct std::atomic<struct XTaskQueueObject *> g_processQueue;

};