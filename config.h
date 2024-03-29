/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10",
	"JoyPixels:pixelsize=25:antialias=true:autohint=true",
	"IPAGothic:size=10",
	"symbola:size=10"};


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
                	/*     fg         bg       */
	[SchemeNorm] = { "#BFBDB6","#0D1017" },
	[SchemeSel] = { "#BFBDB6", "#1B3A5B" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

static int sidepad = 0;
static int vertpad = 0;
/* * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
