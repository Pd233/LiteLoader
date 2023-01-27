/**
 * @file  MolangMemberArray.hpp
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
 * @brief MC structure MolangMemberArray.
 *
 */
struct MolangMemberArray {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGMEMBERARRAY
public:
    struct MolangMemberArray& operator=(struct MolangMemberArray const &) = delete;
    MolangMemberArray(struct MolangMemberArray const &) = delete;
#endif

public:
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_XYZ@@AEBVVec3@@@Z
     * @hash   -1431607875
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XYZ, class Vec3 const &);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_XY@@AEBVVec2@@@Z
     * @hash   1232308725
     */
    MCAPI MolangMemberArray(enum class MolangStruct_XY, class Vec2 const &);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_UV@@MM@Z
     * @hash   1410109018
     */
    MCAPI MolangMemberArray(enum class MolangStruct_UV, float, float);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_TentacleAngleAndSwimRotation@@MM@Z
     * @hash   -1879153532
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TentacleAngleAndSwimRotation, float, float);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_TRS@@$$QEAU0@11@Z
     * @hash   1733672832
     */
    MCAPI MolangMemberArray(enum class MolangStruct_TRS, struct MolangMemberArray &&, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_SpeedAndDirection@@MAEBVVec3@@@Z
     * @hash   -1908847578
     */
    MCAPI MolangMemberArray(enum class MolangStruct_SpeedAndDirection, float, class Vec3 const &);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RotYAndPosY@@MM@Z
     * @hash   -1556732290
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RotYAndPosY, float, float);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RGBA@@AEBVColor@mce@@@Z
     * @hash   1863966931
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGBA, class mce::Color const &);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_RGB@@AEBVColor@mce@@@Z
     * @hash   -1150750897
     */
    MCAPI MolangMemberArray(enum class MolangStruct_RGB, class mce::Color const &);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_PoseIndexAndHurtTime@@HH@Z
     * @hash   -1533572280
     */
    MCAPI MolangMemberArray(enum class MolangStruct_PoseIndexAndHurtTime, int, int);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_MinAndMax@@$$QEAU0@1@Z
     * @hash   1924211625
     */
    MCAPI MolangMemberArray(enum class MolangStruct_MinAndMax, struct MolangMemberArray &&, struct MolangMemberArray &&);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@W4MolangStruct_BaseAndPattern@@HH@Z
     * @hash   -874656136
     */
    MCAPI MolangMemberArray(enum class MolangStruct_BaseAndPattern, int, int);
    /**
     * @symbol ??0MolangMemberArray@@QEAA@XZ
     * @hash   -1138066933
     */
    MCAPI MolangMemberArray();
    /**
     * @symbol ?add@MolangMemberArray@@QEAAXAEBVHashedString@@AEBUMolangScriptArg@@@Z
     * @hash   -1304354931
     */
    MCAPI void add(class HashedString const &, struct MolangScriptArg const &);
    /**
     * @symbol ?get@MolangMemberArray@@QEBAPEBUMolangScriptArg@@AEBVHashedString@@@Z
     * @hash   2048447100
     */
    MCAPI struct MolangScriptArg const * get(class HashedString const &) const;
    /**
     * @symbol ?getMembers@MolangMemberArray@@QEBAPEBV?$vector@UMolangMemberVariable@@V?$allocator@UMolangMemberVariable@@@std@@@std@@XZ
     * @hash   2015968081
     */
    MCAPI std::vector<struct MolangMemberVariable> const * getMembers() const;
    /**
     * @symbol ?getOrAdd@MolangMemberArray@@QEAAAEAUMolangScriptArg@@AEBVHashedString@@@Z
     * @hash   -2065803867
     */
    MCAPI struct MolangScriptArg & getOrAdd(class HashedString const &);
    /**
     * @symbol ??8MolangMemberArray@@QEBA_NAEBU0@@Z
     * @hash   -2116938612
     */
    MCAPI bool operator==(struct MolangMemberArray const &) const;
    /**
     * @symbol ??1MolangMemberArray@@QEAA@XZ
     * @hash   94524363
     */
    MCAPI ~MolangMemberArray();

};