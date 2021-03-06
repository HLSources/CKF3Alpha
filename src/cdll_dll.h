#ifndef CDLL_DLL_H
#define CDLL_DLL_H

#define MAX_WEAPONS 128
#define MAX_WEAPON_SLOTS 5
#define MAX_ITEM_TYPES 6
#define MAX_ITEMS 4

// Spectator Movement modes (stored in pev->iuser1, so the physics code can get at them)
#if !defined( PM_SHAREDH )
#define OBS_NONE				0
#define OBS_CHASE_LOCKED		1
#define OBS_CHASE_FREE			2
#define OBS_ROAMING				3		
#define OBS_IN_EYE				4
#define OBS_MAP_FREE			5
#define OBS_MAP_CHASE			6
#endif

#define HIDEHUD_WEAPONS (1<<0)
#define HIDEHUD_CHARGE (1<<1)
#define HIDEHUD_ALL (1<<2)
#define HIDEHUD_HEALTH (1<<3)
#define HIDEHUD_TIMER (1<<4)
#define HIDEHUD_MONEY (1<<5)
#define HIDEHUD_CROSSHAIR (1<<6)
#define	HIDEHUD_FLASHLIGHT (1<<7)//HL special

#define HEADNAME_HIDE 0
#define HEADNAME_TEAMMATE 1
#define HEADNAME_ZOMBIE 2
#define HEADNAME_ALL 3

#define MAX_AMMO_TYPES 64
#define MAX_AMMO_SLOTS 64

#define HUD_PRINTNOTIFY 1
#define HUD_PRINTCONSOLE 2
#define HUD_PRINTTALK 3
#define HUD_PRINTCENTER 4
#define HUD_PRINTRADIO 5

#define TEXTCOLOR_NORMAL 1
#define TEXTCOLOR_USEOLDCOLORS 2
#define TEXTCOLOR_PLAYERNAME 3
#define TEXTCOLOR_LOCATION 4
#define TEXTCOLOR_MAX 5

#define SCOREATTRIB_DEAD (1<<0)
#define SCOREATTRIB_BOMB (1<<1)
#define SCOREATTRIB_VIP (1<<2)
#define SCOREATTRIB_ZOMBIE (1<<3)

#define STATUSICON_HIDE 0
#define STATUSICON_SHOW 1
#define STATUSICON_FLASH 2

#define TEAM_UNASSIGNED 0
#define TEAM_TERRORIST 1
#define TEAM_CT 2

#define TEAM_RED 1
#define TEAM_BLUE 2
#define TEAM_SPECTATOR 3
#define TEAM_RANDOM 4

#define CLASS_UNASSIGNED 0
#define CLASS_URBAN 1
#define CLASS_TERROR 2
#define CLASS_LEET 3
#define CLASS_ARCTIC 4
#define CLASS_GSG9 5
#define CLASS_GIGN 6
#define CLASS_SAS 7
#define CLASS_GUERILLA 8
#define CLASS_VIP 9
#define CLASS_MILITIA 10
#define CLASS_SPETSNAZ 11

#define CLASS_WEAPONBOX 20
#define CLASS_PROJECTILE 21
#define CLASS_BUILDABLE 22
#define CLASS_CONTROLPOINT 23
#define CLASS_ROUNDTIMER 24

#define MENU_KEY_1 (1<<0)
#define MENU_KEY_2 (1<<1)
#define MENU_KEY_3 (1<<2)
#define MENU_KEY_4 (1<<3)
#define MENU_KEY_5 (1<<4)
#define MENU_KEY_6 (1<<5)
#define MENU_KEY_7 (1<<6)
#define MENU_KEY_8 (1<<7)
#define MENU_KEY_9 (1<<8)
#define MENU_KEY_0 (1<<9)

#define MENU_DEFAULT 1
#define MENU_MAPBRIEFING 4
#define MENU_CLASSHELP 6
#define MENU_CLASSHELP2 7
#define MENU_REPEATHELP 8
#define MENU_SPECHELP 9
#define MENU_CLASS_T 26
#define MENU_CLASS_CT 27
#define MENU_BUY 28
#define MENU_BUY_PISTOL 29
#define MENU_BUY_SHOTGUN 30
#define MENU_BUY_RIFLE 31
#define MENU_BUY_SUBMACHINEGUN 32
#define MENU_BUY_MACHINEGUN 33
#define MENU_BUY_ITEM 34

