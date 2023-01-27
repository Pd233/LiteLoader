/**
 * @file  Arrow.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Arrow.
 *
 */
class Arrow : public AbstractArrow {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROW
public:
    class Arrow& operator=(class Arrow const &) = delete;
    Arrow(class Arrow const &) = delete;
    Arrow() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?reloadHardcoded@Arrow@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -371217324
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   278956631
     */
    virtual ~Arrow();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Arrow@@UEAAXXZ
     * @hash   -1557292766
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  91
     * @symbol ?playerTouch@Arrow@@UEAAXAEAVPlayer@@@Z
     * @hash   -388949033
     */
    virtual void playerTouch(class Player &);
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  237
     * @symbol ?setAuxValue@Arrow@@UEAAXH@Z
     * @hash   -1961501598
     */
    virtual void setAuxValue(int);
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1802124542
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@Arrow@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -423289609
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@Arrow@@MEBAXAEAVCompoundTag@@@Z
     * @hash   -55745098
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  282
     * @symbol ?shoot@Arrow@@UEAAXAEBVVec3@@MM0@Z
     * @hash   -1851583099
     */
    virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /**
     * @vftbl  284
     * @symbol ?_getPickupItem@Arrow@@MEBA?AVItemStack@@XZ
     * @hash   -139874744
     */
    virtual class ItemStack _getPickupItem() const;
    /**
     * @vftbl  285
     * @symbol ?applyParticleColor@Arrow@@MEAAXPEAVParticle@@@Z
     * @hash   -1132140684
     */
    virtual void applyParticleColor(class Particle *);
    /**
     * @vftbl  286
     * @symbol ?getEffectColor@Arrow@@MEAA?AVColor@mce@@XZ
     * @hash   -634620880
     */
    virtual class mce::Color getEffectColor();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROW
    /**
     * @symbol ?canMakeStepSound@Arrow@@MEBA_NXZ
     * @hash   240452749
     */
    MCVAPI bool canMakeStepSound() const;
#endif
    /**
     * @symbol ??0Arrow@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1669634885
     */
    MCAPI Arrow(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?addMobEffect@Arrow@@QEAAXVMobEffectInstance@@@Z
     * @hash   -787221306
     */
    MCAPI void addMobEffect(class MobEffectInstance);
    /**
     * @symbol ?getAuxValue@Arrow@@QEBAHXZ
     * @hash   2032236590
     */
    MCAPI int getAuxValue() const;
    /**
     * @symbol ?setCritical@Arrow@@QEAAX_N@Z
     * @hash   453778304
     */
    MCAPI void setCritical(bool);
    /**
     * @symbol ?setEnchantFlame@Arrow@@QEAAXH@Z
     * @hash   -1013198082
     */
    MCAPI void setEnchantFlame(int);
    /**
     * @symbol ?setEnchantInfinity@Arrow@@QEAAXH@Z
     * @hash   -1047413638
     */
    MCAPI void setEnchantInfinity(int);
    /**
     * @symbol ?setEnchantPower@Arrow@@QEAAXH@Z
     * @hash   1151419658
     */
    MCAPI void setEnchantPower(int);
    /**
     * @symbol ?setEnchantPunch@Arrow@@QEAAXH@Z
     * @hash   2052255160
     */
    MCAPI void setEnchantPunch(int);

};