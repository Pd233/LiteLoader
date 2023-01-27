/**
 * @file  BaseCommandBlock.hpp
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
 * @brief MC class BaseCommandBlock.
 *
 */
class BaseCommandBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECOMMANDBLOCK
public:
    class BaseCommandBlock& operator=(class BaseCommandBlock const &) = delete;
    BaseCommandBlock(class BaseCommandBlock const &) = delete;
#endif

public:
    /**
     * @symbol ??0BaseCommandBlock@@QEAA@XZ
     * @hash   1017387583
     */
    MCAPI BaseCommandBlock();
    /**
     * @symbol ?getCommand@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1211934178
     */
    MCAPI std::string const & getCommand() const;
    /**
     * @symbol ?getLastOutput@BaseCommandBlock@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1389229714
     */
    MCAPI std::string getLastOutput() const;
    /**
     * @symbol ?getName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -11586436
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getRawName@BaseCommandBlock@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -969461794
     */
    MCAPI std::string const & getRawName() const;
    /**
     * @symbol ?getSuccessCount@BaseCommandBlock@@QEBAHXZ
     * @hash   1413621142
     */
    MCAPI int getSuccessCount() const;
    /**
     * @symbol ?getTickDelay@BaseCommandBlock@@QEBAHXZ
     * @hash   -1637077128
     */
    MCAPI int getTickDelay() const;
    /**
     * @symbol ?getTrackOutput@BaseCommandBlock@@QEBA_NXZ
     * @hash   -1395008940
     */
    MCAPI bool getTrackOutput() const;
    /**
     * @symbol ?getVersion@BaseCommandBlock@@QEBAHXZ
     * @hash   1999248216
     */
    MCAPI int getVersion() const;
    /**
     * @symbol ?load@BaseCommandBlock@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -705318145
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBUActorUniqueID@@@Z
     * @hash   -1039119872
     */
    MCAPI bool performCommand(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @symbol ?performCommand@BaseCommandBlock@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@AEA_N@Z
     * @hash   -1482123892
     */
    MCAPI bool performCommand(class BlockSource &, class BlockPos const &, bool &);
    /**
     * @symbol ?save@BaseCommandBlock@@QEBA_NAEAVCompoundTag@@@Z
     * @hash   -1214078313
     */
    MCAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBUActorUniqueID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1408309696
     */
    MCAPI void setCommand(class BlockSource &, struct ActorUniqueID const &, std::string const &);
    /**
     * @symbol ?setCommand@BaseCommandBlock@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   441300506
     */
    MCAPI void setCommand(class BlockSource &, class BlockPos const &, std::string const &);
    /**
     * @symbol ?setLastOutput@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   -1376233618
     */
    MCAPI void setLastOutput(std::string const &, std::vector<std::string> const &);
    /**
     * @symbol ?setName@BaseCommandBlock@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2041831394
     */
    MCAPI void setName(std::string const &);
    /**
     * @symbol ?setShouldExecuteOnFirstTick@BaseCommandBlock@@QEAAX_N@Z
     * @hash   -950171242
     */
    MCAPI void setShouldExecuteOnFirstTick(bool);
    /**
     * @symbol ?setSuccessCount@BaseCommandBlock@@QEAAXH@Z
     * @hash   594476200
     */
    MCAPI void setSuccessCount(int);
    /**
     * @symbol ?setTickDelay@BaseCommandBlock@@QEAAXH@Z
     * @hash   1629534358
     */
    MCAPI void setTickDelay(int);
    /**
     * @symbol ?setTrackOutput@BaseCommandBlock@@QEAAX_N@Z
     * @hash   -1506200752
     */
    MCAPI void setTrackOutput(bool);
    /**
     * @symbol ?shouldExecuteOnFirstTick@BaseCommandBlock@@QEBA_NXZ
     * @hash   -1198090576
     */
    MCAPI bool shouldExecuteOnFirstTick() const;
    /**
     * @symbol ??1BaseCommandBlock@@QEAA@XZ
     * @hash   1460237021
     */
    MCAPI ~BaseCommandBlock();

//private:
    /**
     * @symbol ?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z
     * @hash   -5844582
     */
    MCAPI bool _performCommand(class BlockSource &, class CommandOrigin const &, bool &);
    /**
     * @symbol ?_setCommand@BaseCommandBlock@@AEAAXAEAVBlockSource@@AEBVCommandOrigin@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1769303911
     */
    MCAPI void _setCommand(class BlockSource &, class CommandOrigin const &, std::string const &);
    /**
     * @symbol ?compile@BaseCommandBlock@@AEAAXAEBVCommandOrigin@@AEAVLevel@@@Z
     * @hash   180379612
     */
    MCAPI void compile(class CommandOrigin const &, class Level &);

private:
    /**
     * @symbol ?DefaultCommandBlockName@BaseCommandBlock@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   688363198
     */
    MCAPI static std::string const DefaultCommandBlockName;

};