#define PLAYERSTATE_CANSHOOT (1<<0)
#define PLAYERSTATE_FREEZETIMEOVER (1<<1)
#define PLAYERSTATE_INBOMBZONE (1<<2)
#define PLAYERSTATE_HOLDINGSHIELD (1<<3)

#define ITEMSTATE_HASNIGHTVISION (1<<0)
#define ITEMSTATE_HASDEFUSER (1<<1)

#define WEAPON_SUIT 31

//ckf3

#define MENU_CLOSE 0
#define MENU_TEAM 10
#define MENU_CLASS_RED 11
#define MENU_INTRO 12
#define MENU_MAPINFO 13
#define MENU_CLASS_BLU 14

#define HUDMENU_DISGUISE 1
#define HUDMENU_BUILD 2
#define HUDMENU_DEMOLISH 3

#define BUILDABLE_SENTRY 1
#define BUILDABLE_DISPENSER 2
#define BUILDABLE_ENTRANCE 3
#define BUILDABLE_EXIT 4

#define DISGUISE_YES 1
#define DISGUISE_NO 0

#define CLOAK_NO 0
#define CLOAK_BEGIN 1
#define CLOAK_YES 2
#define CLOAK_STOP 3

#define CLASS_SCOUT 1
#define CLASS_HEAVY 2
#define CLASS_SOLDIER 3
#define CLASS_PYRO 4
#define CLASS_SNIPER 5
#define CLASS_MEDIC 6
#define CLASS_ENGINEER 7
#define CLASS_DEMOMAN 8
#define CLASS_SPY 9
#define CLASS_RANDOM 10

#define WEAPON_ROCKETLAUNCHER 1
#define WEAPON_SNIPERIFLE 2
#define WEAPON_SMG 3
#define WEAPON_KUKRI 4
#define WEAPON_SHOTGUN 5
#define WEAPON_SHOVEL 6
#define WEAPON_STICKYLAUNCHER 7
#define WEAPON_GRENADELAUNCHER 8
#define WEAPON_BOTTLE 9
#define WEAPON_SCATTERGUN 10
#define WEAPON_PISTOL 11
#define WEAPON_BAT 12
#define WEAPON_MINIGUN 13
#define WEAPON_FIST 14
#define WEAPON_FIREAXE 15
#define WEAPON_FLAMETHROWER 16
#define WEAPON_REVOLVER 17
#define WEAPON_SAPPER 18
#define WEAPON_BUTTERFLY 19
#define WEAPON_SYRINGEGUN 20
#define WEAPON_MEDIGUN 21
#define WEAPON_BONESAW 22
#define WEAPON_DISGUISEKIT 23
#define WEAPON_WRENCH 24
#define WEAPON_BUILDPDA 25
#define WEAPON_DESTROYPDA 26

#define MAX_WEAPONS 128

enum
{
	ROUND_NORMAL = 0,
	ROUND_SETUP,
	ROUND_END,
	ROUND_WAIT
};

enum fx_e
{
	FX_STICKYTRAIL = 0,
	FX_ROCKETTRAIL,
	FX_GRENADETRAIL,
	FX_KILLTRAIL,
	FX_KILLTRAIL_INSTANT,
	FX_BOTTLEBREAK,
	FX_MULTIJUMPTRAIL,
	FX_EXPLOSION_MIDAIR,
	FX_EXPLOSION_WALL,
	FX_STICKYKILL,
	FX_COORDTRACER,
	FX_ATTACHTRACER,
	FX_MEDIBEAM,
	FX_KILLMEDIBEAM,
	FX_BLUEPRINT,
	FX_DISGUISESMOKE,
	FX_SPYWATCH,
	FX_FLAMETHROW,
	FX_CRITHIT,
	FX_MINICRITHIT,
	FX_HITDAMAGE,
	FX_ADDHEALTH,
	FX_ADDTIME,
	FX_ADDMETAL,
	FX_BURNINGPLAYER,
	FX_CLOAKBEGIN,
	FX_CLOAKSTOP,
	FX_DISGUISEHINT,
	FX_KILLALLTRAIL,
	FX_CRITPLAYERWEAPON,
	FX_INVULNPLAYER,
	FX_AIRBLAST
};

#define ET_HUDENTITY	6
#define EF_INVULNERABLE				(1<<8)//256

#define UC_INVULNERABLE (1<<0)
#define UC_KRITKRIEG (1<<1)

#endif