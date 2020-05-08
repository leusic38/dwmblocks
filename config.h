//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},

	{"",	"spotifyblock",		0,	12},
	{"",	"layout",		0,	11},
	{"",	"pacpackages",		0,	8},
	/*{"",	"crypto",		0,	13}, */
/*	{"",	"torrent",		20,	7},*/
	{"",	"news",			0,	6},
	/* {"",	"moonphase",		18000,	5}, */
	{"",	"weather",		18000,	5},
	/*{"",	"mailbox",		180,	12},*/
	{"",	"volume",		0,	10},
	/*{"",	"battery",		5,	0},*/
	{"",	"clock",		60,	0},
	{"",	"internet",		5,	4},
	/*{"",	"shutdown_menu",	0,	4},*/
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
