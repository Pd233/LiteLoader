/**
 * @file  MovementInterpolatorSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MovementInterpolatorSystem.
 *
 */
class MovementInterpolatorSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATORSYSTEM
public:
    class MovementInterpolatorSystem& operator=(class MovementInterpolatorSystem const &) = delete;
    MovementInterpolatorSystem(class MovementInterpolatorSystem const &) = delete;
    MovementInterpolatorSystem() = delete;
#endif

public:
    /**
     * @symbol ?createOnGroundPostTickSystem@MovementInterpolatorSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -1914727138
     */
    MCAPI static struct TickingSystemWithInfo createOnGroundPostTickSystem();
    /**
     * @symbol ?createTickSystem@MovementInterpolatorSystem@@SA?AUTickingSystemWithInfo@@_N@Z
     * @hash   2002622185
     */
    MCAPI static struct TickingSystemWithInfo createTickSystem(bool);
    /**
     * @symbol ?onGroundPostTick@MovementInterpolatorSystem@@SAXAEBUMovementInterpolatorComponent@@AEAUStateVectorComponent@@@Z
     * @hash   -1349851885
     */
    MCAPI static void onGroundPostTick(struct MovementInterpolatorComponent const &, struct StateVectorComponent &);
    /**
     * @symbol ?tick@MovementInterpolatorSystem@@SAXAEAVActor@@@Z
     * @hash   -1600161648
     */
    MCAPI static void tick(class Actor &);

};