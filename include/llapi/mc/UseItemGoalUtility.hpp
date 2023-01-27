/**
 * @file  UseItemGoalUtility.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace UseItemGoalUtility.
 *
 */
namespace UseItemGoalUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?finishUsingItem@UseItemGoalUtility@@YAXAEAVMob@@AEAUTick@@@Z
     * @hash   1181678052
     */
    MCAPI void finishUsingItem(class Mob &, struct Tick &);
    /**
     * @symbol ?isUsingItem@UseItemGoalUtility@@YA_NAEBVMob@@@Z
     * @hash   1712867340
     */
    MCAPI bool isUsingItem(class Mob const &);
    /**
     * @symbol ?setUsingItem@UseItemGoalUtility@@YAXAEAVMob@@_N@Z
     * @hash   558879586
     */
    MCAPI void setUsingItem(class Mob &, bool);
    /**
     * @symbol ?startUsingItem@UseItemGoalUtility@@YA_NAEAVMob@@AEBVItemStack@@AEAUTick@@@Z
     * @hash   -2014126430
     */
    MCAPI bool startUsingItem(class Mob &, class ItemStack const &, struct Tick &);

};