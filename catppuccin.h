/*
Catppuccin Color's for Raylib as a C header file.

Define which of the themes to use and include the header file.

Usage:

// Pick only one theme

// Catppuccin Latte
#define CATPPUCCIN_LATTE
#include "catppuccin.h"

// Cappuccin Frappé
#define CATPPUCCIN_FRAPPE
#include "catppuccin.h"

// Cappuccin Macchiato
#define CATPPUCCIN_MACCHIATO
#include "catppuccin.h"

// Cappuccin Mocha
#define CATPPUCCIN_MOCHA
#include "catppuccin.h"

References:

https://catppuccin.com/

https://www.raylib.com/

*/

// Cappuccin Latte Theme
#ifdef CATPPUCCIN_LATTE
#define CATPPUCCIN_ROSEWATER CLITERAL(Color){ 220, 138, 120, 255 } // Rosewater
#define CATPPUCCIN_FLAMINGO  CLITERAL(Color){ 221, 120, 120, 255 } // Flamingo
#define CATPPUCCIN_PINK      CLITERAL(Color){ 234, 118, 203, 255 } // Pink
#define CATPPUCCIN_MAUVE     CLITERAL(Color){ 136, 57,  239, 255 } // Mauve
#define CATPPUCCIN_RED       CLITERAL(Color){ 210, 15,  57, 255 }  // Red
#define CATPPUCCIN_MAROON    CLITERAL(Color){ 230, 69,  83, 255 }  // Maroon
#define CATPPUCCIN_PEACH     CLITERAL(Color){ 254, 100, 11, 255 }  // Peach
#define CATPPUCCIN_YELLOW    CLITERAL(Color){ 223, 142, 29, 255 }  // Yellow
#define CATPPUCCIN_GREEN     CLITERAL(Color){ 64,  160, 43, 255 }  // Green
#define CATPPUCCIN_TEAL      CLITERAL(Color){ 23,  146, 153, 255 } // Teal
#define CATPPUCCIN_SKY       CLITERAL(Color){ 4,   165, 229, 255 } // Sky
#define CATPPUCCIN_SAPPHIRE  CLITERAL(Color){ 32,  159, 181, 255 } // Sapphire
#define CATPPUCCIN_BLUE      CLITERAL(Color){ 30,  102, 245, 255 } // Blue
#define CATPPUCCIN_LAVENDER  CLITERAL(Color){ 114, 135, 253, 255 } // Lavender
#define CATPPUCCIN_TEXT      CLITERAL(Color){ 76,  79,  105, 255 } // Text
#define CATPPUCCIN_SUBTEXT1  CLITERAL(Color){ 92,  95,  119, 255 } // Subtext1
#define CATPPUCCIN_SUBTEXT0  CLITERAL(Color){ 108, 111, 133, 255 } // Subtext0
#define CATPPUCCIN_OVERLAY2  CLITERAL(Color){ 124, 127, 147, 255 } // Overlay2
#define CATPPUCCIN_OVERLAY1  CLITERAL(Color){ 140, 143, 161, 255 } // Overlay1
#define CATPPUCCIN_OVERLAY0  CLITERAL(Color){ 156, 160, 176, 255 } // Overlay0
#define CATPPUCCIN_SURFACE2  CLITERAL(Color){ 172, 176, 190, 255 } // Surface2
#define CATPPUCCIN_SURFACE1  CLITERAL(Color){ 188, 192, 204, 255 } // Surface1
#define CATPPUCCIN_SURFACE0  CLITERAL(Color){ 204, 208, 218, 255 } // Surface0
#define CATPPUCCIN_BASE      CLITERAL(Color){ 239, 241, 245, 255 } // Base
#define CATPPUCCIN_MANTLE    CLITERAL(Color){ 230, 233, 239, 255 } // Mantle
#define CATPPUCCIN_CRUST     CLITERAL(Color){ 220, 224, 232, 255 } // Crust

