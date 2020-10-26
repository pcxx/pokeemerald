#include "constants/species.h"

// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
constexpr u8 gEnemyMonElevation[NUM_SPECIES] =
{
    0,0,0,0,0,0,0,0,0,0,
    0,0,8,0,0,8,16,0,4,0,
    0,0,6,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,8,8,0,0,0,0,0,0,8, //50
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,16,0,0,0,0,0,
    0,16,8,0,0,0,0,0,0,0,
    0,0,4,4,0,0,0,0,0,0, //100
    10,12,0,0,0,0,0,0,0,8,
    6,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,7,0,6,8,5,0,0,6, //150
    0,8,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,8,0,0,6,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,11,12,9,
    0,0,0,8,0,0,0,0,0,0, //200
    8,8,0,0,0,0,0,6,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,6, //250
    6,15,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,8,0,10,0,0,0,0,0, //300
    0,0,10,8,0,0,0,0,0,16,
    8,0,10,0,0,0,0,0,4,10,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,7,0,0,0,0,0,
    0,0,0,0,0,0,0,12,13,4, //350
    0,0,0,0,0,0,0,0,12,8,
    0,9,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,12,8,0,
    0,0,0,0,0,16,0,0,0,0,
    0,0,0,0,0,0,0,0,8,0, //400
    0,0,0,0,0,0,6,6,6,12,
    8,12
};

static_assert(gEnemyMonElevation[SPECIES_BUTTERFREE] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_BEEDRILL] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_PIDGEY] == 16, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_PIDGEOT] == 4, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_FEAROW] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_ZUBAT] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_GOLBAT] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_VENOMOTH] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_GEODUDE] == 16, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MAGNEMITE] == 16, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MAGNETON] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_GASTLY] == 4, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_HAUNTER] == 4, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_VOLTORB] == 10, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_ELECTRODE] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_KOFFING] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_WEEZING] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_AERODACTYL] == 7, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_ARTICUNO] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_ZAPDOS] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MOLTRES] == 5, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_DRAGONITE] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MEW] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_LEDIAN] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_CROBAT] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_HOPPIP] == 11, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_SKIPLOOM] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_JUMPLUFF] == 9, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_YANMA] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MISDREAVUS] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_UNOWN] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_GLIGAR] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_LUGIA] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_HO_OH] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_CELEBI] == 15, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_BEAUTIFLY] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_DUSTOX] == 10, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_NINJASK] == 10, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_SHEDINJA] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_WINGULL] == 16, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_PELIPPER] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_MASQUERAIN] == 10, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_BALTOY] == 4, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_CLAYDOL] == 10, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_FLYGON] == 7, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_GLALIE] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_LUNATONE] == 13, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_SOLROCK] == 4, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_SWABLU] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_ALTARIA] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_DUSKULL] == 9, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_SHUPPET] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_BANETTE] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_CASTFORM] == 16, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_BELDUM] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_RAYQUAZA] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_LATIAS] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_LATIOS] == 6, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_JIRACHI] == 12, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_DEOXYS] == 8, "elevation mismatch");
static_assert(gEnemyMonElevation[SPECIES_CHIMECHO] == 12, "elevation mismatch");
