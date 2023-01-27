/**
 * @file  CommandBlockDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandBlockDescription.
 *
 */
class CommandBlockDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKDESCRIPTION
public:
    class CommandBlockDescription& operator=(class CommandBlockDescription const &) = delete;
    CommandBlockDescription(class CommandBlockDescription const &) = delete;
    CommandBlockDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@CommandBlockDescription@@UEBAPEBDXZ
     * @hash   -120350214
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -1986442264
     */
    virtual ~CommandBlockDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@CommandBlockDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -1559524727
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@CommandBlockDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   1509697731
     */
    virtual void serializeData(class Json::Value &) const;

};