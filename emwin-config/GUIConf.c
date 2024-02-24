/*
 * GUIConf.c
 *
 *  Created on: 16 feb. 2024
 *      Author: luciana
 */


#include "SPIemwin.h"

#ifdef EMWIN_ENABLED

#include "GUI.h"
#include "LCDConf.h"

#if defined(__cplusplus)
extern "C"
{
#endif

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
//
// Define the available number of bytes available for the GUI
//
#if !defined(GUI_NUMBYTES)
    #if ((MTB_DISPLAY_SIZE_X * MTB_DISPLAY_SIZE_Y * MTB_DISPLAY_COLOR_BITS / 4) > 0x7800)
        #define GUI_NUMBYTES  (1024*32)
    #else
        #define GUI_NUMBYTES  ((MTB_DISPLAY_SIZE_X * MTB_DISPLAY_SIZE_Y * \
                                MTB_DISPLAY_COLOR_BITS / 4) + 2048)
    #endif
#endif

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       GUI_X_Config
*
* Purpose:
*   Called during the initialization process in order to set up the
*   available memory for the GUI.
*/
void GUI_X_Config(void) {
  //
  // 32 bit aligned memory area
  //
  static U32 aMemory[GUI_NUMBYTES / 4];
  //
  // Assign memory to emWin
  //
  GUI_ALLOC_AssignMemory(aMemory, GUI_NUMBYTES);
  //
  // Set default font
  //
  GUI_SetDefaultFont(GUI_FONT_6X8);
}

#if defined(__cplusplus)
}
#endif

#endif /* EMWIN_ENABLED */

