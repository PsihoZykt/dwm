/* See LICENSE file for copyright and license details. */
// Constants
#define TERM "st"
/* This defines the name of the executable that handles the bar (used for signalling purposes) */
#define STATUSBAR "dwmblocks"

/* appearance */
static const unsigned int borderpx       = 1;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 1;   /* 1 means swallow floating windows by default */
static const unsigned int gappih         = 5;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 5;  /* vert inner gap between windows */
static const unsigned int gappoh         = 5;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 5;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int vertpad                 = 5;  /* vertical padding of bar */
static const int sidepad                 = 5;  /* horizontal padding of bar */
/* Indicators: see patch/bar_indicators.h for options */
// Indicators for tags and app name. Nothing interesting here, can skip. Just included in patches for some reason
static int tagindicatortype              = INDICATOR_TOP_LEFT_SQUARE;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;

/* Layouts */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */

/* Fonts */
static const char *fonts[]     = {
  "CaskaydiaCove Nerd Font Mono:size=10:antialias=true:autohint=true", 
   "JoyPixels:pixelsize=12:antialias=true:autohint=true"
						     	};
static const char dmenufont[]            =  "FiraCode Nerd Font:size=14:antialias=true:autohint=true";

/* Colors */
static char c000000[]                    = "#000000"; // placeholder value


static char normfgcolor[]                = "#f8f8f2"; // Right panel text color
static char normbgcolor[]                = "#282a36"; //Right panel bg color
static char normbordercolor[]            = "#282a36";
static char normfloatcolor[]             = "#282a36"; // ???

static char selfgcolor[]                 = "#f8f8f2"; // Left panel text color ( tabs )
static char selbgcolor[]                 = "#282a36"; // Left Panel bf color
static char selbordercolor[]             = "#ff79c6" ; // WIndow border color
static char selfloatcolor[]              = "#282a36"; // ??

static char titlenormfgcolor[]           = "#f9f9f2"; // ??
static char titlenormbgcolor[]           = "#4c3f64"; // App name bg color, when there is no runned apps
static char titlenormbordercolor[]       = "#282a36"; // ?? 
static char titlenormfloatcolor[]        = "#282a36";// ??

static char titleselfgcolor[]            = "#f9f9f2"; // App name text color
static char titleselbgcolor[]            = "#4c3f64"; // App name bg color
static char titleselbordercolor[]        = "#44475a"; // ??
static char titleselfloatcolor[]         = "#44475a"; // ??

static char tagsnormfgcolor[]            = "#f9f9f2"; // Non selected tags text
static char tagsnormbgcolor[]            = "#282a36"; // Non selected tags bg
static char tagsnormbordercolor[]        = "#282a36";
static char tagsnormfloatcolor[]         = "#282a36";

static char tagsselfgcolor[]             = "#f9f9f2"; // Selected tag text
static char tagsselbgcolor[]             = "#4c3f64"; // Selected tag bg
static char tagsselbordercolor[]         = "#654321";
static char tagsselfloatcolor[]          = "#654321";

static char hidnormfgcolor[]             = "#ff5555";
static char hidselfgcolor[]              = "#50fa7b";
static char hidnormbgcolor[]             = "#123456";
static char hidselbgcolor[]              = "#123456";

static char urgfgcolor[]                 = "#f1fa8c";
static char urgbgcolor[]                 = "#ffb86c";
static char urgbordercolor[]             = "#111111";
static char urgfloatcolor[]              = "#111111";


