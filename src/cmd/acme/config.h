/*
 *  fontnames-array takes two fonts, first one
 *  it treats as a proportional-width font and uses
 *  everywhere possible and as a main UI font, while
 *  the second font it treats as a fixed-width font,
 *  changeable to any text window by executing `Font`
 *  from tag window.
 *
 *  Note: `Font` can also be executed
 *  with arguments with any `fontsrv -p .` approved
 *  fonts, thus allowing you to experiment with font
 *  sizes and whether you want anti-aliasing or not.
 */

char *fontnames[2] = {
		      "/mnt/font/NotoMono/12a/font",
		      "/lib/font/bit/mntcarlo/mntcarlo.font"
};

/*
 *  globalautoindent tries to guess where to
 *  indent by the context of the previous line.
 *
 *  comes highly suggested.
 */

int globalautoindent	= TRUE;

/*
 *  swapping scroll buttons makes B1 scroll down
 *  instead of up and B2 up instead of down
 */

int	swapscrollbuttons	= FALSE;

/*
 *  bartflag triggers quote unquote experimental
 *  mode, in which instead of mouse following focus
 *  from window to window etc. it in fact, does not.
 *
 *  comes highly suggested.
 */

int bartflag			= FALSE;

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


// acme built-in colors

#define C_TAGBG			0xE3FFFFFF // [pale blue green]
#define C_TAGFG			0x000000FF // *text* color
#define C_TAGHLBG		0x9EEEEEFF
#define C_TAGHLFG		0x000000FF

#define C_TXTBG			0xFFFFE3FF // [light yellow]
#define C_TXTFG			0x000000FF // *text* color
#define C_TXTHLBG		0xEEEE9EFF
#define C_TXTHLFG		0x000000FF

#define C_WINBUTTON		0x8888CCFF
#define C_COLBUTTON		0x8888CCFF
#define C_TMPBUTTON		0x000099FF
#define C_SCROLLBG		0x99994CFF

#define C_BUTTON2HL		0xAA0000FF
#define C_BUTTON3HL		0x006600FF
