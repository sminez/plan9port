/*
 * config.h
 * ========
 *
 * Custom definitions for use in the rest of my modifed version of acme.
 *
 * As my C isn't great, there are a couple of configurable things that I
 * am leaving in their original position because it's less hassle:
 * - cols.c:15          New Column initial tags
 * - rows.c:16          Main ACME header tags
 *
 * NOTE: You need to also update the character count in the textinsert
 *       call for each of these arrays.
 *
 * NOTE: The window tags (wind.c:451) are a little different, I think
 *       due to the window resizing logic(?)
 *       Leaving them alone for now...
 */

/*
 * By default, ACME expects to be given two fonts: the first is variable
 * width and the second is monospace. In practice, it doesn't care about
 * the nature of each font, so long as it can load it!
 *
 * Run `fontsrv -p .` to view the available font names and remember to
 * escape spaces in filepaths.
 *
 * Alternative fonts
 * -----------------
 * /mnt/font/FiraCode-Retina/12a/font
 * /mnt/font/Noto\ Mono/12a/font
 * /mnt/font/Noto\ Sans\ Regular/12a/font
 * /mnt/font/Source\ Code\ Pro/12a/font
 */
char *fontnames[2] =
{
    "/mnt/font/Terminess\ \(TTF\)\ Nerd\ Font\ Complete/14a/font",
	"/mnt/font/SFNS\ Display/12a/font"
};


/*
 *  colors-constants. now let me take a minute to explain
 *  them. C_TAGBG/FG/HLBG/HLFG are respectively your tag
 *  windows background, foreground, highlighted back- and
 *  foreground color. The same exact applies to C_TXT*-
 *  variants of the same constant just in this case it handles
 *  the colorscheme of the text window.
 *
 *  C_WINBUTTON is the button which you adjust your columns
 *  position with. C_COLBUTTON represents a separate text
 *  windows button. C_TMPBUTTON is the so-called "dirty"
 *  or "unclean" -marker aka notifying the file as modified put
 *  in the middle of C_COLBUTTON. C_SCROLLBG is plain and simple
 *  your scrollbars background color.
 *
 *  the last two defines are for setting the color of the specific
 *  buttons highlight background.
 */
#define C_TAGBG			0x9DBFB2FF  // gruvbox bright_blue lightened 10%
#define C_TAGHLBG		0x458588FF  // gruvbox neutral blue
#define C_TAGFG			0x3C3836FF  // gruvbox dark 3
#define C_TAGHLFG		0x3C3836FF  // gruvbox dark 3

#define C_TXTBG			0xFBF1C7FF  // gruvbox light 1
#define C_TXTHLBG		0xD5C4A1FF  // gruvbox light 4
#define C_TXTFG			0x3C3836FF  // gruvbox dark 3
#define C_TXTHLFG		0x3C3836FF  // gruvbox dark 3

#define C_WINBUTTON		0x5F9FA2FF  // gruvbox neutral blue lightened 10%
#define C_COLBUTTON		0x458588FF  // gruvbox neutral blue
#define C_TMPBUTTON		0xD3869BFF  // gruvbox bright purple
#define C_SCROLLBG		0xA89984FF  // gruvbox light 6

#define C_BUTTON2HL		0x689D6AFF  // gruvbox neutral aqua
#define C_BUTTON3HL		0xB16286FF  // gruvbox neutral purple
