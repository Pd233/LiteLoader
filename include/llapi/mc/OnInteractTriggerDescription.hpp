/**
 * @file  OnInteractTriggerDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnInteractTriggerDescription.
 *
 */
class OnInteractTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONINTERACTTRIGGERDESCRIPTION
public:
    class OnInteractTriggerDescription& operator=(class OnInteractTriggerDescription const &) = delete;
    OnInteractTriggerDescription(class OnInteractTriggerDescription const &) = delete;
    OnInteractTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   329368323
     */
    virtual ~OnInteractTriggerDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@OnInteractTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -651216912
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@OnInteractTriggerDescription@@UEBA_NXZ
     * @hash   1459365544
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@OnInteractTriggerDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -1054581110
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@OnInteractTriggerDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1728580616
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?NameID@OnInteractTriggerDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1300013597
     */
    MCAPI static std::string const NameID;

};