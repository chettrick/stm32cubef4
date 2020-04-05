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

#ifndef _ClimateDeviceClass_H
#define _ClimateDeviceClass_H

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

#include "_CoreTimer.h"

/* Forward declaration of the class Climate::DeviceClass */
#ifndef _ClimateDeviceClass_
  EW_DECLARE_CLASS( ClimateDeviceClass )
#define _ClimateDeviceClass_
#endif


/* Controller class, containing all data set values and all current values of the 
   climate cabinet. */
EW_DEFINE_FIELDS( ClimateDeviceClass, XObject )
  EW_PROPERTY( DwellTime,       XInt32 )
  EW_PROPERTY( HeatTime,        XInt32 )
  EW_PROPERTY( CoolTime,        XInt32 )
  EW_PROPERTY( NominalTemp,     XInt32 )
  EW_PROPERTY( ActualTemp,      XInt32 )
  EW_PROPERTY( Humidity,        XInt32 )
  EW_PROPERTY( RemainingTime,   XInt32 )
  EW_OBJECT  ( Timer,           CoreTimer )
  EW_PROPERTY( Running,         XBool )
  EW_RESERVED( 3 )
EW_END_OF_FIELDS( ClimateDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Climate::DeviceClass' */
EW_DEFINE_METHODS( ClimateDeviceClass, XObject )
EW_END_OF_METHODS( ClimateDeviceClass )

/* 'C' function for method : 'Climate::DeviceClass.OnSetDwellTime()' */
void ClimateDeviceClass_OnSetDwellTime( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetHeatTime()' */
void ClimateDeviceClass_OnSetHeatTime( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetCoolTime()' */
void ClimateDeviceClass_OnSetCoolTime( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetNominalTemp()' */
void ClimateDeviceClass_OnSetNominalTemp( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetActualTemp()' */
void ClimateDeviceClass_OnSetActualTemp( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetHumidity()' */
void ClimateDeviceClass_OnSetHumidity( ClimateDeviceClass _this, XInt32 value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetRunning()' */
void ClimateDeviceClass_OnSetRunning( ClimateDeviceClass _this, XBool value );

/* 'C' function for method : 'Climate::DeviceClass.OnSetRemainingTime()' */
void ClimateDeviceClass_OnSetRemainingTime( ClimateDeviceClass _this, XInt32 value );

/* This is a slot method. */
void ClimateDeviceClass_Animate( ClimateDeviceClass _this, XObject sender );

/* Default onget method for the property 'DwellTime' */
XInt32 ClimateDeviceClass_OnGetDwellTime( ClimateDeviceClass _this );

/* Default onget method for the property 'HeatTime' */
XInt32 ClimateDeviceClass_OnGetHeatTime( ClimateDeviceClass _this );

/* Default onget method for the property 'CoolTime' */
XInt32 ClimateDeviceClass_OnGetCoolTime( ClimateDeviceClass _this );

/* Default onget method for the property 'NominalTemp' */
XInt32 ClimateDeviceClass_OnGetNominalTemp( ClimateDeviceClass _this );

/* Default onget method for the property 'ActualTemp' */
XInt32 ClimateDeviceClass_OnGetActualTemp( ClimateDeviceClass _this );

/* Default onget method for the property 'Humidity' */
XInt32 ClimateDeviceClass_OnGetHumidity( ClimateDeviceClass _this );

/* Default onget method for the property 'Running' */
XBool ClimateDeviceClass_OnGetRunning( ClimateDeviceClass _this );

/* Default onget method for the property 'RemainingTime' */
XInt32 ClimateDeviceClass_OnGetRemainingTime( ClimateDeviceClass _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ClimateDeviceClass_H */

/* Embedded Wizard */
