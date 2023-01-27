/**
 * @file  LoopbackPacketSender.hpp
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
 * @brief MC class LoopbackPacketSender.
 *
 */
class LoopbackPacketSender {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOPBACKPACKETSENDER
public:
    class LoopbackPacketSender& operator=(class LoopbackPacketSender const &) = delete;
    LoopbackPacketSender(class LoopbackPacketSender const &) = delete;
    LoopbackPacketSender() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1744683438
     */
    virtual ~LoopbackPacketSender();
    /**
     * @vftbl  1
     * @symbol ?send@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
     * @hash   -1025664571
     */
    virtual void send(class Packet &);
    /**
     * @vftbl  2
     * @symbol ?sendToServer@LoopbackPacketSender@@UEAAXAEAVPacket@@@Z
     * @hash   205015079
     */
    virtual void sendToServer(class Packet &);
    /**
     * @vftbl  3
     * @symbol ?sendToClient@LoopbackPacketSender@@UEAAXPEBVUserEntityIdentifierComponent@@AEBVPacket@@@Z
     * @hash   327598327
     */
    virtual void sendToClient(class UserEntityIdentifierComponent const *, class Packet const &);
    /**
     * @vftbl  4
     * @symbol ?sendToClient@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@AEBVPacket@@W4SubClientId@@@Z
     * @hash   2102689776
     */
    virtual void sendToClient(class NetworkIdentifier const &, class Packet const &, enum class SubClientId);
    /**
     * @vftbl  5
     * @symbol ?sendToClients@LoopbackPacketSender@@UEAAXAEBV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@AEBVPacket@@@Z
     * @hash   -52542976
     */
    virtual void sendToClients(std::vector<struct NetworkIdentifierWithSubId> const &, class Packet const &);
    /**
     * @vftbl  6
     * @symbol ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVPacket@@@Z
     * @hash   -1760431519
     */
    virtual void sendBroadcast(class Packet const &);
    /**
     * @vftbl  7
     * @symbol ?sendBroadcast@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@W4SubClientId@@AEBVPacket@@@Z
     * @hash   1212371407
     */
    virtual void sendBroadcast(class NetworkIdentifier const &, enum class SubClientId, class Packet const &);
    /**
     * @vftbl  8
     * @symbol ?flush@LoopbackPacketSender@@UEAAXAEBVNetworkIdentifier@@$$QEAV?$function@$$A6AXXZ@std@@@Z
     * @hash   -2140261015
     */
    virtual void flush(class NetworkIdentifier const &, class std::function<void (void)> &&);
    /**
     * @symbol ??0LoopbackPacketSender@@QEAA@W4SubClientId@@AEAVNetworkHandler@@@Z
     * @hash   -2060671790
     */
    MCAPI LoopbackPacketSender(enum class SubClientId, class NetworkHandler &);
    /**
     * @symbol ?addLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
     * @hash   823591620
     */
    MCAPI void addLoopbackCallback(class NetEventCallback &);
    /**
     * @symbol ?removeLoopbackCallback@LoopbackPacketSender@@QEAAXAEAVNetEventCallback@@@Z
     * @hash   211446320
     */
    MCAPI void removeLoopbackCallback(class NetEventCallback &);
    /**
     * @symbol ?setUserList@LoopbackPacketSender@@QEAAXPEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@@Z
     * @hash   351090343
     */
    MCAPI void setUserList(std::vector<class OwnerPtrT<struct EntityRefTraits>> const *);

};