// Cappuccin Frappé Theme
#elif CATPPUCCIN_FRAPPE
#define CATPPUCCIN_ROSEWATER CLITERAL(Color){ 242, 213, 207, 255 } // Rosewater
#define CATPPUCCIN_FLAMINGO  CLITERAL(Color){ 238, 190, 190, 255 } // Flamingo
#define CATPPUCCIN_PINK      CLITERAL(Color){ 244, 184, 228, 255 } // Pink
#define CATPPUCCIN_MAUVE     CLITERAL(Color){ 202, 158, 230, 255 } // Mauve
#define CATPPUCCIN_RED       CLITERAL(Color){ 231, 130, 132, 255 } // Red
#define CATPPUCCIN_MAROON    CLITERAL(Color){ 234, 153, 156, 255 } // Maroon
#define CATPPUCCIN_PEACH     CLITERAL(Color){ 239, 159, 118, 255 } // Peach
#define CATPPUCCIN_YELLOW    CLITERAL(Color){ 229, 200, 144, 255 } // Yellow
#define CATPPUCCIN_GREEN     CLITERAL(Color){ 166, 209, 137, 255 } // Green
#define CATPPUCCIN_TEAL      CLITERAL(Color){ 129, 200, 190, 255 } // Teal
#define CATPPUCCIN_SKY       CLITERAL(Color){ 153, 209, 219, 255 } // Sky
#define CATPPUCCIN_SAPPHIRE  CLITERAL(Color){ 133, 193, 220, 255 } // Sapphire
#define CATPPUCCIN_BLUE      CLITERAL(Color){ 140, 170, 238, 255 } // Blue
#define CATPPUCCIN_LAVENDER  CLITERAL(Color){ 186, 187, 241, 255 } // Lavender
#define CATPPUCCIN_TEXT      CLITERAL(Color){ 198, 208, 245, 255 } // Text
#define CATPPUCCIN_SUBTEXT1  CLITERAL(Color){ 181, 191, 226, 255 } // Subtext1
#define CATPPUCCIN_SUBTEXT0  CLITERAL(Color){ 165, 173, 206, 255 } // Subtext0
#define CATPPUCCIN_OVERLAY2  CLITERAL(Color){ 148, 156, 187, 255 } // Overlay2
#define CATPPUCCIN_OVERLAY1  CLITERAL(Color){ 131, 139, 167, 255 } // Overlay1
#define CATPPUCCIN_OVERLAY0  CLITERAL(Color){ 115, 121, 148, 255 } // Overlay0
#define CATPPUCCIN_SURFACE2  CLITERAL(Color){ 98,  104, 128, 255 } // Surface2
#define CATPPUCCIN_SURFACE1  CLITERAL(Color){ 81,  87,  109, 255 } // Surface1
#define CATPPUCCIN_SURFACE0  CLITERAL(Color){ 65,  69,  89, 255 }  // Surface0
#define CATPPUCCIN_BASE      CLITERAL(Color){ 48,  52,  70, 255 }  // Base
#define CATPPUCCIN_MANTLE    CLITERAL(Color){ 41,  44,  60, 255 }  // Mantle
#define CATPPUCCIN_CRUST     CLITERAL(Color){ 35,  38,  52, 255 }  // Crust

// Cappuccin Macchiato Theme
#elif CATPPUCCIN_MACCHIATO
#define CATPPUCCIN_ROSEWATER CLITERAL(Color){ 244, 219, 214, 255 } // Rosewater
#define CATPPUCCIN_FLAMINGO  CLITERAL(Color){ 240, 198, 198, 255 } // Flamingo
#define CATPPUCCIN_PINK      CLITERAL(Color){ 245, 189, 230, 255 } // Pink
#define CATPPUCCIN_MAUVE     CLITERAL(Color){ 198, 160, 246, 255 } // Mauve
#define CATPPUCCIN_RED       CLITERAL(Color){ 237, 135, 150, 255 } // Red
#define CATPPUCCIN_MAROON    CLITERAL(Color){ 238, 153, 160, 255 } // Maroon
#define CATPPUCCIN_PEACH     CLITERAL(Color){ 245, 169, 127, 255 } // Peach
#define CATPPUCCIN_YELLOW    CLITERAL(Color){ 238, 212, 159, 255 } // Yellow
#define CATPPUCCIN_GREEN     CLITERAL(Color){ 166, 218, 149, 255 } // Green
#define CATPPUCCIN_TEAL      CLITERAL(Color){ 139, 213, 202, 255 } // Teal
#define CATPPUCCIN_SKY       CLITERAL(Color){ 145, 215, 227, 255 } // Sky
#define CATPPUCCIN_SAPPHIRE  CLITERAL(Color){ 125, 196, 228, 255 } // Sapphire
#define CATPPUCCIN_BLUE      CLITERAL(Color){ 138, 173, 244, 255 } // Blue
#define CATPPUCCIN_LAVENDER  CLITERAL(Color){ 183, 189, 248, 255 } // Lavender
#define CATPPUCCIN_TEXT      CLITERAL(Color){ 202, 211, 245, 255 } // Text
#define CATPPUCCIN_SUBTEXT1  CLITERAL(Color){ 184, 192, 224, 255 } // Subtext1
#define CATPPUCCIN_SUBTEXT0  CLITERAL(Color){ 165, 173, 203, 255 } // Subtext0
#define CATPPUCCIN_OVERLAY2  CLITERAL(Color){ 147, 154, 183, 255 } // Overlay2
#define CATPPUCCIN_OVERLAY1  CLITERAL(Color){ 128, 135, 162, 255 } // Overlay1
#define CATPPUCCIN_OVERLAY0  CLITERAL(Color){ 110, 115, 141, 255 } // Overlay0
#define CATPPUCCIN_SURFACE2  CLITERAL(Color){ 91,  96,  120, 255 } // Surface2
#define CATPPUCCIN_SURFACE1  CLITERAL(Color){ 73,  77,  100, 255 } // Surface1
#define CATPPUCCIN_SURFACE0  CLITERAL(Color){ 54,  58,  79, 255 }  // Surface0
#define CATPPUCCIN_BASE      CLITERAL(Color){ 36,  39,  58, 255 }  // Base
#define CATPPUCCIN_MANTLE    CLITERAL(Color){ 30,  32,  48, 255 }  // Mantle
#define CATPPUCCIN_CRUST     CLITERAL(Color){ 24,  25,  38, 255 }  // Crust

