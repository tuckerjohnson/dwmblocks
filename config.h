//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"sb-memory",	10,	14},
	{"",	"sb-cpu",		10,	18},
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-clock",	    60,	1},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-internet",	5,	4},
};

// Sets delimiter between status commands.
static char *delim = "  ";

