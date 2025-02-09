#ifndef CONFIG_H
#define CONFIG_H

/**
 * @file config.h
 * A catch-all file for configuring various bugfixes and other settings
 * (maybe eventually) in SM64
 */

// Bug Fixes
// --| Post-JP Version Nintendo Bug Fixes
/// Fixes bug where the Boss music won't fade out after defeating King Bob-omb
#define BUGFIX_KING_BOB_OMB_FADE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug in Bob-Omb Battlefield where entering a warp stops the Koopa race music
#define BUGFIX_KOOPA_RACE_MUSIC (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where Piranha Plants do not reset their action state when the
/// player exits their activation radius.
#define BUGFIX_PIRANHA_PLANT_STATE_RESET (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where sleeping Piranha Plants damage players that bump into them
#define BUGFIX_PIRANHA_PLANT_SLEEP_DAMAGE (0 || VERSION_US || VERSION_SH)
/// Fixes bug where it shows a star when you grab a key in bowser battle stages
#define BUGFIX_STAR_BOWSER_KEY (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug that enables Mario in time stop even if is not ready to speak
#define BUGFIX_DIALOG_TIME_STOP (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug that causes Mario to still collide with Bowser in BitS after his defeat
#define BUGFIX_BOWSER_COLLIDE_BITS_DEAD (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where Bowser wouldn't reset his speed when fallen off (and adds missing checks)
#define BUGFIX_BOWSER_FALLEN_OFF_STAGE (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Fixes bug where Bowser would look weird while fading out
#define BUGFIX_BOWSER_FADING_OUT (0 || VERSION_US || VERSION_EU || VERSION_SH)
/// Removes multi-language cake screen
#define EU_CUSTOM_CAKE_FIX 1

// Support Rumble Pak
#define ENABLE_RUMBLE (1 || VERSION_SH)

// Clear RAM on boot
#define CLEARRAM 1

// Screen Size Defines
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

// Save size
//   eep4k - uses EEPROM 4kbit
//   eep16k - uses EEPROM 16kbit (There aren't any differences in syntax, but this is provided just in case)
//   sram - uses SRAM 256Kbit
#define EEP (0 || EEP4K || EEP16K)
#define EEP16K 1
//#define EEP4K 1
//#define SRAM 1

// Border Height Define for NTSC Versions
#ifdef TARGET_N64
#define BORDER_HEIGHT_CONSOLE 30
#define BORDER_HEIGHT_EMULATOR 0
#else
#define BORDER_HEIGHT_CONSOLE 0
#define BORDER_HEIGHT_EMULATOR 0
#endif

//texture filtering
//#define FILTERING

// skip peach cutscene
#define SKIP_PEACH

// Enable debug level select
#define DEBUG_LEVEL_SELECT

//non stop stars
#define NON_STOP

//coin star
#define COIN_STAR 100

// animated red coin hud
// #define ANIMATED_RED_COIN_HUD

//hud defines
#define HUD_TOP_Y 210-BORDER_HEIGHT_CONSOLE
#define HUD_BOTTOM_Y 16+BORDER_HEIGHT_CONSOLE

#define PUPPYPRINT
#define PUPPYPRINT_DEBUG 1
// Use cycles instead of microseconds
//#define PUPPYPRINT_DEBUG_CYCLES

#endif // CONFIG_H
