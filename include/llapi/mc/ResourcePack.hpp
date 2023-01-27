/**
 * @file  ResourcePack.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class PackOrigin : int {
    PackOrigin_Unknown = 0x0,
    PackOrigin_RealmsUnknown = 0x1,
    PackOrigin_Package = 0x2,
    PackOrigin_Treatment = 0x3,
    PackOrigin_Dev = 0x4,
    PackOrigin_World = 0x5,
    PackOrigin_User = 0x6,
    PackOrigin_TempCache = 0x7,
    PackOrigin_PremiumCache = 0x8,
    PackOrigin_PremiumTempCache = 0x9,
};

enum class PackType : char {
    PackType_Invalid = 0x0,
    PackType_Addon = 0x1,
    PackType_Cached = 0x2,
    PackType_CopyProtected = 0x3,
    PackType_Behavior = 0x4,
    PackType_PersonaPiece = 0x5,
    PackType_Resources = 0x6,
    PackType_Skins = 0x7,
    PackType_WorldTemplate = 0x8,
    PackType_Count = 0x9,
};

enum class PackCategory : int {
    PackCategory_Unknown = 0x0,
    PackCategory_RealmsUnknown = 0x1,
    PackCategory_Standard = 0x2,
    PackCategory_Premium = 0x3,
    PackCategory_Custom = 0x4,
    PackCategory_Subpack = 0x5,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePack.
 *
 */
class ResourcePack {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACK
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACK
public:
    class ResourcePack& operator=(class ResourcePack const &) = delete;
    ResourcePack(class ResourcePack const &) = delete;
    ResourcePack() = delete;
#endif

public:
    /**
     * @symbol ??0ResourcePack@@QEAA@AEAVPack@@@Z
     * @hash   -1068531816
     */
    MCAPI ResourcePack(class Pack &);
    /**
     * @symbol ?areKnownFilesValid@ResourcePack@@QEAA_NXZ
     * @hash   -334823128
     */
    MCAPI bool areKnownFilesValid();
    /**
     * @symbol ?forEachIn@ResourcePack@@QEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@H_N@Z
     * @hash   -1007902642
     */
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, int, bool) const;
    /**
     * @symbol ?generateAssetSet@ResourcePack@@QEAAXXZ
     * @hash   689701045
     */
    MCAPI void generateAssetSet();
    /**
     * @symbol ?getFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -21595700
     */
    MCAPI std::string const & getFolderName() const;
    /**
     * @symbol ?getLoadTime@ResourcePack@@QEBANXZ
     * @hash   1697709342
     */
    MCAPI double getLoadTime() const;
    /**
     * @symbol ?getManifest@ResourcePack@@QEAAAEAVPackManifest@@XZ
     * @hash   -1269674758
     */
    MCAPI class PackManifest & getManifest();
    /**
     * @symbol ?getPackCategory@ResourcePack@@QEBA?AW4PackCategory@@XZ
     * @hash   -1799581002
     */
    MCAPI enum class PackCategory getPackCategory() const;
    /**
     * @symbol ?getPackId@ResourcePack@@QEBAAEBVUUID@mce@@XZ
     * @hash   174329694
     */
    MCAPI class mce::UUID const & getPackId() const;
    /**
     * @symbol ?getPackOrigin@ResourcePack@@QEBA?AW4PackOrigin@@XZ
     * @hash   -1516209450
     */
    MCAPI enum class PackOrigin getPackOrigin() const;
    /**
     * @symbol ?getResource@ResourcePack@@QEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1996559473
     */
    MCAPI bool getResource(class Core::Path const &, std::string &, int) const;
    /**
     * @symbol ?getResourceLocation@ResourcePack@@QEBAAEBVResourceLocation@@XZ
     * @hash   56474442
     */
    MCAPI class ResourceLocation const & getResourceLocation() const;
    /**
     * @symbol ?getSubpackCount@ResourcePack@@QEBAHXZ
     * @hash   1356792150
     */
    MCAPI int getSubpackCount() const;
    /**
     * @symbol ?getSubpackFolderName@ResourcePack@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1098319051
     */
    MCAPI std::string const & getSubpackFolderName(int) const;
    /**
     * @symbol ?getSubpackIndex@ResourcePack@@QEBAHAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1529350583
     */
    MCAPI int getSubpackIndex(std::string const &) const;
    /**
     * @symbol ?getSubpackInfoStack@ResourcePack@@QEBAAEBVSubpackInfoCollection@@XZ
     * @hash   -1463878986
     */
    MCAPI class SubpackInfoCollection const & getSubpackInfoStack() const;
    /**
     * @symbol ?getVersion@ResourcePack@@QEBAAEBVSemVersion@@XZ
     * @hash   481312918
     */
    MCAPI class SemVersion const & getVersion() const;
    /**
     * @symbol ?hasResource@ResourcePack@@QEBA_NAEBVPath@Core@@H@Z
     * @hash   1795668270
     */
    MCAPI bool hasResource(class Core::Path const &, int) const;
    /**
     * @symbol ?isBaseGamePack@ResourcePack@@QEBA_NXZ
     * @hash   548880604
     */
    MCAPI bool isBaseGamePack() const;
    /**
     * @symbol ?isSlicePack@ResourcePack@@QEBA_NXZ
     * @hash   2037091204
     */
    MCAPI bool isSlicePack() const;
    /**
     * @symbol ?isType@ResourcePack@@QEBA_NW4PackType@@@Z
     * @hash   1343556615
     */
    MCAPI bool isType(enum class PackType) const;
    /**
     * @symbol ?isZipped@ResourcePack@@QEBA_NXZ
     * @hash   -4929712
     */
    MCAPI bool isZipped() const;
    /**
     * @symbol ?setAsSlicePack@ResourcePack@@QEAAXXZ
     * @hash   -890293371
     */
    MCAPI void setAsSlicePack();
    /**
     * @symbol ?setError@ResourcePack@@QEAAXXZ
     * @hash   -438664203
     */
    MCAPI void setError();
    /**
     * @symbol ?setLoadTime@ResourcePack@@QEAAXN@Z
     * @hash   -2012488640
     */
    MCAPI void setLoadTime(double);
    /**
     * @symbol ?setLocale@ResourcePack@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1893506734
     */
    MCAPI void setLocale(std::string const &);
    /**
     * @symbol ?unregisterDeleteCallback@ResourcePack@@QEAAXPEAX@Z
     * @hash   -544019681
     */
    MCAPI void unregisterDeleteCallback(void *);
    /**
     * @symbol ?RESOURCE_PACK_BUG_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     * @hash   476504264
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;
    /**
     * @symbol ?RESOURCE_PACK_ICON_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     * @hash   763079048
     */
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;
    /**
     * @symbol ?TEXTURES_LIST_PATH@ResourcePack@@2V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@B
     * @hash   -1595433974
     */
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;

//private:
    /**
     * @symbol ?_createSubpack@ResourcePack@@AEAAXAEBUSubpackInfo@@@Z
     * @hash   811953602
     */
    MCAPI void _createSubpack(struct SubpackInfo const &);
    /**
     * @symbol ?_createSubpacks@ResourcePack@@AEAAXXZ
     * @hash   381339850
     */
    MCAPI void _createSubpacks();
    /**
     * @symbol ?_generateIconPath@ResourcePack@@AEAAXXZ
     * @hash   -489240441
     */
    MCAPI void _generateIconPath();

private:

};