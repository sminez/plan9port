/*
 * config.h
 * ========
 *
 * Custom definitions for use in the rest of my modifed version of acme.
 * For now this is just an easier to find place to store the color-scheme.
 *
 */


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
 *  the last two defines are for defining the color of the specific
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
