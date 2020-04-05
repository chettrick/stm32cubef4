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

#ifndef MasterDemo_H
#define MasterDemo_H

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

#include "_MasterDemoDemoScreen.h"
#include "_MasterDemoHomeButton.h"
#include "_MasterDemoInfoScreen.h"
#include "_MasterDemoListItem.h"
#include "_MasterDemoNavigationButton.h"
#include "_MasterDemoPaginationBar.h"

/* Bitmap resource : 'MasterDemo::AppIcons' */
EW_DECLARE_BITMAP_RES( MasterDemoAppIcons )

/* Bitmap resource : 'MasterDemo::Home' */
EW_DECLARE_BITMAP_RES( MasterDemoHome )

/* Bitmap resource : 'MasterDemo::Pagination' */
EW_DECLARE_BITMAP_RES( MasterDemoPagination )

/* Bitmap resource : 'MasterDemo::Navigation' */
EW_DECLARE_BITMAP_RES( MasterDemoNavigation )

/* Bitmap resource : 'MasterDemo::Logo' */
EW_DECLARE_BITMAP_RES( MasterDemoLogo )

/* Font resource : 'MasterDemo::DescriptionFont' */
EW_DECLARE_FONT_RES( MasterDemoDescriptionFont )

/* Font resource : 'MasterDemo::CaptionFont' */
EW_DECLARE_FONT_RES( MasterDemoCaptionFont )

/* Bitmap resource : 'MasterDemo::Laptop' */
EW_DECLARE_BITMAP_RES( MasterDemoLaptop )

/* User defined constant: 'MasterDemo::EmWiRed' */
extern const XColor MasterDemoEmWiRed;

/* User defined constant: 'MasterDemo::EmWiGray' */
extern const XColor MasterDemoEmWiGray;

/* User defined constant: 'MasterDemo::EmWiWhite' */
extern const XColor MasterDemoEmWiWhite;

/* This is a constant. */
extern const XStringRes MasterDemoBenefits;

#ifdef __cplusplus
  }
#endif

#endif /* MasterDemo_H */

/* Embedded Wizard */
