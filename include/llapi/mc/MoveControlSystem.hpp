/**
 * @file  MoveControlSystem.hpp
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
 * @brief MC class MoveControlSystem.
 *
 */
class MoveControlSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSYSTEM
public:
    class MoveControlSystem& operator=(class MoveControlSystem const &) = delete;
    MoveControlSystem(class MoveControlSystem const &) = delete;
    MoveControlSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1019237353
     */
    virtual ~MoveControlSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@MoveControlSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   -1723391365
     */
    virtual void tick(class EntityRegistry &);

};