// Cappuccin Mocha Theme
#elif CATPPUCCIN_MOCHA
#define CATPPUCCIN_ROSEWATER CLITERAL(Color){ 245, 224, 220, 255 } // Rosewater
#define CATPPUCCIN_FLAMINGO  CLITERAL(Color){ 242, 205, 205, 255 } // Flamingo
#define CATPPUCCIN_PINK      CLITERAL(Color){ 245, 194, 231, 255 } // Pink
#define CATPPUCCIN_MAUVE     CLITERAL(Color){ 203, 166, 247, 255 } // Mauve
#define CATPPUCCIN_RED       CLITERAL(Color){ 243, 139, 168, 255 } // Red
#define CATPPUCCIN_MAROON    CLITERAL(Color){ 235, 160, 172, 255 } // Maroon
#define CATPPUCCIN_PEACH     CLITERAL(Color){ 250, 179, 135, 255 } // Peach
#define CATPPUCCIN_YELLOW    CLITERAL(Color){ 249, 226, 175, 255 } // Yellow
#define CATPPUCCIN_GREEN     CLITERAL(Color){ 166, 227, 161, 255 } // Green
#define CATPPUCCIN_TEAL      CLITERAL(Color){ 148, 226, 213, 255 } // Teal
#define CATPPUCCIN_SKY       CLITERAL(Color){ 137, 220, 235, 255 } // Sky
#define CATPPUCCIN_SAPPHIRE  CLITERAL(Color){ 116, 199, 236, 255 } // Sapphire
#define CATPPUCCIN_BLUE      CLITERAL(Color){ 137, 180, 250, 255 } // Blue
#define CATPPUCCIN_LAVENDER  CLITERAL(Color){ 180, 190, 254, 255 } // Lavender
#define CATPPUCCIN_TEXT      CLITERAL(Color){ 205, 214, 244, 255 } // Text
#define CATPPUCCIN_SUBTEXT1  CLITERAL(Color){ 186, 194, 222, 255 } // Subtext1
#define CATPPUCCIN_SUBTEXT0  CLITERAL(Color){ 166, 173, 200, 255 } // Subtext0
#define CATPPUCCIN_OVERLAY2  CLITERAL(Color){ 147, 153, 178, 255 } // Overlay2
#define CATPPUCCIN_OVERLAY1  CLITERAL(Color){ 127, 132, 156, 255 } // Overlay1
#define CATPPUCCIN_OVERLAY0  CLITERAL(Color){ 108, 112, 134, 255 } // Overlay0
#define CATPPUCCIN_SURFACE2  CLITERAL(Color){ 88,  91,  112, 255 } // Surface2
#define CATPPUCCIN_SURFACE1  CLITERAL(Color){ 69,  71,  90, 255 }  // Surface1
#define CATPPUCCIN_SURFACE0  CLITERAL(Color){ 49,  50,  68, 255 }  // Surface0
#define CATPPUCCIN_BASE      CLITERAL(Color){ 30,  30,  46, 255 }  // Base
#define CATPPUCCIN_MANTLE    CLITERAL(Color){ 24,  24,  37, 255 }  // Mantle
#define CATPPUCCIN_CRUST     CLITERAL(Color){ 17,  17,  27, 255 }  // Crust

#endif

