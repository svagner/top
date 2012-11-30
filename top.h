/*
 * $FreeBSD: stable/9/contrib/top/top.h 223342 2011-06-20 16:48:00Z delphij $
 */
/*
 *  Top - a top users display for Berkeley Unix
 *
 *  General (global) definitions
 */

/* Current major version number */
#define VERSION		3

/* Number of lines of header information on the standard screen */
extern int Header_lines;	/* 7 */
extern int color;

/* Maximum number of columns allowed for display */
#define MAX_COLS	128

/* Log base 2 of 1024 is 10 (2^10 == 1024) */
#define LOG1024		10

char *itoa();
char *itoa7();

char *version_string();

extern void writelog(char * str, char * fname);

/* Special atoi routine returns either a non-negative number or one of: */
#define Infinity	-1
#define Invalid		-2

/* maximum number we can have */
#define Largest		0x7fffffff

/*
 * The entire display is based on these next numbers being defined as is.
 */

#define NUM_AVERAGES    3

enum displaymodes { DISP_CPU = 0, DISP_IO, DISP_MAX };

/*
 * Format modifiers
 */
#define FMT_SHOWARGS 0x00000001

extern enum displaymodes displaymode;

extern int pcpu_stats;

#define LOGNAME		    "top.log"

#define BLACK_END_LIGHTRED  "\033[1;31m"
#define BLACK_END_LIGHTBLUE "\033[1;36m"
#define BLACK_END_RED	    "\033[0;31m"
#define BLACK_END_BLUE	    "\033[0;36m"
#define RED_END_BLUE	    "\033[7;31m"
#define RESET_COLOR	    "\033[m"
#define LIGHTBLUE_END_BLACK "\033[7;36m"
