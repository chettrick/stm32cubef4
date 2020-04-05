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

#ifndef Climate_H
#define Climate_H

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

#include "_ClimateButton.h"
#include "_ClimateClimate.h"
#include "_ClimateDataItem.h"
#include "_ClimateDeviceClass.h"
#include "_ClimateDiagram.h"
#include "_ClimateMenuItem.h"
#include "_ClimateSliderItem.h"
#include "_ClimateStartButton.h"
#include "_ClimateStatusBar.h"

/* This is a font resource. */
EW_DECLARE_FONT_RES( ClimateMediumFont )

/* This is a font resource. */
EW_DECLARE_FONT_RES( ClimateLargeFont )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateEdge )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateWiper )

/* This is a font resource. */
EW_DECLARE_FONT_RES( ClimateSmallFont )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateDashLineV )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateDashLineH )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateTriangle )

/* This is a bitmap resource. */
EW_DECLARE_BITMAP_RES( ClimateThumb )

/* Color constant according UI design. */
extern const XColor ClimateBorderColor;

/* Color constant according UI design. */
extern const XColor ClimateBackColor;

/* Color constant according UI design. */
extern const XColor ClimateSelectColor;

/* Color constant according UI design. */
extern const XColor ClimateStartColor;

/* Color constant according UI design. */
extern const XColor ClimateGraphColor;

/* Color constant according UI design. */
extern const XColor ClimateTextColor;

/* Constant to define the spacing between the menu items. */
extern const XPoint ClimateSpacing;

/* Constant to define the size of a single menu item */
extern const XPoint ClimateMenuItemSize;

/* This is an enumeration definition for signing the different menu items. */
enum
{
  ClimateMenuTypeTempHumid              = 0,
  ClimateMenuTypeDwellTime              = 1,
  ClimateMenuTypeHeatCool               = 2
};

/* User defined auto object: 'Climate::Device' */
EW_DECLARE_AUTOOBJECT( ClimateDevice, ClimateDeviceClass )

/* Constant to define the size of a single data item. */
extern const XPoint ClimateDataItemSize;

/* Constant to define the size of a single data item. */
extern const XPoint ClimateDataItemSizeLarge;

/* Constant to define the size of the diagram. */
extern const XRect ClimateChartStopPos;

/* Color constant according UI design. */
extern const XColor ClimateHumidityColor;

/* Constant to define the size of the diagram. */
extern const XRect ClimateChartStartPos;

/* This is an enumeration definition for the different unit types used for displaying 
   values. */
enum
{
  ClimateUnitTypeTime                   = 0,
  ClimateUnitTypePercent                = 1,
  ClimateUnitTypeTemperature            = 2
};

/* Constant to define the size of the diagram. */
extern const XRect ClimateStartButtonPos;

/* Constant to define the size of the diagram. */
extern const XRect ClimateStatusBarPos;

/* Constant to define the size of the slider item */
extern const XPoint ClimateSliderSize;

#ifdef __cplusplus
  }
#endif

#endif /* Climate_H */

/* Embedded Wizard */
