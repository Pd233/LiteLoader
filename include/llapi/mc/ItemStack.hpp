/**
 * @file  ItemStack.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "ItemStackNetIdVariant.hpp"
#include "I18n.hpp"
#include "PropertiesSettings.hpp"
class Tag;
class ItemActor;
class CompoundTag;
class ItemInstance;

#undef BEFORE_EXTRA

/**
 * @brief The item stack
 * 
 * @par An item stack is a set of identical items that can be picked up with the pointer at a time.
 */
class ItemStack : public ItemStackBase {

#define AFTER_EXTRA
// Add new members to class
    ItemStackNetIdVariant mNetId;

public:
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create();
    
    /**
     * @brief Create an item stack.
     * 
     * @param type The identifier of the items
     * @param count The number of the items
     * @return A pointer to the item stack
     * 
     * @note To prevent memory leakage, the item stack created should be released.
     */
    LIAPI static ItemStack* create(std::string type, int count = 1);

    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::unique_ptr<CompoundTag> tag);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(short itemId, int aux,int count = 1);
    LIAPI ItemStack* clone_s() const;
    LIAPI static ItemStack fromItemInstance(ItemInstance const& ins);

    LIAPI std::string getTypeName() const;
    LIAPI int getAux() const;
    LIAPI int getCount() const;

    LIAPI bool setItem(ItemStack* newItem);
    LIAPI bool setLore(const std::vector<std::string>& lores);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI string getStandardName(const Localization& language);

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @hash   -450590077
     */
    virtual ~ItemStack();
    /**
     * @vftbl  1
     * @symbol ?reinit@ItemStack@@UEAAXAEBVItem@@HH@Z
     * @hash   -426313463
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @vftbl  2
     * @symbol ?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z
     * @hash   -843440303
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @vftbl  3
     * @symbol ?reinit@ItemStack@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     * @hash   945256142
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @vftbl  4
     * @symbol ?setNull@ItemStack@@UEAAXV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
     * @hash   -783605424
     */
    virtual void setNull(class std::optional<std::string>);
    /**
     * @vftbl  5
     * @symbol ?toString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -660800879
     */
    virtual std::string toString() const;
    /**
     * @vftbl  6
     * @symbol ?toDebugString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -929925490
     */
    virtual std::string toDebugString() const;
    /**
     * @symbol ??0ItemStack@@QEAA@XZ
     * @hash   1994018065
     */
    MCAPI ItemStack();
    /**
     * @symbol ??0ItemStack@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     * @hash   -1501169462
     */
    MCAPI ItemStack(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVRecipeIngredient@@@Z
     * @hash   844664472
     */
    MCAPI ItemStack(class RecipeIngredient const &);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItemInstance@@@Z
     * @hash   -2071082618
     */
    MCAPI ItemStack(class ItemInstance const &);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     * @hash   -1985626644
     */
    MCAPI ItemStack(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVBlockLegacy@@H@Z
     * @hash   -1893344485
     */
    MCAPI ItemStack(class BlockLegacy const &, int);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     * @hash   -2024142573
     */
    MCAPI ItemStack(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol ??0ItemStack@@QEAA@AEBV0@@Z
     * @hash   1511006465
     */
    MCAPI ItemStack(class ItemStack const &);
    /**
     * @symbol ?_assignNetIdVariant@ItemStack@@QEBAXAEBV1@@Z
     * @hash   -142740850
     */
    MCAPI void _assignNetIdVariant(class ItemStack const &) const;
    /**
     * @symbol ?clientInitLegacyRequestId@ItemStack@@QEAAXAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@@Z
     * @hash   596773377
     */
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @symbol ?clone@ItemStack@@QEBA?AV1@XZ
     * @hash   -549811770
     */
    MCAPI class ItemStack clone() const;
    /**
     * @symbol ?getDestroySpeed@ItemStack@@QEBAMAEBVBlock@@@Z
     * @hash   814155021
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @symbol ?getItemStackNetIdVariant@ItemStack@@QEBAAEBUItemStackNetIdVariant@@XZ
     * @hash   -615122586
     */
    MCAPI struct ItemStackNetIdVariant const & getItemStackNetIdVariant() const;
    /**
     * @symbol ?getMaxUseDuration@ItemStack@@QEBAHXZ
     * @hash   -990617358
     */
    MCAPI int getMaxUseDuration() const;
    /**
     * @symbol ?getStrippedNetworkItem@ItemStack@@QEBA?AV1@XZ
     * @hash   -2139786078
     */
    MCAPI class ItemStack getStrippedNetworkItem() const;
    /**
     * @symbol ?hasItemStackNetId@ItemStack@@QEBA_NXZ
     * @hash   853897972
     */
    MCAPI bool hasItemStackNetId() const;
    /**
     * @symbol ?inventoryTick@ItemStack@@QEAA_NAEAVLevel@@AEAVActor@@H_N@Z
     * @hash   -406357954
     */
    MCAPI bool inventoryTick(class Level &, class Actor &, int, bool);
    /**
     * @symbol ?matchesAndNetIdVariantMatches@ItemStack@@QEBA_NAEBV1@@Z
     * @hash   -1220516089
     */
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const &) const;
    /**
     * @symbol ?matchesNetIdVariant@ItemStack@@QEBA_NAEBV1@@Z
     * @hash   -2064954981
     */
    MCAPI bool matchesNetIdVariant(class ItemStack const &) const;
    /**
     * @symbol ?mineBlock@ItemStack@@QEAAXAEBVBlock@@HHHPEAVMob@@@Z
     * @hash   -1896836003
     */
    MCAPI void mineBlock(class Block const &, int, int, int, class Mob *);
    /**
     * @symbol ??4ItemStack@@QEAAAEAV0@AEBV0@@Z
     * @hash   -899715092
     */
    MCAPI class ItemStack & operator=(class ItemStack const &);
    /**
     * @symbol ?playSoundIncrementally@ItemStack@@QEBAXAEAVMob@@@Z
     * @hash   -97294850
     */
    MCAPI void playSoundIncrementally(class Mob &) const;
    /**
     * @symbol ?releaseUsing@ItemStack@@QEAAXPEAVPlayer@@H@Z
     * @hash   -952281834
     */
    MCAPI void releaseUsing(class Player *, int);
    /**
     * @symbol ?sameItemAndAuxAndBlockData@ItemStack@@QEBA_NAEBV1@@Z
     * @hash   271463649
     */
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const &) const;
    /**
     * @symbol ?serverInitNetId@ItemStack@@QEAAXXZ
     * @hash   -1973079617
     */
    MCAPI void serverInitNetId();
    /**
     * @symbol ?tryGetItemStackNetId@ItemStack@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
     * @hash   1188026860
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetItemStackNetId() const;
    /**
     * @symbol ?use@ItemStack@@QEAAAEAV1@AEAVPlayer@@@Z
     * @hash   1050275285
     */
    MCAPI class ItemStack & use(class Player &);
    /**
     * @symbol ?useAsFuel@ItemStack@@QEAAXXZ
     * @hash   2035652563
     */
    MCAPI void useAsFuel();
    /**
     * @symbol ?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEAEBVVec3@@@Z
     * @hash   1318356943
     */
    MCAPI bool useOn(class Actor &, int, int, int, unsigned char, class Vec3 const &);
    /**
     * @symbol ?useTimeDepleted@ItemStack@@QEAA?AW4ItemUseMethod@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   1780398624
     */
    MCAPI enum class ItemUseMethod useTimeDepleted(class Level *, class Player *);
    /**
     * @symbol ?EMPTY_ITEM@ItemStack@@2V1@B
     * @hash   357201269
     */
    MCAPI static class ItemStack const EMPTY_ITEM;
    /**
     * @symbol ?fromDescriptor@ItemStack@@SA?AV1@AEBVNetworkItemStackDescriptor@@AEAVBlockPalette@@_N@Z
     * @hash   903531697
     */
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const &, class BlockPalette &, bool);
    /**
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z
     * @hash   -1806069201
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &);
    /**
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@AEAVLevel@@@Z
     * @hash   -730068002
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &, class Level &);

};