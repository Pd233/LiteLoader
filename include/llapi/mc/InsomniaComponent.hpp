/**
 * @file  InsomniaComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsomniaComponent.
 *
 */
class InsomniaComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIACOMPONENT
public:
    class InsomniaComponent& operator=(class InsomniaComponent const &) = delete;
    InsomniaComponent(class InsomniaComponent const &) = delete;
    InsomniaComponent() = delete;
#endif

public:
    /**
     * @symbol ?addAdditionalSaveData@InsomniaComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -1603547976
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getInsomniaTimerTicks@InsomniaComponent@@QEBAHXZ
     * @hash   -223616758
     */
    MCAPI int getInsomniaTimerTicks() const;
    /**
     * @symbol ?getTicksUntilInsomnia@InsomniaComponent@@QEBAHXZ
     * @hash   1009888536
     */
    MCAPI int getTicksUntilInsomnia() const;
    /**
     * @symbol ?incrementTimeSinceRest@InsomniaComponent@@QEAAHXZ
     * @hash   1061058844
     */
    MCAPI int incrementTimeSinceRest();
    /**
     * @symbol ?readAdditionalSaveData@InsomniaComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1410755334
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?restartTimer@InsomniaComponent@@QEAAXXZ
     * @hash   1424770319
     */
    MCAPI void restartTimer();

};