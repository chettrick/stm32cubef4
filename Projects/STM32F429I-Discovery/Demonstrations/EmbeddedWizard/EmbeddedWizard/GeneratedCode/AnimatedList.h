/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard. Please do not make 
* any modifications of this file! The modifications are lost when the file is
* generated again by Embedded Wizard!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 8.20
* Profile  : STM32F429
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef AnimatedList_H
#define AnimatedList_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x00080014
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_AnimatedListAnimatedList.h"
#include "_AnimatedListDayItemL.h"
#include "_AnimatedListDayItemS.h"
#include "_AnimatedListDayList.h"
#include "_AnimatedListDeviceClass.h"
#include "_AnimatedListHourItemL.h"
#include "_AnimatedListHourItemS.h"
#include "_AnimatedListMinItemL.h"
#include "_AnimatedListMinItemS.h"
#include "_AnimatedListTimeList.h"

/* This is a font resource. */
EW_DECLARE_FONT_RES( AnimatedListListFontS )

/* This is a font resource. */
EW_DECLARE_FONT_RES( AnimatedListDescrFont )

/* This is a font resource. */
EW_DECLARE_FONT_RES( AnimatedListListFontM )

/* This is a font resource. */
EW_DECLARE_FONT_RES( AnimatedListListFontL )

/* Color constant according UI design. */
extern const XColor AnimatedListButtonBgColor;

/* Color constant according UI design. */
extern const XColor AnimatedListCaptionColor;

/* Color constant according UI design. */
extern const XColor AnimatedListButtonTextColor;

/* Color constant according UI design. */
extern const XColor AnimatedListListBgColor;

/* Color constant according UI design. */
extern const XColor AnimatedListListTextColor;

/* User defined auto object: 'AnimatedList::Device' */
EW_DECLARE_AUTOOBJECT( AnimatedListDevice, AnimatedListDeviceClass )

/* Color constant according UI design. */
extern const XColor AnimatedListButtonLineColor;

#ifdef __cplusplus
  }
#endif

#endif /* AnimatedList_H */

/* Embedded Wizard */
