/**
 * @file  Tag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "llapi/utils/fifo_json.h"

#include <map>
#include <string>
#include <vector>

class EndTag;
class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;
class CompoundTagVariant;
class Player;
class Actor;
class Block;
class ItemStack;
class BlockActor;

#undef BEFORE_EXTRA

/**
 * @brief MC class Tag.
 *
 */
class Tag {

#define AFTER_EXTRA
// Add Member There
private:

public:
    enum class Type : uint8_t {
        End,
        Byte,
        Short,
        Int,
        Int64,
        Float,
        Double,
        ByteArray,
        String,
        List,
        Compound,
        IntArray,
    };

    LIAPI Type getTagType() const;

    //value
    //LIAPI char& asByte();
    //LIAPI short& asShort();
    //LIAPI int& asInt();
    //LIAPI __int64& asLong();
    //LIAPI float& asFloat();
    //LIAPI double& asDouble();
    //LIAPI std::string& asString();
    //LIAPI std::vector<Tag*>& asList();
    //LIAPI std::map<std::string, char[0x28]>& asCompound();
    //LIAPI TagMemoryChunk& asByteArray();

    LIAPI EndTag* asEndTag();
    LIAPI ByteTag* asByteTag();
    LIAPI ShortTag* asShortTag();
    LIAPI IntTag* asIntTag();
    LIAPI Int64Tag* asInt64Tag();
    LIAPI FloatTag* asFloatTag();
    LIAPI DoubleTag* asDoubleTag();
    LIAPI StringTag* asStringTag();
    LIAPI ListTag* asListTag();
    LIAPI CompoundTag* asCompoundTag();
    LIAPI ByteArrayTag* asByteArrayTag();
    LIAPI IntArrayTag* asIntArrayTag();

    LIAPI void destroy();

//static

    LIAPI std::string toJson(int formatIndent);

    template <typename T>
    inline static std::unique_ptr<Tag> asTag(std::unique_ptr<T>&& tag)
    {
        return std::unique_ptr<Tag>((Tag*)(tag.release()));
    }
    template <typename T>
    inline static std::unique_ptr<T> asTypedTag(std::unique_ptr<Tag> tag)
    {
        return std::unique_ptr<T>((T*)(tag.release()));
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAG
public:
    class Tag& operator=(class Tag const &) = delete;
    Tag(class Tag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1041725976
     */
    virtual ~Tag();
    /**
     * @vftbl  1
     * @symbol ?deleteChildren@Tag@@UEAAXXZ
     * @hash   234628663
     */
    virtual void deleteChildren();
    /**
     * @vftbl  2
     * @symbol ?write@StringTag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   -775383290
     */
    virtual void write(class IDataOutput &) const = 0;
    /**
     * @vftbl  3
     * @symbol ?load@StringTag@@UEAAXAEAVIDataInput@@@Z
     * @hash   -57392347
     */
    virtual void load(class IDataInput &) = 0;
    /**
     * @vftbl  4
     * @symbol ?toString@StringTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1440030905
     */
    virtual std::string toString() const = 0;
    /**
     * @vftbl  5
     * @symbol ?getId@StringTag@@UEBA?AW4Type@Tag@@XZ
     * @hash   -1252022612
     */
    virtual enum class Tag::Type getId() const = 0;
    /**
     * @vftbl  6
     * @symbol ?equals@Tag@@UEBA_NAEBV1@@Z
     * @hash   381625464
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  7
     * @symbol ?print@Tag@@UEBAXAEAVPrintStream@@@Z
     * @hash   667091044
     */
    virtual void print(class PrintStream &) const;
    /**
     * @vftbl  8
     * @symbol ?print@Tag@@UEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPrintStream@@@Z
     * @hash   -997263092
     */
    virtual void print(std::string const &, class PrintStream &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@StringTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   -1996453079
     */
    virtual std::unique_ptr<class Tag> copy() const = 0;
    /**
     * @vftbl  10
     * @symbol ?hash@StringTag@@UEBA_KXZ
     * @hash   1797337359
     */
    virtual unsigned __int64 hash() const = 0;
    /**
     * @symbol ?NullString@Tag@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -136136743
     */
    MCAPI static std::string const NullString;
    /**
     * @symbol ?getTagName@Tag@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@1@@Z
     * @hash   1424133746
     */
    MCAPI static std::string getTagName(enum class Tag::Type);
    /**
     * @symbol ?newTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@W4Type@1@@Z
     * @hash   -488137656
     */
    MCAPI static std::unique_ptr<class Tag> newTag(enum class Tag::Type);
    /**
     * @symbol ?readNamedTag@Tag@@SA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@AEAVIDataInput@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   1172360526
     */
    MCAPI static std::unique_ptr<class Tag> readNamedTag(class IDataInput &, std::string &);
    /**
     * @symbol ?writeNamedTag@Tag@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV1@AEAVIDataOutput@@@Z
     * @hash   -1442731897
     */
    MCAPI static void writeNamedTag(std::string const &, class Tag const &, class IDataOutput &);

//protected:
    /**
     * @symbol ??0Tag@@IEAA@XZ
     * @hash   -284614205
     */
    MCAPI Tag();

protected:

};