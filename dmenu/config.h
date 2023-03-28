/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
/*
static const char col_light_blue[] = "#3f5a74";
static const char col_dark_red[]   = "#2b161c";
static const char col_dark_blue[]  = "#0a141e";
*/
static const char col_white[] = "#ffffff";
static const char col_black[] = "#000000";

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                /*     fg         bg       */
	[SchemeNorm] = { col_white, col_black },
	[SchemeSel] =  { col_black, col_white },
	[SchemeOut] =  { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
