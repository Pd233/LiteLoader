/**
 * @file  BlockLootComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockLootComponent.
 *
 */
class BlockLootComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENT
public:
    class BlockLootComponent& operator=(class BlockLootComponent const &) = delete;
    BlockLootComponent(class BlockLootComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockLootComponent@@QEAA@XZ
     * @hash   -1249083020
     */
    MCAPI BlockLootComponent();
    /**
     * @symbol ?getLootTable@BlockLootComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1382209470
     */
    MCAPI std::string const & getLootTable() const;

};