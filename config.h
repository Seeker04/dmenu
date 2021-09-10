/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant   = 0;    /* -n option: instant selection if only one match    */
static int topbar    = 1;    /* -b option; if 0, dmenu appears at bottom          */
static int centered  = 0;    /* -c option; centers dmenu on screen                */
static int fuzzy     = 1;    /* -F option; if 0, dmenu doesn't use fuzzy matching */
static int min_width = 500;  /* minimum width when centered                       */

static const char *prompt = NULL;  /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"dina-8:regular"
};

#define USE_VOID_COLORS /* remove or comment out this line for gruvbox colors */

static const char *colors[SchemeLast][2] = {
#ifdef USE_VOID_COLORS /* void linux colors*/
	/* scheme                  fg         bg       */
	[SchemeNorm]          = { "#87af87", "#262626" },
	[SchemeSel]           = { "#00af5f", "#191919" },
	[SchemeSelHighlight]  = { "#5fd700", "#191919" },
	[SchemeNormHighlight] = { "#5fd700", "#262626" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeBorder]        = { "#87af87", "#000000" }, /* only fg is used here */
#else /* gruvbox colors */
	[SchemeNorm]          = { "#87af87", "#262626" },
	[SchemeSel]           = { "#afaf00", "#191919" },
	[SchemeSelHighlight]  = { "#d75f5f", "#191919" },
	[SchemeNormHighlight] = { "#d75f5f", "#262626" },
	[SchemeOut]           = { "#000000", "#00ffff" },
	[SchemeBorder]        = { "#87af87", "#000000" }, /* only fg is used here */
#endif
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;
