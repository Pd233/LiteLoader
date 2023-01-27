/**
 * @file  KeyFrameTransform.hpp
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
 * @brief MC class KeyFrameTransform.
 *
 */
class KeyFrameTransform {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KEYFRAMETRANSFORM
public:
    class KeyFrameTransform& operator=(class KeyFrameTransform const &) = delete;
    KeyFrameTransform(class KeyFrameTransform const &) = delete;
    KeyFrameTransform() = delete;
#endif

public:
    /**
     * @symbol ??0KeyFrameTransform@@QEAA@M@Z
     * @hash   935206095
     */
    MCAPI KeyFrameTransform(float);
    /**
     * @symbol ?getLerpMode@KeyFrameTransform@@QEAAAEAVKeyFrameLerpMode@@XZ
     * @hash   167426192
     */
    MCAPI class KeyFrameLerpMode & getLerpMode();
    /**
     * @symbol ??4KeyFrameTransform@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   511841264
     */
    MCAPI class KeyFrameTransform & operator=(class KeyFrameTransform &&);
    /**
     * @symbol ?optimizeAndGetDataValues@KeyFrameTransform@@QEAA_NAEAVVec3@@0@Z
     * @hash   -1597180076
     */
    MCAPI bool optimizeAndGetDataValues(class Vec3 &, class Vec3 &);
    /**
     * @symbol ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@@Z
     * @hash   11580178
     */
    MCAPI void set(class ExpressionNode const &);
    /**
     * @symbol ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@AEBVVec3@@@Z
     * @hash   1052497363
     */
    MCAPI void set(class ExpressionNode const &, class Vec3 const &);
    /**
     * @symbol ?set@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
     * @hash   1205785185
     */
    MCAPI void set(class ExpressionNode const &, int);
    /**
     * @symbol ?setPost@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
     * @hash   -362733951
     */
    MCAPI void setPost(class ExpressionNode const &, int);
    /**
     * @symbol ?setPre@KeyFrameTransform@@QEAAXAEBVExpressionNode@@H@Z
     * @hash   2073436931
     */
    MCAPI void setPre(class ExpressionNode const &, int);
    /**
     * @symbol ??1KeyFrameTransform@@QEAA@XZ
     * @hash   1877816666
     */
    MCAPI ~KeyFrameTransform();
    /**
     * @symbol ?computeCubicPolynomial@KeyFrameTransform@@SAXPEAV1@AEAV1@10@Z
     * @hash   1593264551
     */
    MCAPI static void computeCubicPolynomial(class KeyFrameTransform *, class KeyFrameTransform &, class KeyFrameTransform &, class KeyFrameTransform *);

};