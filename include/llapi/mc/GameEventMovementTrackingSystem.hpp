/**
 * @file  GameEventMovementTrackingSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMovementTrackingSystem.
 *
 */
class GameEventMovementTrackingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGSYSTEM
public:
    class GameEventMovementTrackingSystem& operator=(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem(class GameEventMovementTrackingSystem const &) = delete;
    GameEventMovementTrackingSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2045714443
     */
    virtual ~GameEventMovementTrackingSystem();
    /**
     * @vftbl  1
     * @hash   -1316591615
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol ?tick@GameEventMovementTrackingSystem@@UEAAXAEAVEntityRegistry@@@Z
     * @hash   1276075277
     */
    virtual void tick(class EntityRegistry &);

//private:
    /**
     * @symbol ?_tickGameEventMovementTrackingComponent@GameEventMovementTrackingSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VGameEventMovementTrackingComponent@@@@@Z
     * @hash   -887833361
     */
    MCAPI static void _tickGameEventMovementTrackingComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class GameEventMovementTrackingComponent> &);
    /**
     * @symbol ?_trackMovement@GameEventMovementTrackingSystem@@CAXAEAVActor@@AEAVGameEventMovementTrackingComponent@@@Z
     * @hash   625632516
     */
    MCAPI static void _trackMovement(class Actor &, class GameEventMovementTrackingComponent &);

private:

};