static const unsigned int baralpha = 0xE6;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidNorm]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidSel]       = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
};
// #define NUMCOLORS         4

 static char *colors[][ColCount] = {	
/*                       fg                bg                border                float */

[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};




/* TAGS */
static char *tagicons[][NUMTAGS] = {
	[DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};

/* RULES */
static const Rule rules[] = {
    // class      instance  title  wintype  tags mask  isfloating  monitor
    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
		{  "St", 			NULL, 		NULL,  NULL,     0,        0, 1, 0, -1},
    { NULL,       NULL,     "curseradio",  NULL,    1 << 8,    0,          -1 },
    { NULL,       NULL,     "castero",  NULL,    1 << 7,    0,          -1 },
};


static const BarRule barrules[] = {
	/* monitor  bar    alignment         widthfunc                drawfunc                clickfunc                name */
	{ -1,       0,     BAR_ALIGN_LEFT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	{ -1,       0,     BAR_ALIGN_LEFT,   width_tags,              draw_tags,              click_tags,              "tags" },
	{ 'A',      0,     BAR_ALIGN_RIGHT,  width_status2d,          draw_status2d,          click_statuscmd,         "status2d" },
	{ -1,       0,     BAR_ALIGN_NONE,   width_wintitle,          draw_wintitle,          click_wintitle,          "wintitle" },
};

/* layout(s) */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[\\]",     dwindle },
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};


/* key definitions */
/* Mod4Mask is SUPER(windows) key */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0";  /* component of dmenucmd, manipulated in spawn()  */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};
static const char *termcmd[]  = { TERM, "-e", "fish" };


/* SHORTCUTS */
#include "keys.c"
/* Keys changed due to in XK_* way, my hotkeys doesn't work with russion layout */
static Key keys[] = {
	/* modifier           key            function                argument */
  {MODKEY|ShiftMask,    N,             spawn,             SHCMD(TERM " -e nvim -c VimwikiMakeDiaryNote") },
  {MODKEY,              V,             spawn,             SHCMD(TERM " -e nvim -c 'Telescope oldfiles'") },
  { MODKEY,             N,             spawn,             SHCMD(TERM " -e nvim -c VimwikiIndex") },
  { MODKEY,             R,             spawn,             SHCMD(TERM " -e ranger") },
	{ 0 ,            Ctrl_R,     spawn,             SHCMD("change-layout")},
	{ 0 ,            KP_9,     spawn,             SHCMD("change-layout-dvorak")},
	{ MODKEY,             Q,             killclient,        {0} }, // Kill client
	{ MODKEY,             Backspace,     spawn,             SHCMD("sysact") },
	{ MODKEY,             W,             spawn,             SHCMD("$BROWSER") },
  { MODKEY,             F6,            spawn,             SHCMD("volumecontrol mute") },
  { MODKEY,             F7,            spawn,             SHCMD("volumecontrol down") },
  { MODKEY,             F8,            spawn,             SHCMD("volumecontrol up") },
  { MODKEY,             F2,            spawn,             SHCMD("brightnesscontrol down") },
  { MODKEY,             F3,            spawn,             SHCMD("brightnesscontrol up") },
  { MODKEY,             M,             spawn,             SHCMD(TERM " -e ncmpcpp") },
  { MODKEY|ShiftMask,   M,             spawn,             SHCMD(TERM " -e curseradio") },
  { MODKEY,             F12,           spawn,             SHCMD("mpvStop") },
  { MODKEY|ShiftMask,   F12,          spawn,              SHCMD("mpvToggle") },
  { MODKEY,             Comma,         spawn,             SHCMD("mpcControl seek -10") }, // 10 sec before
  { MODKEY|ShiftMask,   Comma,         spawn,             SHCMD("mpcControl seek -60") },
  { MODKEY,             Period,        spawn,             SHCMD("mpcControl seek +10") }, // 10 sec after
  { MODKEY|ShiftMask,   Period,        spawn,             SHCMD("mpcControl seek +60") },
  { MODKEY,             F9,            spawn,             SHCMD("mpcControl prev") },
  { MODKEY,             F10,           spawn,             SHCMD("mpcControl toggle") },
  { MODKEY,             F11,           spawn,             SHCMD("mpcControl next") },
  { MODKEY,             KP_0,          spawn,             SHCMD(TERM " -e newsboat") }, // Rss feeder
  { MODKEY|ShiftMask,   KP_1,          spawn,             SHCMD(TERM " -e castero") },
	{ MODKEY,             Space,         zoom,              {0} }, // Make selected window master
	{ MODKEY,             D,             spawn,             SHCMD("rofi_drun") },
	{ MODKEY,             Return,        spawn,             {.v = termcmd } }, // Run terminal
	{ MODKEY,             B,             togglebar,         {0} }, // Toggle bar
	{ MODKEY,             J,             focusstack,        {.i = +1 } }, // Change focus on next window
	{ MODKEY,             K,             focusstack,        {.i = -1 } }, // Change focus on prev window
  { MODKEY,             Bracket_left,  incnmaster,        {.i = +1 } }, // Inc amount master windows
	{ MODKEY,             Bracket_right, incnmaster,        {.i = -1 } }, // Dec amount master windows
	{ MODKEY,             H,             setmfact,          {.f = -0.05} }, // Inc width of master window
	{ MODKEY,             L,             setmfact,          {.f = +0.05} }, // Dec width of master window
	{ MODKEY,             Zero,          togglegaps,        {0} }, // Enabl//disable gaps
	{ MODKEY,             Tab,           view,              {0} }, // Change to the prev tab
	{ MODKEY,             T,             setlayout,         {.v = &layouts[0]} }, // Default layout (Master to the left, other to the right in rows )
	{ MODKEY,             Z,             setlayout,         {.v = &layouts[3]} }, // Fibonacci layout
	{ MODKEY|ShiftMask,   Space,         togglefloating,    {0} }, //Toggle floating window
	{ MODKEY,             F,             togglefullscreen,  {0} }, //Toggle fullscreen
	{ 0,                  Print,         spawn,             SHCMD("maimpick")}, // Take a screenshot
  { MODKEY,			        Print,	       spawn,		          SHCMD("dmenurecord") }, // Record a video
	{ MODKEY|ShiftMask,	  Print,	       spawn,		          SHCMD("dmenurecord kill") }, // Stop recording video
	{ MODKEY,			        Delete,	       spawn,		          SHCMD("dmenurecord kill") }, // Stop recording video
  // Tags
	TAGKEYS(One,    0)
	TAGKEYS(Two,    1)
	TAGKEYS(Three,  2)
	TAGKEYS(Four,   3)
	TAGKEYS(Five,   4)
	TAGKEYS(Six,    5)
	TAGKEYS(Seven,  6)
	TAGKEYS(Eight,  7)
	TAGKEYS(Nine,   8)
};
/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button1,        sigstatusbar,   {.i = 1 } },
	{ ClkStatusText,        0,                   Button2,        sigstatusbar,   {.i = 2 } },
	{ ClkStatusText,        0,                   Button3,        sigstatusbar,   {.i = 3 } },
	{ ClkStatusText,        MODKEY,             Button3,        sigstatusbar,   {.i = 6 } },
	{ ClkClientWin,         MODKEY,              Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};



