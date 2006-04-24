/* 
 * Copyright (C) 2005,2006 MaNGOS <http://www.mangosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "Common.h"

#ifndef _UPDATEFIELDS_AUTO_H
#define _UPDATEFIELDS_AUTO_H

enum EObjectFields
{
    OBJECT_FIELD_GUID                       = 0,
    OBJECT_FIELD_TYPE                       = 2,
    OBJECT_FIELD_ENTRY                      = 3,
    OBJECT_FIELD_SCALE_X                    = 4,
    OBJECT_FIELD_PADDING                    = 5,
    OBJECT_END                              = 6,
};

enum EItemFields
{
    ITEM_FIELD_OWNER                        = 6,
    ITEM_FIELD_CONTAINED                    = 8,
    ITEM_FIELD_CREATOR                      = 10,
    ITEM_FIELD_GIFTCREATOR                  = 12,
    ITEM_FIELD_STACK_COUNT                  = 14,
    ITEM_FIELD_DURATION                     = 15,
    ITEM_FIELD_SPELL_CHARGES                = 16,
    ITEM_FIELD_FLAGS                        = 21,
    ITEM_FIELD_ENCHANTMENT                  = 22,
    ITEM_FIELD_PROPERTY_SEED                = 43,
    ITEM_FIELD_RANDOM_PROPERTIES_ID         = 44,
    ITEM_FIELD_ITEM_TEXT_ID                 = 45,
    ITEM_FIELD_DURABILITY                   = 46,
    ITEM_FIELD_MAXDURABILITY                = 47,
    ITEM_END                                = 48,
};

enum EContainerFields
{
    CONTAINER_FIELD_NUM_SLOTS               = 48,
    CONTAINER_ALIGN_PAD                     = 49,
    CONTAINER_FIELD_SLOT_1                  = 50,
    CONTAINER_END                           = 90,
};

enum EUnitFields
{
    UNIT_FIELD_CHARM                        =    6,
    UNIT_FIELD_SUMMON                       =    8,
    UNIT_FIELD_CHARMEDBY                    =   10,
    UNIT_FIELD_SUMMONEDBY                   =   12,
    UNIT_FIELD_CREATEDBY                    =   14,
    UNIT_FIELD_TARGET                       =   16,
    UNIT_FIELD_PERSUADED                    =   18,
    UNIT_FIELD_CHANNEL_OBJECT               =   20,
    UNIT_FIELD_HEALTH                       =   22,
    UNIT_FIELD_POWER1                       =   23,
    UNIT_FIELD_POWER2                       =   24,
    UNIT_FIELD_POWER3                       =   25,
    UNIT_FIELD_POWER4                       =   26,
    UNIT_FIELD_POWER5                       =   27,
    UNIT_FIELD_MAXHEALTH                    =   28,
    UNIT_FIELD_MAXPOWER1                    =   29,
    UNIT_FIELD_MAXPOWER2                    =   30,
    UNIT_FIELD_MAXPOWER3                    =   31,
    UNIT_FIELD_MAXPOWER4                    =   32,
    UNIT_FIELD_MAXPOWER5                    =   33,
    UNIT_FIELD_LEVEL                        =   34,
    UNIT_FIELD_FACTIONTEMPLATE              =   35,
    UNIT_FIELD_BYTES_0                      =   36,
    UNIT_VIRTUAL_ITEM_SLOT_DISPLAY          =   37,
    UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_01       =   38,
    UNIT_VIRTUAL_ITEM_SLOT_DISPLAY_02       =   39,
    UNIT_VIRTUAL_ITEM_INFO                  =   40,
    UNIT_VIRTUAL_ITEM_INFO_01               =   41,
    UNIT_VIRTUAL_ITEM_INFO_02               =   42,
    UNIT_VIRTUAL_ITEM_INFO_03               =   43,
    UNIT_VIRTUAL_ITEM_INFO_04               =   44,
    UNIT_VIRTUAL_ITEM_INFO_05               =   45,
    UNIT_FIELD_FLAGS                        =   46,
    UNIT_FIELD_AURA                         =   47,
    UNIT_FIELD_AURAFLAGS                    =  111,
    UNIT_FIELD_AURALEVELS                   =  119,
    UNIT_FIELD_AURAAPPLICATIONS             =  127,
    UNIT_FIELD_AURASTATE                    =  143,
    UNIT_FIELD_BASEATTACKTIME               =  144,
    UNIT_FIELD_RANGEDATTACKTIME             =  146,
    UNIT_FIELD_BOUNDINGRADIUS               =  147,
    UNIT_FIELD_COMBATREACH                  =  148,
    UNIT_FIELD_DISPLAYID                    =  149,
    UNIT_FIELD_NATIVEDISPLAYID              =  150,
    UNIT_FIELD_MOUNTDISPLAYID               =  151,
    UNIT_FIELD_MINDAMAGE                    =  152,
    UNIT_FIELD_MAXDAMAGE                    =  153,
    UNIT_FIELD_MINOFFHANDDAMAGE             =  154,
    UNIT_FIELD_MAXOFFHANDDAMAGE             =  155,
    UNIT_FIELD_BYTES_1                      =  156,
    UNIT_FIELD_PETNUMBER                    =  157,
    UNIT_FIELD_PET_NAME_TIMESTAMP           =  158,
    UNIT_FIELD_PETEXPERIENCE                =  159,
    UNIT_FIELD_PETNEXTLEVELEXP              =  160,
    UNIT_DYNAMIC_FLAGS                      =  161,
    UNIT_CHANNEL_SPELL                      =  162,
    UNIT_MOD_CAST_SPEED                     =  163,
    UNIT_CREATED_BY_SPELL                   =  164,
    UNIT_NPC_FLAGS                          =  165,
    UNIT_NPC_EMOTESTATE                     =  166,
    UNIT_TRAINING_POINTS                    =  167,
    UNIT_FIELD_STAT0                        =  168,
    UNIT_FIELD_STR = UNIT_FIELD_STAT0,
    UNIT_FIELD_STAT1                        =  169,
    UNIT_FIELD_AGILITY = UNIT_FIELD_STAT1,
    UNIT_FIELD_STAT2                        =  170,
    UNIT_FIELD_STAMINA = UNIT_FIELD_STAT2,
    UNIT_FIELD_STAT3                        =  171,
    UNIT_FIELD_IQ = UNIT_FIELD_STAT3,
    UNIT_FIELD_STAT4                        =  172,
    UNIT_FIELD_SPIRIT = UNIT_FIELD_STAT4,

    UNIT_FIELD_RESISTANCES                  =  173,
    UNIT_FIELD_ARMOR = UNIT_FIELD_RESISTANCES,
    UNIT_FIELD_RESISTANCES_01               =  174,
    UNIT_FIELD_RESISTANCES_02               =  175,
    UNIT_FIELD_RESISTANCES_03               =  176,
    UNIT_FIELD_RESISTANCES_04               =  177,
    UNIT_FIELD_RESISTANCES_05               =  178,
    UNIT_FIELD_RESISTANCES_06               =  179,
    UNIT_FIELD_BASE_MANA                    =  180,         //=  181,
    UNIT_FIELD_BASE_HEALTH                  =  181,         //=  182,
    UNIT_FIELD_V190_182                     =  182,
    UNIT_FIELD_ATTACKPOWER                  =  183,         //=  180,
    UNIT_FIELD_ATTACK_POWER_MODS            =  184,         //=  183,
    UNIT_FIELD_BYTES_2                      =  185,
    UNIT_FIELD_RANGEDATTACKPOWER            =  186,
    UNIT_FIELD_RANGED_ATTACK_POWER_MODS     =  187,
    UNIT_FIELD_MINRANGEDDAMAGE              =  188,
    UNIT_FIELD_MAXRANGEDDAMAGE              =  189,
    UNIT_FIELD_POWER_COST_MODIFIER          =  190,
    UNIT_FIELD_POWER_COST_MULTIPLIER        =  191,
    UNIT_FIELD_PADDING                      =  192,
    UNIT_FIELD_UNKNOWN180                   =  193,
    UNIT_END                                =  206,
};

enum EPlayerFields
{
    PLAYER_SELECTION                        =  206,
    PLAYER_SELECTION_HIG                    =  207,
    PLAYER_DUEL_ARBITER                     =  208,
    PLAYER_FLAGS                            =  210,
    PLAYER_GUILDID                          =  211,
    PLAYER_GUILDRANK                        =  212,
    PLAYER_BYTES                            =  213,
    PLAYER_BYTES_2                          =  214,
    PLAYER_BYTES_3                          =  215,
    PLAYER_DUEL_TEAM                        =  216,
    PLAYER_GUILD_TIMESTAMP                  =  217,
    PLAYER_QUEST_LOG_1_1                    =  218,
    PLAYER_QUEST_LOG_1_2                    =  219,
    PLAYER_QUEST_LOG_2_1                    =  221,
    PLAYER_QUEST_LOG_2_2                    =  222,
    PLAYER_QUEST_LOG_3_1                    =  224,
    PLAYER_QUEST_LOG_3_2                    =  225,
    PLAYER_QUEST_LOG_4_1                    =  227,
    PLAYER_QUEST_LOG_4_2                    =  228,
    PLAYER_QUEST_LOG_5_1                    =  230,
    PLAYER_QUEST_LOG_5_2                    =  231,
    PLAYER_QUEST_LOG_6_1                    =  233,
    PLAYER_QUEST_LOG_6_2                    =  234,
    PLAYER_QUEST_LOG_7_1                    =  236,
    PLAYER_QUEST_LOG_7_2                    =  237,
    PLAYER_QUEST_LOG_8_1                    =  239,
    PLAYER_QUEST_LOG_8_2                    =  240,
    PLAYER_QUEST_LOG_9_1                    =  242,
    PLAYER_QUEST_LOG_9_2                    =  243,
    PLAYER_QUEST_LOG_10_1                   =  245,
    PLAYER_QUEST_LOG_10_2                   =  246,
    PLAYER_QUEST_LOG_11_1                   =  248,
    PLAYER_QUEST_LOG_11_2                   =  249,
    PLAYER_QUEST_LOG_12_1                   =  251,
    PLAYER_QUEST_LOG_12_2                   =  252,
    PLAYER_QUEST_LOG_13_1                   =  254,
    PLAYER_QUEST_LOG_13_2                   =  255,
    PLAYER_QUEST_LOG_14_1                   =  257,
    PLAYER_QUEST_LOG_14_2                   =  258,
    PLAYER_QUEST_LOG_15_1                   =  261,
    PLAYER_QUEST_LOG_15_2                   =  261,
    PLAYER_QUEST_LOG_16_1                   =  263,
    PLAYER_QUEST_LOG_16_2                   =  264,
    PLAYER_QUEST_LOG_17_1                   =  266,
    PLAYER_QUEST_LOG_17_2                   =  267,
    PLAYER_QUEST_LOG_18_1                   =  269,
    PLAYER_QUEST_LOG_18_2                   =  270,
    PLAYER_QUEST_LOG_19_1                   =  272,
    PLAYER_QUEST_LOG_19_2                   =  273,
    PLAYER_QUEST_LOG_20_1                   =  275,
    PLAYER_QUEST_LOG_20_2                   =  276,
    PLAYER_VISIBLE_ITEM_1_CREATOR           =  278,
    PLAYER_VISIBLE_ITEM_1_0                 =  280,
    PLAYER_VISIBLE_ITEM_1_PROPERTIES        =  288,
    PLAYER_VISIBLE_ITEM_1_PAD               =  289,
    PLAYER_VISIBLE_ITEM_2_CREATOR           =  290,
    PLAYER_VISIBLE_ITEM_2_0                 =  292,
    PLAYER_VISIBLE_ITEM_2_PROPERTIES        =  300,
    PLAYER_VISIBLE_ITEM_2_PAD               =  301,
    PLAYER_VISIBLE_ITEM_3_CREATOR           =  302,
    PLAYER_VISIBLE_ITEM_3_0                 =  304,
    PLAYER_VISIBLE_ITEM_3_PROPERTIES        =  312,
    PLAYER_VISIBLE_ITEM_3_PAD               =  313,
    PLAYER_VISIBLE_ITEM_4_CREATOR           =  314,
    PLAYER_VISIBLE_ITEM_4_0                 =  316,
    PLAYER_VISIBLE_ITEM_4_PROPERTIES        =  324,
    PLAYER_VISIBLE_ITEM_4_PAD               =  325,
    PLAYER_VISIBLE_ITEM_5_CREATOR           =  326,
    PLAYER_VISIBLE_ITEM_5_0                 =  328,
    PLAYER_VISIBLE_ITEM_5_PROPERTIES        =  336,
    PLAYER_VISIBLE_ITEM_5_PAD               =  337,
    PLAYER_VISIBLE_ITEM_6_CREATOR           =  338,
    PLAYER_VISIBLE_ITEM_6_0                 =  340,
    PLAYER_VISIBLE_ITEM_6_PROPERTIES        =  348,
    PLAYER_VISIBLE_ITEM_6_PAD               =  349,
    PLAYER_VISIBLE_ITEM_7_CREATOR           =  350,
    PLAYER_VISIBLE_ITEM_7_0                 =  352,
    PLAYER_VISIBLE_ITEM_7_PROPERTIES        =  360,
    PLAYER_VISIBLE_ITEM_7_PAD               =  361,
    PLAYER_VISIBLE_ITEM_8_CREATOR           =  362,
    PLAYER_VISIBLE_ITEM_8_0                 =  364,
    PLAYER_VISIBLE_ITEM_8_PROPERTIES        =  372,
    PLAYER_VISIBLE_ITEM_8_PAD               =  373,
    PLAYER_VISIBLE_ITEM_9_CREATOR           =  374,
    PLAYER_VISIBLE_ITEM_9_0                 =  376,
    PLAYER_VISIBLE_ITEM_9_PROPERTIES        =  384,
    PLAYER_VISIBLE_ITEM_9_PAD               =  385,
    PLAYER_VISIBLE_ITEM_10_CREATOR          =  386,
    PLAYER_VISIBLE_ITEM_10_0                =  388,
    PLAYER_VISIBLE_ITEM_10_PROPERTIES       =  396,
    PLAYER_VISIBLE_ITEM_10_PAD              =  397,
    PLAYER_VISIBLE_ITEM_11_CREATOR          =  398,
    PLAYER_VISIBLE_ITEM_11_0                =  340,
    PLAYER_VISIBLE_ITEM_11_PROPERTIES       =  408,
    PLAYER_VISIBLE_ITEM_11_PAD              =  409,
    PLAYER_VISIBLE_ITEM_12_CREATOR          =  410,
    PLAYER_VISIBLE_ITEM_12_0                =  412,
    PLAYER_VISIBLE_ITEM_12_PROPERTIES       =  420,
    PLAYER_VISIBLE_ITEM_12_PAD              =  421,
    PLAYER_VISIBLE_ITEM_13_CREATOR          =  422,
    PLAYER_VISIBLE_ITEM_13_0                =  424,
    PLAYER_VISIBLE_ITEM_13_PROPERTIES       =  432,
    PLAYER_VISIBLE_ITEM_13_PAD              =  433,
    PLAYER_VISIBLE_ITEM_14_CREATOR          =  434,
    PLAYER_VISIBLE_ITEM_14_0                =  436,
    PLAYER_VISIBLE_ITEM_14_PROPERTIES       =  444,
    PLAYER_VISIBLE_ITEM_14_PAD              =  445,
    PLAYER_VISIBLE_ITEM_15_CREATOR          =  446,
    PLAYER_VISIBLE_ITEM_15_0                =  448,
    PLAYER_VISIBLE_ITEM_15_PROPERTIES       =  456,
    PLAYER_VISIBLE_ITEM_15_PAD              =  457,
    PLAYER_VISIBLE_ITEM_16_CREATOR          =  458,
    PLAYER_VISIBLE_ITEM_16_0                =  460,
    PLAYER_VISIBLE_ITEM_16_PROPERTIES       =  468,
    PLAYER_VISIBLE_ITEM_16_PAD              =  469,
    PLAYER_VISIBLE_ITEM_17_CREATOR          =  471,
    PLAYER_VISIBLE_ITEM_17_0                =  472,
    PLAYER_VISIBLE_ITEM_17_PROPERTIES       =  480,
    PLAYER_VISIBLE_ITEM_17_PAD              =  481,
    PLAYER_VISIBLE_ITEM_18_CREATOR          =  482,
    PLAYER_VISIBLE_ITEM_18_0                =  484,
    PLAYER_VISIBLE_ITEM_18_PROPERTIES       =  492,
    PLAYER_VISIBLE_ITEM_18_PAD              =  493,
    PLAYER_VISIBLE_ITEM_19_CREATOR          =  494,
    PLAYER_VISIBLE_ITEM_19_0                =  496,
    PLAYER_VISIBLE_ITEM_19_PROPERTIES       =  504,
    PLAYER_VISIBLE_ITEM_19_PAD              =  505,
    PLAYER_FIELD_INV_SLOT_HEAD              =  506,
    PLAYER_FIELD_PACK_SLOT_1                =  552,
    PLAYER_FIELD_BANK_SLOT_1                =  584,
    PLAYER_FIELD_BANKBAG_SLOT_1             =  632,
    PLAYER_FIELD_VENDORBUYBACK_SLOT_1       =  644,
    PLAYER_FARSIGHT                         =  668,
    PLAYER__FIELD_COMBO_TARGET              =  670,
    PLAYER_XP                               =  672,
    PLAYER_NEXT_LEVEL_XP                    =  673,
    PLAYER_SKILL_INFO_START                 =  674,

    PLAYER_CHARACTER_POINTS1                = 1056+2,
    PLAYER_CHARACTER_POINTS2                = 1057+2,
    PLAYER_TRACK_CREATURES                  = 1058+2,
    PLAYER_TRACK_RESOURCES                  = 1059+2,
    PLAYER_BLOCK_PERCENTAGE                 = 1060+2,
    PLAYER_DODGE_PERCENTAGE                 = 1061+2,
    PLAYER_PARRY_PERCENTAGE                 = 1062+2,
    PLAYER_CRIT_PERCENTAGE                  = 1063+2,
    PLAYER_RANGED_CRIT_PERCENTAGE           = 1064+2,
    PLAYER_EXPLORED_ZONES_1                 = 1065+2,

    PLAYER_REST_STATE_EXPERIENCE            = 1129+2,
    PLAYER_FIELD_COINAGE                    = 1130+2,
    PLAYER_FIELD_POSSTAT0                   = 1131+2,
    PLAYER_FIELD_POSSTAT1                   = 1132+2,
    PLAYER_FIELD_POSSTAT2                   = 1133+2,
    PLAYER_FIELD_POSSTAT3                   = 1134+2,
    PLAYER_FIELD_POSSTAT4                   = 1135+2,
    PLAYER_FIELD_NEGSTAT0                   = 1136+2,
    PLAYER_FIELD_NEGSTAT1                   = 1137+2,
    PLAYER_FIELD_NEGSTAT2                   = 1138+2,
    PLAYER_FIELD_NEGSTAT3                   = 1139+2,
    PLAYER_FIELD_NEGSTAT4                   = 1140+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE = 1141+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_01 = 1142+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_02 = 1143+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_03 = 1144+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_04 = 1145+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_05 = 1146+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSPOSITIVE_06 = 1147+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE = 1148+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_01 = 1149+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_02 = 1150+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_03 = 1151+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_04 = 1152+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_05 = 1153+2,
    PLAYER_FIELD_RESISTANCEBUFFMODSNEGATIVE_06 = 1154+2,
    PLAYER_FIELD_MOD_DAMAGE_DONE_POS        = 1155+2,
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG        = 1162+2,
    PLAYER_FIELD_MOD_DAMAGE_DONE_PCT        = 1169+2,
    PLAYER_FIELD_BYTES                      = 1176+2,
    PLAYER_AMMO_ID                          = 1177+2,
    PLAYER_SELF_RES_SPELL                   = 1178+2,
    PLAYER_FIELD_PVP_MEDALS                 = 1179+2,
    PLAYER_FIELD_BUYBACK_PRICE_1            = 1180+2,
    PLAYER_FIELD_BUYBACK_TIMESTAMP_1        = 1192+2,

    PLAYER_FIELD_HONOR_RANK                 =  215,
    PLAYER_FIELD_HONOR_HIGHEST_RANK         = 1178,
    PLAYER_FIELD_TODAY_KILLS                = 1206,
    PLAYER_FIELD_YESTERDAY_HONORABLE_KILLS  = 1205+2,
    PLAYER_FIELD_LAST_WEEK_HONORABLE_KILLS  = 1206+2,
    PLAYER_FIELD_THIS_WEEK_HONORABLE_KILLS  = 1207+2,
    PLAYER_FIELD_THIS_WEEK_HONOR            = 1208+2,
    PLAYER_FIELD_LIFETIME_HONORABLE_KILLS   = 1209+2,
    PLAYER_FIELD_LIFETIME_DISHONORABLE_KILLS= 1210+2,
    PLAYER_FIELD_YESTERDAY_HONOR            = 1211+2,
    PLAYER_FIELD_LAST_WEEK_HONOR            = 1212+2,
    PLAYER_FIELD_LAST_WEEK_STANDING         = 1213+2,
    PLAYER_FIELD_LIFETIME_HONOR             = 1214+2,
    PLAYER_FIELD_SESSION_KILLS              = 1215+2,

    PLAYER_END                              = 1248,
};

enum EGameObjectFields
{
    OBJECT_FIELD_CREATED_BY                 =    6,
    GAMEOBJECT_DISPLAYID                    =    8,
    GAMEOBJECT_FLAGS                        =    9,
    GAMEOBJECT_ROTATION                     =   10,
    GAMEOBJECT_STATE                        =   14,
    GAMEOBJECT_TIMESTAMP                    =   15,
    GAMEOBJECT_POS_X                        =   16,
    GAMEOBJECT_POS_Y                        =   17,
    GAMEOBJECT_POS_Z                        =   18,
    GAMEOBJECT_FACING                       =   19,
    GAMEOBJECT_DYN_FLAGS                    =   20,
    GAMEOBJECT_FACTION                      =   21,
    GAMEOBJECT_TYPE_ID                      =   22,
    GAMEOBJECT_LEVEL                        =   23,
    GAMEOBJECT_END                          =   24,
};

enum EDynamicObjectFields
{
    DYNAMICOBJECT_CASTER                    =    6,
    DYNAMICOBJECT_BYTES                     =    8,
    DYNAMICOBJECT_SPELLID                   =    9,
    DYNAMICOBJECT_RADIUS                    =   10,
    DYNAMICOBJECT_POS_X                     =   11,
    DYNAMICOBJECT_POS_Y                     =   12,
    DYNAMICOBJECT_POS_Z                     =   13,
    DYNAMICOBJECT_FACING                    =   14,
    DYNAMICOBJECT_PAD                       =   15,
    DYNAMICOBJECT_END                       =   16,
};

enum ECorpseFields
{
    CORPSE_FIELD_OWNER                      =    6,
    CORPSE_FIELD_FACING                     =    8,
    CORPSE_FIELD_POS_X                      =    9,
    CORPSE_FIELD_POS_Y                      =   10,
    CORPSE_FIELD_POS_Z                      =   11,
    CORPSE_FIELD_DISPLAY_ID                 =   12,
    CORPSE_FIELD_ITEM                       =   13,
    CORPSE_FIELD_BYTES_1                    =   32,
    CORPSE_FIELD_BYTES_2                    =   33,
    CORPSE_FIELD_GUILD                      =   34,
    CORPSE_FIELD_FLAGS                      =   35,
    CORPSE_FIELD_DYNAMIC_FLAGS              =   36,
    CORPSE_FIELD_PAD                        =   37,
    CORPSE_END                              =   38,
};
#endif
