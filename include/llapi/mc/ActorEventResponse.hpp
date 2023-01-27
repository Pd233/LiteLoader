/**
 * @file  ActorEventResponse.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorEventResponse.
 *
 */
class ActorEventResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTRESPONSE
public:
    class ActorEventResponse& operator=(class ActorEventResponse const &) = delete;
    ActorEventResponse(class ActorEventResponse const &) = delete;
    ActorEventResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2075552208
     */
    virtual ~ActorEventResponse();
    /**
     * @vftbl  1
     * @symbol ?getName@ActorEventResponse@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   757976899
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @hash   -780933545
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl  3
     * @symbol ?buildSchema@ActorEventResponse@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UActorEventResponseCollection@@@JsonUtil@@@std@@AEBV?$Factory@VActorEventResponse@@$$V@@@Z
     * @hash   -503829655
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>> &, class Factory<class ActorEventResponse> const &) const;

};