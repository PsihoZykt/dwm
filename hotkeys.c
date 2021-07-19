#include <X11/XF86keysym.h>
#include "keys.c"
// Keys changed due to in XK_* way, my hotkeys doesn't work with russion layout
static Key keys[] = {
	/* modifier           key            function                argument */
  {MODKEY|ShiftMask,    N,             spawn,             SHCMD(TERM " -e nvim -c VimwikiMakeDiaryNote") },
  { MODKEY,             N,             spawn,             SHCMD(TERM " -e nvim -c VimwikiIndex") },
  { MODKEY,             R,             spawn,             SHCMD(TERM " -e ranger") },
	{ MODKEY ,                 Caps_lock,     spawn,             SHCMD("change-layout")},
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
	{ MODKEY,             Zero,          togglegaps,        {0} }, // Enable//disable gaps
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
