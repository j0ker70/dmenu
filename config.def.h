/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

// uncomment next line and comment out *colors[] variable to work with pywal

//#include "/home/pial/.cache/wal/colors-wal-dmenu.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    //[>     fg         bg       <]

    //[SchemeNorm] = { "#bbbbbb", "#222222" },
    //[SchemeSel] = { "#eeeeee", "#005577" },
    //[SchemeOut] = { "#000000", "#00ffff" },

    //[SchemeNorm] = { "#abb2bf", "#282c34" },
    //[SchemeSel] = { "#282c34", "#61afef" },
    //[SchemeOut] = { "#000000", "#00ffff" },

    //[SchemeNorm] = { "#ff79c6", "#282a36" },
    //[SchemeSel] = { "#ffb86c", "#282a36" },
    //[SchemeOut] = { "#000000", "#00ffff" },


    [SchemeNorm] = { "#cccccc", "#282a36" },
    [SchemeSel] = { "#ffffff", "#74438f" },
    [SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 25;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
