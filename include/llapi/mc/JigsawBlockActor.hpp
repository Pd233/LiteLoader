/**
 * @file  JigsawBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawBlockActor.
 *
 */
class JigsawBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWBLOCKACTOR
public:
    class JigsawBlockActor& operator=(class JigsawBlockActor const &) = delete;
    JigsawBlockActor(class JigsawBlockActor const &) = delete;
    JigsawBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   447030003
     */
    virtual ~JigsawBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@JigsawBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   688888640
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@JigsawBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1056020015
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol ?_getUpdatePacket@JigsawBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -1503819358
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@JigsawBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -1716090928
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0JigsawBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -2031208276
     */
    MCAPI JigsawBlockActor(class BlockPos const &);

};