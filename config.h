/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hurmit Nerd Font:size=17"
};

static const char col_gray2[]       = "#222222"; /* "#ffe4b5"; */
static const char col_gray3[]       = "#ebdbb2";  /* "#bebebe"; */
static const char col_gray4[]       = "#000000";
static const char col_cyan[]        = "#444444"; /* "#deb887"; */

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*               fg         bg         */
	[SchemeNorm] = { col_gray3, col_gray2},
	[SchemeSel]  = { col_gray3, col_cyan },
	[SchemeOut]  = { col_gray4, col_cyan },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
