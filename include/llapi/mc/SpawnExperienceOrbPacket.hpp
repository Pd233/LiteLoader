/**
 * @file  SpawnExperienceOrbPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnExperienceOrbPacket.
 *
 */
class SpawnExperienceOrbPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNEXPERIENCEORBPACKET
public:
    class SpawnExperienceOrbPacket& operator=(class SpawnExperienceOrbPacket const &) = delete;
    SpawnExperienceOrbPacket(class SpawnExperienceOrbPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -772364596
     */
    virtual ~SpawnExperienceOrbPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SpawnExperienceOrbPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -335613108
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SpawnExperienceOrbPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -991002119
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SpawnExperienceOrbPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1993512558
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SpawnExperienceOrbPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1036822114
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SpawnExperienceOrbPacket@@QEAA@XZ
     * @hash   -482094130
     */
    MCAPI SpawnExperienceOrbPacket();
    /**
     * @symbol ??0SpawnExperienceOrbPacket@@QEAA@AEBVVec3@@H@Z
     * @hash   -1449929314
     */
    MCAPI SpawnExperienceOrbPacket(class Vec3 const &, int);

};