/**
 * @file  ServerPlayer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Bedrock.hpp"
#include "Player.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Player.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayer.
 *
 */
class ServerPlayer : public Player {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYER
public:
    class ServerPlayer& operator=(class ServerPlayer const &) = delete;
    ServerPlayer(class ServerPlayer const &) = delete;
    ServerPlayer() = delete;
#endif

public:
    /**
     * @vftbl  12
     * @symbol ?initializeComponents@ServerPlayer@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1439810124
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol ?_serverInitItemStackIds@ServerPlayer@@EEAAXXZ
     * @hash   -1502774550
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl  16
     * @hash   -1283763122
     */
    virtual ~ServerPlayer();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@ServerPlayer@@UEAAXXZ
     * @hash   -1925959609
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -71033267
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   131157715
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1427953849
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
     * @hash   1451965395
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  117
     * @symbol ?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z
     * @hash   -1912460134
     */
    virtual bool isValidTarget(class Actor *) const;
    /**
     * @vftbl  144
     * @symbol ?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z
     * @hash   -821903134
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  155
     * @symbol ?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     * @hash   1803485751
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl  165
     * @symbol ?setOffhandSlot@ServerPlayer@@UEAAXAEBVItemStack@@@Z
     * @hash   -101285529
     */
    virtual void setOffhandSlot(class ItemStack const &);
    /**
     * @vftbl  170
     * @symbol ?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1249630023
     */
    virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  182
     * @symbol ?canChangeDimensionsUsingPortal@ServerPlayer@@UEBA_NXZ
     * @hash   1627816519
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  184
     * @symbol ?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     * @hash   1197187927
     */
    virtual void changeDimension(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl  185
     * @symbol ?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ
     * @hash   1577477379
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl  186
     * @symbol ?checkFallDamage@ServerPlayer@@UEAAXM_N@Z
     * @hash   -473055809
     */
    virtual void checkFallDamage(float, bool);
    /**
     * @vftbl  188
     * @symbol ?handleFallDistanceOnServer@ServerPlayer@@UEAAXMM_N@Z
     * @hash   -427125137
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  214
     * @symbol ?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     * @hash   1047277946
     */
    virtual void onEffectAdded(class MobEffectInstance &);
    /**
     * @vftbl  215
     * @symbol ?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     * @hash   745902335
     */
    virtual void onEffectUpdated(class MobEffectInstance &);
    /**
     * @vftbl  216
     * @symbol ?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z
     * @hash   -1553114358
     */
    virtual void onEffectRemoved(class MobEffectInstance &);
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
     * @vftbl  250
     * @symbol ?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   -1450334297
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
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
     * @symbol ?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z
     * @hash   -1953394888
     */
    virtual void knockback(class Actor *, int, float, float, float, float, float);
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  295
     * @symbol ?aiStep@ServerPlayer@@UEAAXXZ
     * @hash   -287349913
     */
    virtual void aiStep();
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  320
     * @symbol ?hurtArmorSlots@ServerPlayer@@UEAAXAEBVActorDamageSource@@HV?$bitset@$03@std@@@Z
     * @hash   -547117128
     */
    virtual void hurtArmorSlots(class ActorDamageSource const &, int, class std::bitset<4>);
    /**
     * @vftbl  321
     * @symbol ?setDamagedArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
     * @hash   -2102976666
     */
    virtual void setDamagedArmor(enum class ArmorSlot, class ItemStack const &);
    /**
     * @vftbl  322
     * @symbol ?sendArmorDamage@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
     * @hash   1989430156
     */
    virtual void sendArmorDamage(class std::bitset<4>);
    /**
     * @vftbl  323
     * @symbol ?sendArmor@ServerPlayer@@UEAAXV?$bitset@$03@std@@@Z
     * @hash   624930907
     */
    virtual void sendArmor(class std::bitset<4>);
    /**
     * @vftbl  333
     * @symbol ?clearVanishEnchantedItemsOnDeath@ServerPlayer@@UEAAXXZ
     * @hash   1190606648
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @vftbl  334
     * @symbol ?sendInventory@ServerPlayer@@UEAAX_N@Z
     * @hash   -723336075
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl  346
     * @hash   -971879163
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @vftbl  362
     * @symbol ?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z
     * @hash   2095597494
     */
    virtual void prepareRegion(class ChunkSource &);
    /**
     * @vftbl  363
     * @symbol ?destroyRegion@ServerPlayer@@UEAAXXZ
     * @hash   -1057649551
     */
    virtual void destroyRegion();
    /**
     * @vftbl  368
     * @symbol ?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
     * @hash   2059511343
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl  369
     * @symbol ?tickWorld@ServerPlayer@@UEAAXAEBUTick@@@Z
     * @hash   636611353
     */
    virtual void tickWorld(struct Tick const &);
    /**
     * @vftbl  370
     * @hash   -949285092
     */
    virtual void __unk_vfn_370();
    /**
     * @vftbl  372
     * @symbol ?moveView@ServerPlayer@@UEAAXXZ
     * @hash   -2142990855
     */
    virtual void moveView();
    /**
     * @vftbl  373
     * @symbol ?moveSpawnView@ServerPlayer@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -898914784
     */
    virtual void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    /**
     * @vftbl  376
     * @symbol ?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z
     * @hash   2122797015
     */
    virtual void checkMovementStats(class Vec3 const &);
    /**
     * @vftbl  377
     * @hash   -892525549
     */
    virtual void __unk_vfn_377();
    /**
     * @vftbl  378
     * @hash   -884144668
     */
    virtual void __unk_vfn_378();
    /**
     * @vftbl  379
     * @symbol ?respawn@ServerPlayer@@UEAAXXZ
     * @hash   -1025862357
     */
    virtual void respawn();
    /**
     * @vftbl  380
     * @hash   -862903685
     */
    virtual void __unk_vfn_380();
    /**
     * @vftbl  381
     * @hash   -919732420
     */
    virtual void __unk_vfn_381();
    /**
     * @vftbl  386
     * @hash   -915114815
     */
    virtual void __unk_vfn_386();
    /**
     * @vftbl  387
     * @hash   -914191294
     */
    virtual void __unk_vfn_387();
    /**
     * @vftbl  388
     * @symbol ?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z
     * @hash   958463435
     */
    virtual void openTrading(struct ActorUniqueID const &, bool);
    /**
     * @vftbl  390
     * @hash   -892026790
     */
    virtual void __unk_vfn_390();
    /**
     * @vftbl  391
     * @symbol ?openNpcInteractScreen@ServerPlayer@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
     * @hash   1086203401
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>);
    /**
     * @vftbl  392
     * @symbol ?openInventory@ServerPlayer@@UEAAXXZ
     * @hash   241176885
     */
    virtual void openInventory();
    /**
     * @vftbl  393
     * @hash   -889256227
     */
    virtual void __unk_vfn_393();
    /**
     * @vftbl  394
     * @hash   -888332706
     */
    virtual void __unk_vfn_394();
    /**
     * @vftbl  395
     * @symbol ?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   416372407
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /**
     * @vftbl  396
     * @symbol ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     * @hash   866460055
     */
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const &, std::string const &, std::string const &);
    /**
     * @vftbl  397
     * @symbol ?displayTextObjectWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     * @hash   -1806421354
     */
    virtual void displayTextObjectWhisperMessage(std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl  398
     * @symbol ?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
     * @hash   1366529578
     */
    virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl  400
     * @symbol ?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z
     * @hash   -355602350
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl  404
     * @hash   -258491384
     */
    virtual void __unk_vfn_404();
    /**
     * @vftbl  405
     * @hash   -257567863
     */
    virtual void __unk_vfn_405();
    /**
     * @vftbl  406
     * @symbol ?isHostingPlayer@ServerPlayer@@UEBA_NXZ
     * @hash   -1233913115
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl  407
     * @symbol ?isLoading@ServerPlayer@@UEBA_NXZ
     * @hash   -730425418
     */
    virtual bool isLoading() const;
    /**
     * @vftbl  408
     * @symbol ?isPlayerInitialized@ServerPlayer@@UEBA_NXZ
     * @hash   886713821
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl  409
     * @hash   -253873779
     */
    virtual void __unk_vfn_409();
    /**
     * @vftbl  412
     * @symbol ?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z
     * @hash   1168770806
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl  416
     * @hash   -187560935
     */
    virtual void __unk_vfn_416();
    /**
     * @vftbl  420
     * @symbol ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
     * @hash   -396189973
     */
    virtual void setContainerData(class IContainerManager &, int, int);
    /**
     * @vftbl  421
     * @symbol ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
     * @hash   -1078947830
     */
    virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /**
     * @vftbl  423
     * @symbol ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
     * @hash   -615563218
     */
    virtual void refreshContainer(class IContainerManager &);
    /**
     * @vftbl  426
     * @symbol ?isActorRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z
     * @hash   1885178263
     */
    virtual bool isActorRelevant(class Actor const &);
    /**
     * @vftbl  427
     * @symbol ?isTeacher@ServerPlayer@@UEBA_NXZ
     * @hash   -1266255108
     */
    virtual bool isTeacher() const;
    /**
     * @vftbl  428
     * @symbol ?onSuspension@ServerPlayer@@UEAAXXZ
     * @hash   -675018225
     */
    virtual void onSuspension();
    /**
     * @vftbl  429
     * @symbol ?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ
     * @hash   -293034022
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @vftbl  435
     * @symbol ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
     * @hash   1650376017
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const &) const;
    /**
     * @vftbl  436
     * @symbol ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
     * @hash   -498639127
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const;
    /**
     * @vftbl  437
     * @symbol ?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z
     * @hash   431933626
     */
    virtual void sendNetworkPacket(class Packet &) const;
    /**
     * @vftbl  438
     * @symbol ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
     * @hash   -1049095677
     */
    virtual class PlayerEventCoordinator & getPlayerEventCoordinator();
    /**
     * @vftbl  439
     * @symbol ?tryGetMoveInputHandler@ServerPlayer@@UEBAPEAVMoveInputHandler@@XZ
     * @hash   922151139
     */
    virtual class MoveInputHandler * tryGetMoveInputHandler() const;
    /**
     * @vftbl  440
     * @symbol ?getInputMode@ServerPlayer@@UEBA?AW4InputMode@@XZ
     * @hash   1117647116
     */
    virtual enum class InputMode getInputMode() const;
    /**
     * @vftbl  441
     * @symbol ?getPlayMode@ServerPlayer@@UEBA?AW4ClientPlayMode@@XZ
     * @hash   901511319
     */
    virtual enum class ClientPlayMode getPlayMode() const;
    /**
     * @vftbl  442
     * @symbol ?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z
     * @hash   -1177088948
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl  443
     * @hash   -87146045
     */
    virtual void __unk_vfn_443();
    /**
     * @vftbl  446
     * @symbol ?addSavedChunk@ServerPlayer@@UEAAXAEBVChunkPos@@@Z
     * @hash   -1641018656
     */
    virtual void addSavedChunk(class ChunkPos const &);
    /**
     * @vftbl  450
     * @symbol ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
     * @hash   -476000128
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const;
    /**
     * @vftbl  451
     * @symbol ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
     * @hash   -434480517
     */
    virtual void destroyEditorPlayer();
    /**
     * @vftbl  452
     * @symbol ?_getSpawnChunkLimit@ServerPlayer@@MEBAHXZ
     * @hash   -1269349070
     */
    virtual int _getSpawnChunkLimit() const;
    /**
     * @vftbl  453
     * @symbol ?_updateChunkPublisherView@ServerPlayer@@MEAAXAEBVVec3@@M@Z
     * @hash   -1298656072
     */
    virtual void _updateChunkPublisherView(class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERPLAYER
    /**
     * @symbol ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
     * @hash   -1188247375
     */
    MCVAPI void frameUpdate(class FrameUpdateContextBase &);
    /**
     * @symbol ?openPortfolio@ServerPlayer@@UEAAXXZ
     * @hash   528178913
     */
    MCVAPI void openPortfolio();
#endif
    /**
     * @symbol ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@W4SubClientId@@V?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@9V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H_NAEAVEntityContext@@@Z
     * @hash   97441556
     */
    MCAPI ServerPlayer(class Level &, class PacketSender &, class NetworkHandler &, class ClientBlobCache::Server::ActiveTransfersManager &, enum class GameType, class NetworkIdentifier const &, enum class SubClientId, class std::function<void (class ServerPlayer &)>, class mce::UUID, std::string const &, std::string const &, std::unique_ptr<class Certificate>, int, bool, class EntityContext &);
    /**
     * @symbol ?addActorToReplicationList@ServerPlayer@@QEAAXV?$not_null@PEAVActor@@@gsl@@_N@Z
     * @hash   -1100173012
     */
    MCAPI void addActorToReplicationList(class gsl::not_null<class Actor *>, bool);
    /**
     * @symbol ?checkCheating@ServerPlayer@@QEAAXAEBVVec3@@@Z
     * @hash   1452532900
     */
    MCAPI void checkCheating(class Vec3 const &);
    /**
     * @symbol ?disconnect@ServerPlayer@@QEAAXXZ
     * @hash   -933192987
     */
    MCAPI void disconnect();
    /**
     * @symbol ?doDeleteContainerManager@ServerPlayer@@QEAAX_N@Z
     * @hash   2107038306
     */
    MCAPI void doDeleteContainerManager(bool);
    /**
     * @symbol ?doInitialSpawn@ServerPlayer@@QEAAXXZ
     * @hash   1356568997
     */
    MCAPI void doInitialSpawn();
    /**
     * @symbol ?getItemStackNetManagerServer@ServerPlayer@@QEAAAEAVItemStackNetManagerServer@@XZ
     * @hash   -1353580008
     */
    MCAPI class ItemStackNetManagerServer & getItemStackNetManagerServer();
    /**
     * @symbol ?getServerMoveInputHandler@ServerPlayer@@QEAAPEAVServerMoveInputHandler@@XZ
     * @hash   226747933
     */
    MCAPI class ServerMoveInputHandler * getServerMoveInputHandler();
    /**
     * @symbol ?handleActorPickRequestOnServer@ServerPlayer@@QEAAXAEAVActor@@_N1@Z
     * @hash   -1143975620
     */
    MCAPI void handleActorPickRequestOnServer(class Actor &, bool, bool);
    /**
     * @symbol ?handleBlockPickRequestOnServer@ServerPlayer@@QEAAXAEBVBlockPos@@_N@Z
     * @hash   -1846666751
     */
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const &, bool);
    /**
     * @symbol ?openUnmanagedContainer@ServerPlayer@@QEAA?AW4ContainerID@@XZ
     * @hash   -1405647692
     */
    MCAPI enum class ContainerID openUnmanagedContainer();
    /**
     * @symbol ?postLoad@ServerPlayer@@QEAAX_N@Z
     * @hash   1157925866
     */
    MCAPI void postLoad(bool);
    /**
     * @symbol ?postReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
     * @hash   899957186
     */
    MCAPI void postReplicationTick(struct Tick const &);
    /**
     * @symbol ?preReplicationTick@ServerPlayer@@QEAAXAEBUTick@@@Z
     * @hash   -860606694
     */
    MCAPI void preReplicationTick(struct Tick const &);
    /**
     * @symbol ?selectItem@ServerPlayer@@QEAAXAEBVItemStack@@@Z
     * @hash   -147084346
     */
    MCAPI void selectItem(class ItemStack const &);
    /**
     * @symbol ?sendMobEffectPackets@ServerPlayer@@QEAAXXZ
     * @hash   -352339211
     */
    MCAPI void sendMobEffectPackets();
    /**
     * @symbol ?sendPlayerOnGround@ServerPlayer@@QEAAXXZ
     * @hash   -1457876235
     */
    MCAPI void sendPlayerOnGround();
    /**
     * @symbol ?setClientChunkRadius@ServerPlayer@@QEAAXI@Z
     * @hash   -666737536
     */
    MCAPI void setClientChunkRadius(unsigned int);
    /**
     * @symbol ?setInputMode@ServerPlayer@@QEAAXAEBW4InputMode@@@Z
     * @hash   935459516
     */
    MCAPI void setInputMode(enum class InputMode const &);
    /**
     * @symbol ?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ
     * @hash   94625027
     */
    MCAPI void setLocalPlayerAsInitialized();
    /**
     * @symbol ?setPlayMode@ServerPlayer@@QEAAXAEBW4ClientPlayMode@@@Z
     * @hash   210457124
     */
    MCAPI void setPlayMode(enum class ClientPlayMode const &);
    /**
     * @symbol ?setPlayerInput@ServerPlayer@@QEAAXMM_N0@Z
     * @hash   -1601624216
     */
    MCAPI void setPlayerInput(float, float, bool, bool);
    /**
     * @symbol ?setSyncTimeIfClientServerPositionMatches@ServerPlayer@@QEAAXAEBVVec3@@@Z
     * @hash   1583691498
     */
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const &);
    /**
     * @symbol ?triggerRespawnFromCompletingTheEnd@ServerPlayer@@QEAAXXZ
     * @hash   -1661599995
     */
    MCAPI void triggerRespawnFromCompletingTheEnd();
    /**
     * @symbol ?tryGetFromEntity@ServerPlayer@@SAPEAV1@AEAVEntityContext@@_N@Z
     * @hash   -568448584
     */
    MCAPI static class ServerPlayer * tryGetFromEntity(class EntityContext &, bool);

//private:
    /**
     * @symbol ?_checkForLoadedTickingAreas@ServerPlayer@@AEBA_NXZ
     * @hash   -1341000985
     */
    MCAPI bool _checkForLoadedTickingAreas() const;
    /**
     * @symbol ?_logCDEvent@ServerPlayer@@AEAAXW4CrashDumpLogStringID@@000@Z
     * @hash   2135803596
     */
    MCAPI void _logCDEvent(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @symbol ?_nextContainerCounter@ServerPlayer@@AEAA?AW4ContainerID@@XZ
     * @hash   -1244533623
     */
    MCAPI enum class ContainerID _nextContainerCounter();
    /**
     * @symbol ?_removeNearbyEntities@ServerPlayer@@AEAAXXZ
     * @hash   -1930063269
     */
    MCAPI void _removeNearbyEntities();
    /**
     * @symbol ?_scanForNearbyActors@ServerPlayer@@AEAAXXZ
     * @hash   -1467534014
     */
    MCAPI void _scanForNearbyActors();
    /**
     * @symbol ?_setContainerManager@ServerPlayer@@AEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
     * @hash   1386212534
     */
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    /**
     * @symbol ?_updateNearbyActors@ServerPlayer@@AEAAXXZ
     * @hash   -2139020291
     */
    MCAPI void _updateNearbyActors();

private:

};