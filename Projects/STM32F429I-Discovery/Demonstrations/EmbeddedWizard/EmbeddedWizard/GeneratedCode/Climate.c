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

#include "ewlocale.h"
#include "_ChartsCoordList.h"
#include "_ChartsGraph.h"
#include "_ClimateButton.h"
#include "_ClimateClimate.h"
#include "_ClimateDataItem.h"
#include "_ClimateDeviceClass.h"
#include "_ClimateDiagram.h"
#include "_ClimateMenuItem.h"
#include "_ClimateSliderItem.h"
#include "_ClimateStartButton.h"
#include "_ClimateStatusBar.h"
#include "_CorePropertyObserver.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWallpaper.h"
#include "_ViewsWarpImage.h"
#include "Charts.h"
#include "Climate.h"
#include "Core.h"
#include "Effects.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000031E, /* ratio 50.63 % */
  0xB8003900, 0x00000452, 0x00CA002A, 0x4E000368, 0x00720042, 0x07400184, 0x0F881D40,
  0xE0044841, 0x00190006, 0x5C58911A, 0xC78D2008, 0xE4011492, 0xC1E00831, 0x1F0782C0,
  0x30A87432, 0x178AC4E2, 0xC8342A23, 0x9141A5E0, 0xFC9A1917, 0x4AE2B268, 0x027C0E83,
  0xCEE00220, 0xA0003643, 0x9268446A, 0x02004EE1, 0x787CFE09, 0x33C76513, 0xFC763720,
  0x800871A8, 0x7AA36737, 0x2A760005, 0x212CAB4A, 0xB0A91528, 0x61AFC9AB, 0x2ABC92A9,
  0xB3002B57, 0xBD42D168, 0xDBEF36CB, 0x283B0687, 0x64983B35, 0x37658557, 0xB0AB598A,
  0x0F26C6A2, 0x98D45E3B, 0x8642A524, 0x65FA5D06, 0x800E70AA, 0x3A4D1831, 0x6D1268AC,
  0x94098347, 0x830000C6, 0xB7128036, 0xAA501659, 0x3452B743, 0x85280D2C, 0x52B837F5,
  0x1E0DB8DC, 0x4002DA50, 0x65CAE6F3, 0x3B619003, 0x34EA5FBA, 0xEE5803AA, 0x1B000677,
  0xCCC3B9DA, 0x52BC238E, 0x5F8D1CA1, 0x6FDC2ED7, 0xDB06DAF6, 0x1F0F04C3, 0xE5837C80,
  0x8A5023EB, 0xE47F4007, 0x57E6C52C, 0xF7A1FD7F, 0x0DFB001A, 0xC4001FE8, 0x529B0599,
  0x5134A453, 0x94191544, 0x56114C20, 0x06439684, 0x1494A049, 0x18446D32, 0x54C56D61,
  0x28006215, 0x000E54A0, 0x81A2C8B0, 0x52362D71, 0x67A53A44, 0x359F4C59, 0xB574A014,
  0x8C60D6D5, 0x91D6757E, 0x58E84F8A, 0xA5AC46D3, 0x7E6EE075, 0x5F9BE0AD, 0x54A7D9D0,
  0x64B04B91, 0x00004065, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XRect _Const0001 = {{ 0, 0 }, { 480, 270 }};
static const XRect _Const0002 = {{ 260, 365 }, { 780, 460 }};
static const XRect _Const0003 = {{ 156, 65 }, { 480, 272 }};
static const XRect _Const0004 = {{ 0, 200 }, { 160, 275 }};
static const XPoint _Const0005 = { 320, 240 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x001F };
static const XStringRes _Const0008 = { _StringsDefault0, 0x002E };
static const XStringRes _Const0009 = { _StringsDefault0, 0x003A };
static const XStringRes _Const000A = { _StringsDefault0, 0x0048 };
static const XStringRes _Const000B = { _StringsDefault0, 0x0064 };
static const XStringRes _Const000C = { _StringsDefault0, 0x0074 };
static const XRect _Const000D = {{ 0, 0 }, { 240, 95 }};
static const XPoint _Const000E = { 0, 95 };
static const XPoint _Const000F = { 240, 95 };
static const XPoint _Const0010 = { 240, 0 };
static const XPoint _Const0011 = { 0, 0 };
static const XRect _Const0012 = {{ 20, 0 }, { 240, 95 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x0084 };
static const XRect _Const0014 = {{ -1, 0 }, { 240, 95 }};
static const XRect _Const0015 = {{ 20, 60 }, { 240, 95 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x00A1 };
static const XRect _Const0017 = {{ 20, 0 }, { 240, 60 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x00B0 };
static const XRect _Const0019 = {{ 215, 70 }, { 230, 85 }};
static const XColor _Const001A = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XStringRes _Const001B = { _StringsDefault0, 0x00B9 };
static const XStringRes _Const001C = { _StringsDefault0, 0x00BE };
static const XStringRes _Const001D = { _StringsDefault0, 0x00C3 };
static const XStringRes _Const001E = { _StringsDefault0, 0x00C9 };
static const XStringRes _Const001F = { _StringsDefault0, 0x00CF };
static const XPoint _Const0020 = { 0, 375 };
static const XPoint _Const0021 = { 540, 375 };
static const XPoint _Const0022 = { 540, 0 };
static const XRect _Const0023 = {{ 0, 0 }, { 540, 375 }};
static const XRect _Const0024 = {{ 0, 0 }, { 540, 20 }};
static const XRect _Const0025 = {{ 0, 355 }, { 540, 375 }};
static const XRect _Const0026 = {{ 0, 20 }, { 540, 355 }};
static const XRect _Const0027 = {{ 40, 40 }, { 521, 336 }};
static const XColor _Const0028 = { 0x00, 0x00, 0x00, 0xFF };
static const XPoint _Const0029 = { 96, 59 };
static const XRect _Const002A = {{ 117, 334 }, { 157, 354 }};
static const XStringRes _Const002B = { _StringsDefault0, 0x00D6 };
static const XRect _Const002C = {{ 213, 334 }, { 253, 354 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x00DD };
static const XRect _Const002E = {{ 309, 334 }, { 349, 354 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x00E4 };
static const XRect _Const0030 = {{ 406, 334 }, { 446, 354 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x00EB };
static const XRect _Const0032 = {{ 489, 334 }, { 529, 354 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x00F2 };
static const XRect _Const0034 = {{ 7, 267 }, { 37, 287 }};
static const XStringRes _Const0035 = { _StringsDefault0, 0x00F9 };
static const XRect _Const0036 = {{ 7, 208 }, { 37, 228 }};
static const XStringRes _Const0037 = { _StringsDefault0, 0x00FF };
static const XRect _Const0038 = {{ 7, 149 }, { 37, 169 }};
static const XStringRes _Const0039 = { _StringsDefault0, 0x0105 };
static const XRect _Const003A = {{ 7, 90 }, { 37, 110 }};
static const XStringRes _Const003B = { _StringsDefault0, 0x010B };
static const XRect _Const003C = {{ 7, 38 }, { 37, 58 }};
static const XRect _Const003D = {{ 40, 130 }, { 520, 132 }};
static const XRect _Const003E = {{ 420, 90 }, { 506, 120 }};
static const XStringRes _Const003F = { _StringsDefault0, 0x0111 };
static const XRect _Const0040 = {{ 190, 260 }, { 280, 294 }};
static const XStringRes _Const0041 = { _StringsDefault0, 0x0119 };
static const XRect _Const0042 = {{ 210, 60 }, { 300, 94 }};
static const XStringRes _Const0043 = { _StringsDefault0, 0x0122 };
static const XRect _Const0044 = {{ 120, 240 }, { 122, 335 }};
static const XRect _Const0045 = {{ 370, 240 }, { 372, 335 }};
static const XRect _Const0046 = {{ 140, 320 }, { 340, 322 }};
static const XRect _Const0047 = {{ 50, 20 }, { 52, 336 }};
static const XRect _Const0048 = {{ 0, 0 }, { 240, 135 }};
static const XRect _Const0049 = {{ 0, 0 }, { 240, 20 }};
static const XRect _Const004A = {{ 0, 20 }, { 240, 135 }};
static const XRect _Const004B = {{ 0, 20 }, { 240, 115 }};
static const XPoint _Const004C = { 0, 115 };
static const XPoint _Const004D = { 240, 115 };
static const XPoint _Const004E = { 240, 20 };
static const XPoint _Const004F = { 0, 20 };
static const XRect _Const0050 = {{ 20, 10 }, { 240, 120 }};
static const XStringRes _Const0051 = { _StringsDefault0, 0x012A };
static const XStringRes _Const0052 = { _StringsDefault0, 0x0133 };
static const XRect _Const0053 = {{ 0, 0 }, { 520, 95 }};
static const XRect _Const0054 = {{ 0, 0 }, { 140, 95 }};
static const XRect _Const0055 = {{ -1, 0 }, { 520, 95 }};
static const XRect _Const0056 = {{ 340, 60 }, { 520, 95 }};
static const XStringRes _Const0057 = { _StringsDefault0, 0x013B };
static const XRect _Const0058 = {{ 340, 0 }, { 520, 60 }};
static const XStringRes _Const0059 = { _StringsDefault0, 0x014D };
static const XRect _Const005A = {{ 150, 60 }, { 330, 95 }};
static const XStringRes _Const005B = { _StringsDefault0, 0x0157 };
static const XRect _Const005C = {{ 150, 0 }, { 330, 60 }};
static const XStringRes _Const005D = { _StringsDefault0, 0x0167 };
static const XPoint _Const005E = { 140, 100 };
static const XPoint _Const005F = { 140, 0 };
static const XPoint _Const0060 = { 330, 100 };
static const XPoint _Const0061 = { 330, 0 };
static const XStringRes _Const0062 = { _StringsDefault0, 0x0170 };
static const XRect _Const0063 = {{ 0, 0 }, { 568, 95 }};
static const XRect _Const0064 = {{ 0, 0 }, { 50, 40 }};
static const XStringRes _Const0065 = { _StringsDefault0, 0x0180 };
static const XRect _Const0066 = {{ 0, 50 }, { 50, 90 }};
static const XStringRes _Const0067 = { _StringsDefault0, 0x0185 };
static const XRect _Const0068 = {{ 495, 10 }, { 550, 90 }};
static const XStringRes _Const0069 = { _StringsDefault0, 0x018A };
static const XRect _Const006A = {{ 60, 0 }, { 500, 100 }};
static const XPoint _Const006B = { 70, 90 };
static const XPoint _Const006C = { 70, 0 };
static const XPoint _Const006D = { 80, 90 };
static const XPoint _Const006E = { 80, 0 };
static const XPoint _Const006F = { 90, 90 };
static const XPoint _Const0070 = { 90, 0 };
static const XPoint _Const0071 = { 100, 90 };
static const XPoint _Const0072 = { 100, 0 };
static const XPoint _Const0073 = { 110, 90 };
static const XPoint _Const0074 = { 110, 0 };
static const XPoint _Const0075 = { 120, 90 };
static const XPoint _Const0076 = { 120, 0 };
static const XPoint _Const0077 = { 130, 90 };
static const XPoint _Const0078 = { 130, 0 };
static const XPoint _Const0079 = { 140, 90 };
static const XPoint _Const007A = { 150, 90 };
static const XPoint _Const007B = { 150, 0 };
static const XPoint _Const007C = { 160, 90 };
static const XPoint _Const007D = { 160, 0 };
static const XPoint _Const007E = { 170, 90 };
static const XPoint _Const007F = { 170, 0 };
static const XPoint _Const0080 = { 60, 50 };
static const XPoint _Const0081 = { 510, 50 };
static const XPoint _Const0082 = { 510, 10 };
static const XPoint _Const0083 = { 60, 10 };
static const XRect _Const0084 = {{ 120, 29 }, { 160, 69 }};
static const XPoint _Const0085 = { 110, 95 };
static const XPoint _Const0086 = { 170, 95 };
static const XPoint _Const0087 = { 0, 40 };
static const XPoint _Const0088 = { 50, 40 };
static const XPoint _Const0089 = { 50, 0 };

/* Initializer for the class 'Climate::Climate' */
void ClimateClimate__Init( ClimateClimate _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->MoveMenuEffect, &_this->_XObject, 0 );
  ClimateStatusBar__Init( &_this->StatusBar, &_this->_XObject, 0 );
  ClimateDiagram__Init( &_this->Diagram, &_this->_XObject, 0 );
  ClimateStartButton__Init( &_this->StartButton, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffect, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->MoveSliderEffect, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->AutoDemoTimer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateClimate );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, ClimateBackColor );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->MoveMenuEffect, EffectsTimingFastIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->MoveMenuEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->MoveMenuEffect, 300 );
  CoreRectView__OnSetBounds( &_this->StatusBar, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Diagram, _Const0003 );
  CoreRectView__OnSetBounds( &_this->StartButton, _Const0004 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffect, EffectsTimingFastIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RectEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffect, 300 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->MoveSliderEffect, EffectsTimingFastIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->MoveSliderEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->MoveSliderEffect, 500 
  );
  CoreTimer_OnSetPeriod( &_this->AutoDemoTimer, 1000 );
  CoreTimer_OnSetBegin( &_this->AutoDemoTimer, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatusBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Diagram ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StartButton ), 0 );
  _this->MoveMenuEffect.Super1.OnFinished = EwNewSlot( _this, ClimateClimate_onFinishedMenu 
  );
  _this->MoveMenuEffect.Super1.OnAnimate = EwNewSlot( _this, ClimateClimate_onAnimateMenu 
  );
  _this->Device = EwGetAutoObject( &ClimateDevice, ClimateDeviceClass );
  _this->StartButton.OnAction = EwNewSlot( _this, ClimateClimate_onStartStop );
  ClimateStartButton_OnSetIsRunning( &_this->StartButton, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetRunning, ClimateDeviceClass_OnSetRunning 
  ));
  _this->RectEffect.Outlet = EwNewRef( &_this->Diagram, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->MoveSliderEffect.Super1.OnFinished = EwNewSlot( _this, ClimateClimate_onFinishedSlider 
  );
  _this->MoveSliderEffect.Super1.OnAnimate = EwNewSlot( _this, ClimateClimate_onAnimateSlider 
  );
  _this->AutoDemoTimer.OnTrigger = EwNewSlot( _this, ClimateClimate_AutoDemoSlot 
  );

  /* Call the user defined constructor */
  ClimateClimate_Init( _this, aArg );
}

/* Re-Initializer for the class 'Climate::Climate' */
void ClimateClimate__ReInit( ClimateClimate _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  EffectsInt32Effect__ReInit( &_this->MoveMenuEffect );
  ClimateStatusBar__ReInit( &_this->StatusBar );
  ClimateDiagram__ReInit( &_this->Diagram );
  ClimateStartButton__ReInit( &_this->StartButton );
  EffectsRectEffect__ReInit( &_this->RectEffect );
  EffectsInt32Effect__ReInit( &_this->MoveSliderEffect );
  CoreTimer__ReInit( &_this->AutoDemoTimer );
}

/* Finalizer method for the class 'Climate::Climate' */
void ClimateClimate__Done( ClimateClimate _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateClimate );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  EffectsInt32Effect__Done( &_this->MoveMenuEffect );
  ClimateStatusBar__Done( &_this->StatusBar );
  ClimateDiagram__Done( &_this->Diagram );
  ClimateStartButton__Done( &_this->StartButton );
  EffectsRectEffect__Done( &_this->RectEffect );
  EffectsInt32Effect__Done( &_this->MoveSliderEffect );
  CoreTimer__Done( &_this->AutoDemoTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::Climate' */
void ClimateClimate__Mark( ClimateClimate _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( _this->FirstMenuItem );
  EwMarkObject( _this->LastMenuItem );
  EwMarkObject( &_this->MoveMenuEffect );
  EwMarkObject( _this->Device );
  EwMarkObject( &_this->StatusBar );
  EwMarkObject( &_this->Diagram );
  EwMarkObject( &_this->StartButton );
  EwMarkObject( &_this->RectEffect );
  EwMarkObject( &_this->MoveSliderEffect );
  EwMarkObject( _this->slider );
  EwMarkObject( _this->dataItem );
  EwMarkObject( &_this->AutoDemoTimer );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* Slot method to perform the menu move animation. */
void ClimateClimate_onAnimateSlider( ClimateClimate _this, XObject sender )
{
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->slider == 0 ) || ( _this->dataItem == 0 ))
    return;

  delta = ( ClimateMenuItemSize.X / 5 ) * 4;
  CoreRectView__OnSetBounds( _this->slider, EwSetRectOrigin( _this->slider->Super2.Bounds, 
  EwSetPointX( _this->slider->Super2.Bounds.Point1, _this->MoveSliderEffect.Value 
  )));

  if (( _this->MoveSliderEffect.Value - delta ) < _this->dataItemOriginX )
    CoreRectView__OnSetBounds( _this->dataItem, EwSetRectOrigin( _this->dataItem->Super2.Bounds, 
    EwSetPointX( _this->dataItem->Super2.Bounds.Point1, _this->MoveSliderEffect.Value 
    - delta )));
  else
    CoreRectView__OnSetBounds( _this->dataItem, EwSetRectOrigin( _this->dataItem->Super2.Bounds, 
    EwSetPointX( _this->dataItem->Super2.Bounds.Point1, _this->dataItemOriginX )));
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ClimateClimate_Init( ClimateClimate _this, XHandle aArg )
{
  ClimateMenuItem item;
  ClimateDataItem data;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreRectView__OnSetBounds( _this, EwSetRectSize( _this->Super2.Bounds, _Const0005 
  ));
  CoreRectView__OnSetBounds( &_this->Rectangle, EwGetRectORect( _this->Super2.Bounds 
  ));
  item = EwNewObject( ClimateMenuItem, 0 );
  ClimateMenuItem_OnSetCaption( item, EwLoadString( &_Const0006 ));
  item->Type = ClimateMenuTypeTempHumid;
  data = EwNewObject( ClimateDataItem, 0 );
  CoreRectView__OnSetBounds( data, EwSetRectSize( data->Super2.Bounds, ClimateDataItemSize 
  ));
  ClimateDataItem_OnSetCaption( data, EwLoadString( &_Const0007 ));
  ClimateDataItem_OnSetUnit( data, ClimateUnitTypeTemperature );
  ClimateDataItem_OnSetDataPoint( data, EwNewRef( _this->Device, ClimateDeviceClass_OnGetNominalTemp, 
  ClimateDeviceClass_OnSetNominalTemp ));
  data->MinValue = 0;
  data->MaxValue = 90;
  ClimateDataItem_OnSetValueColor( data, ClimateGraphColor );
  data->OnChange = EwNewSlot( _this, ClimateClimate_ShowSlider );
  ClimateMenuItem_OnSetDataItem( item, data );
  data = EwNewObject( ClimateDataItem, 0 );
  CoreRectView__OnSetBounds( data, EwSetRectSize( data->Super2.Bounds, ClimateDataItemSize 
  ));
  ClimateDataItem_OnSetCaption( data, EwLoadString( &_Const0008 ));
  ClimateDataItem_OnSetUnit( data, ClimateUnitTypePercent );
  ClimateDataItem_OnSetDataPoint( data, EwNewRef( _this->Device, ClimateDeviceClass_OnGetHumidity, 
  ClimateDeviceClass_OnSetHumidity ));
  data->MinValue = 0;
  data->MaxValue = 100;
  ClimateDataItem_OnSetValueColor( data, ClimateHumidityColor );
  data->OnChange = EwNewSlot( _this, ClimateClimate_ShowSlider );
  item->DataItem->NextDataItem = data;
  ClimateClimate_AppendMenuItem( _this, item );
  item = EwNewObject( ClimateMenuItem, 0 );
  ClimateMenuItem_OnSetCaption( item, EwLoadString( &_Const0009 ));
  item->Type = ClimateMenuTypeDwellTime;
  data = EwNewObject( ClimateDataItem, 0 );
  CoreRectView__OnSetBounds( data, EwSetRectSize( data->Super2.Bounds, ClimateDataItemSizeLarge 
  ));
  ClimateDataItem_OnSetCaption( data, EwLoadString( &_Const0009 ));
  ClimateDataItem_OnSetUnit( data, ClimateUnitTypeTime );
  ClimateDataItem_OnSetDataPoint( data, EwNewRef( _this->Device, ClimateDeviceClass_OnGetDwellTime, 
  ClimateDeviceClass_OnSetDwellTime ));
  data->MinValue = 10;
  data->MaxValue = 480;
  ClimateDataItem_OnSetValueColor( data, ClimateTextColor );
  data->OnChange = EwNewSlot( _this, ClimateClimate_ShowSlider );
  ClimateMenuItem_OnSetDataItem( item, data );
  ClimateClimate_AppendMenuItem( _this, item );
  item = EwNewObject( ClimateMenuItem, 0 );
  ClimateMenuItem_OnSetCaption( item, EwLoadString( &_Const000A ));
  item->Type = ClimateMenuTypeHeatCool;
  data = EwNewObject( ClimateDataItem, 0 );
  CoreRectView__OnSetBounds( data, EwSetRectSize( data->Super2.Bounds, ClimateDataItemSize 
  ));
  ClimateDataItem_OnSetCaption( data, EwLoadString( &_Const000B ));
  ClimateDataItem_OnSetUnit( data, ClimateUnitTypeTime );
  ClimateDataItem_OnSetDataPoint( data, EwNewRef( _this->Device, ClimateDeviceClass_OnGetHeatTime, 
  ClimateDeviceClass_OnSetHeatTime ));
  data->MinValue = 10;
  data->MaxValue = 60;
  ClimateDataItem_OnSetValueColor( data, ClimateTextColor );
  data->OnChange = EwNewSlot( _this, ClimateClimate_ShowSlider );
  ClimateMenuItem_OnSetDataItem( item, data );
  data = EwNewObject( ClimateDataItem, 0 );
  CoreRectView__OnSetBounds( data, EwSetRectSize( data->Super2.Bounds, ClimateDataItemSize 
  ));
  ClimateDataItem_OnSetCaption( data, EwLoadString( &_Const000C ));
  ClimateDataItem_OnSetUnit( data, ClimateUnitTypeTime );
  ClimateDataItem_OnSetDataPoint( data, EwNewRef( _this->Device, ClimateDeviceClass_OnGetCoolTime, 
  ClimateDeviceClass_OnSetCoolTime ));
  data->MinValue = 10;
  data->MaxValue = 60;
  ClimateDataItem_OnSetValueColor( data, ClimateTextColor );
  data->OnChange = EwNewSlot( _this, ClimateClimate_ShowSlider );
  item->DataItem->NextDataItem = data;
  ClimateClimate_AppendMenuItem( _this, item );
  CoreRectView__OnSetBounds( &_this->Diagram, ClimateChartStopPos );
  CoreGroup__Restack( _this, ((CoreView)&_this->Diagram ), 100 );
  CoreRectView__OnSetBounds( &_this->StartButton, ClimateStartButtonPos );
  CoreRectView__OnSetBounds( &_this->StatusBar, ClimateStatusBarPos );
}

/* The method 'AppendMenuItem' adds the menu item to the end of the chained list 
   of menu items. */
void ClimateClimate_AppendMenuItem( ClimateClimate _this, ClimateMenuItem aItem )
{
  XPoint origin = ClimateSpacing;
  ClimateDataItem data;

  CoreRectView__OnSetBounds( aItem, EwSetRectSize( aItem->Super2.Bounds, ClimateMenuItemSize 
  ));
  aItem->OnChange = EwNewSlot( _this, ClimateClimate_MenuItemSelected );

  if ( _this->FirstMenuItem == 0 )
  {
    _this->FirstMenuItem = aItem;
    _this->LastMenuItem = aItem;
  }
  else
  {
    origin.Y = ( origin.Y + _this->LastMenuItem->Super2.Bounds.Point2.Y );
    _this->LastMenuItem->NextMenuItem = aItem;
    _this->LastMenuItem = aItem;
  }

  CoreRectView__OnSetBounds( aItem, EwSetRectOrigin( aItem->Super2.Bounds, origin 
  ));
  CoreGroup__Add( _this, ((CoreView)aItem ), 0 );
  data = aItem->DataItem;

  while ( data != 0 )
  {
    CoreGroup__Add( _this, ((CoreView)data ), 0 );
    data = data->NextDataItem;
  }

  CoreGroup__Restack( _this, ((CoreView)&_this->Diagram ), 100 );
  CoreGroup__Restack( _this, ((CoreView)&_this->StartButton ), 100 );
}

/* This slot method is called from the menu items when the user has clicked on it. */
void ClimateClimate_MenuItemSelected( ClimateClimate _this, XObject sender )
{
  XInt32 shift = 0;
  XBool found = 0;
  ClimateMenuItem selectedItem;
  ClimateMenuItem item;

  if ( _this->slider != 0 )
    EwPostSignal( EwNewSlot( _this, ClimateClimate_HideSlider ), ((XObject)_this 
      ));

  if ( _this->Device->Running )
    return;

  selectedItem = EwCastObject( sender, ClimateMenuItem );

  if ( selectedItem == 0 )
    return;

  item = _this->FirstMenuItem;

  while (( item != 0 ) && !found )
  {
    if ( item != selectedItem )
    {
      ClimateMenuItem newItem;
      shift = ( shift - ClimateSpacing.Y ) - ClimateMenuItemSize.Y;
      newItem = EwNewObject( ClimateMenuItem, 0 );
      ClimateMenuItem_OnSetCaption( newItem, item->Caption );
      newItem->Type = item->Type;
      ClimateClimate_AppendMenuItem( _this, newItem );
      item = item->NextMenuItem;
    }
    else
      found = 1;
  }

  _this->MoveMenuEffect.Value1 = 0;
  _this->MoveMenuEffect.Value2 = shift;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveMenuEffect, 1 );
}

/* Slot method to perform the menu move animation. */
void ClimateClimate_onAnimateMenu( ClimateClimate _this, XObject sender )
{
  ClimateMenuItem item;
  XInt32 y;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  item = _this->FirstMenuItem;
  y = ClimateSpacing.Y + _this->MoveMenuEffect.Value;
  delta = ClimateSpacing.Y + ClimateMenuItemSize.Y;

  while ( item != 0 )
  {
    CoreRectView__OnSetBounds( item, EwSetRectOrigin( item->Super2.Bounds, EwSetPointY( 
    item->Super2.Bounds.Point1, y )));
    y = y + delta;
    item = item->NextMenuItem;
  }
}

/* Slot method to rearrange the menu structure after the menu move animation. */
void ClimateClimate_onFinishedMenu( ClimateClimate _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  while ( _this->FirstMenuItem != 0 )
  {
    if ( _this->FirstMenuItem->Super2.Bounds.Point1.Y < 0 )
    {
      ClimateMenuItem item = _this->FirstMenuItem->NextMenuItem;

      while (( item != 0 ) && ( item->Type != _this->FirstMenuItem->Type ))
        item = item->NextMenuItem;

      if ( item != 0 )
        ClimateMenuItem_OnSetDataItem( item, _this->FirstMenuItem->DataItem );

      CoreGroup__Remove( _this, ((CoreView)_this->FirstMenuItem ));
      _this->FirstMenuItem = _this->FirstMenuItem->NextMenuItem;
    }
    else
      return;
  }
}

/* This is a slot method. */
void ClimateClimate_onStartStop( ClimateClimate _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->slider != 0 )
    EwPostSignal( EwNewSlot( _this, ClimateClimate_HideSlider ), ((XObject)_this 
      ));

  CoreGroup__Restack( _this, ((CoreView)&_this->Diagram ), 100 );
  _this->RectEffect.Value1 = _this->Diagram.Super2.Bounds;

  if ( _this->Device->Running == 1 )
    _this->RectEffect.Value2 = ClimateChartStartPos;
  else
    _this->RectEffect.Value2 = ClimateChartStopPos;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 1 );
}

/* This is a slot method. */
void ClimateClimate_ShowSlider( ClimateClimate _this, XObject sender )
{
  if ( _this->Device->Running )
    return;

  if ( _this->slider != 0 )
    return;

  _this->dataItem = EwCastObject( sender, ClimateDataItem );

  if ( _this->dataItem == 0 )
    return;

  _this->slider = EwNewObject( ClimateSliderItem, 0 );
  CoreRectView__OnSetBounds( _this->slider, EwSetRectOrigin( _this->slider->Super2.Bounds, 
  EwNewPoint( 320, ClimateSpacing.Y )));
  CoreRectView__OnSetBounds( _this->slider, EwSetRectSize( _this->slider->Super2.Bounds, 
  ClimateSliderSize ));
  ClimateSliderItem_OnSetOutlet( _this->slider, _this->dataItem->DataPoint );
  ClimateSliderItem_OnSetMinValue( _this->slider, _this->dataItem->MinValue );
  ClimateSliderItem_OnSetMaxValue( _this->slider, _this->dataItem->MaxValue );
  ViewsWarpImage_OnSetColor( &_this->slider->Triangle, _this->dataItem->ValueColor 
  );
  _this->slider->OnClose = EwNewSlot( _this, ClimateClimate_HideSlider );
  _this->dataItemOriginX = _this->dataItem->Super2.Bounds.Point1.X;
  CoreGroup__Restack( _this, ((CoreView)_this->dataItem ), 100 );
  CoreGroup__Add( _this, ((CoreView)_this->slider ), 0 );
  _this->MoveSliderEffect.Value1 = 320;
  _this->MoveSliderEffect.Value2 = (( 320 - ClimateSliderSize.X ) - ClimateSpacing.X 
  ) + 1;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveSliderEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveSliderEffect, 1 );
}

/* This is a slot method. */
void ClimateClimate_HideSlider( ClimateClimate _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->MoveSliderEffect.Value1 = (( 320 - ClimateSliderSize.X ) - ClimateSpacing.X 
  ) + 1;
  _this->MoveSliderEffect.Value2 = 320;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveSliderEffect, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->MoveSliderEffect, 1 );
}

/* Slot method to rearrange the menu structure after the menu move animation. */
void ClimateClimate_onFinishedSlider( ClimateClimate _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->MoveSliderEffect.Value2 > _this->MoveSliderEffect.Value1 )
  {
    CoreGroup__Remove( _this, ((CoreView)_this->slider ));
    _this->slider = 0;
  }
}

/* Slot method to trigger the next phase of the auto demo. */
void ClimateClimate_AutoDemoSlot( ClimateClimate _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  switch ( _this->AutoState )
  {
    case 0 :
      if ( _this->FirstMenuItem->Type == ClimateMenuTypeTempHumid )
        EwPostSignal( EwNewSlot( _this->FirstMenuItem, ClimateMenuItem_AutoDemo 
          ), ((XObject)_this ));
      else
        if ( _this->FirstMenuItem->NextMenuItem->Type == ClimateMenuTypeTempHumid )
          EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
            ), ((XObject)_this ));
        else
          EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem->NextMenuItem, 
            ClimateMenuItem_AutoDemo ), ((XObject)_this ));
    break;

    case 1 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 2 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 3 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 4 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->DataItem, ClimateDataItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 5 :
      ClimateDeviceClass_OnSetNominalTemp( _this->Device, 65 );
    break;

    case 6 :
      ClimateDeviceClass_OnSetNominalTemp( _this->Device, 75 );
    break;

    case 7 :
      ClimateDeviceClass_OnSetNominalTemp( _this->Device, 79 );
    break;

    case 8 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 9 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->DataItem, ClimateDataItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 10 :
      ClimateDeviceClass_OnSetDwellTime( _this->Device, 110 );
    break;

    case 11 :
      ClimateDeviceClass_OnSetDwellTime( _this->Device, 100 );
    break;

    case 12 :
      ClimateDeviceClass_OnSetDwellTime( _this->Device, 80 );
    break;

    case 13 :
      ClimateDeviceClass_OnSetDwellTime( _this->Device, 70 );
    break;

    case 14 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 15 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->DataItem, ClimateDataItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 16 :
      ClimateDeviceClass_OnSetHeatTime( _this->Device, 25 );
    break;

    case 17 :
      ClimateDeviceClass_OnSetHeatTime( _this->Device, 20 );
    break;

    case 18 :
      ClimateDeviceClass_OnSetHeatTime( _this->Device, 15 );
    break;

    case 19 :
      EwPostSignal( EwNewSlot( _this->FirstMenuItem->NextMenuItem, ClimateMenuItem_AutoDemo 
        ), ((XObject)_this ));
    break;

    case 20 :
    {
      ClimateDeviceClass_OnSetRunning( _this->Device, 1 );
      EwPostSignal( EwNewSlot( _this, ClimateClimate_onStartStop ), ((XObject)_this 
        ));
    }
    break;

    case 29 :
    {
      ClimateDeviceClass_OnSetRunning( _this->Device, 0 );
      EwPostSignal( EwNewSlot( _this, ClimateClimate_onStartStop ), ((XObject)_this 
        ));
    }
    break;

    default : 
      ;
  }

  _this->AutoState = _this->AutoState + 1;

  if ( _this->AutoState > 29 )
    _this->AutoState = 0;
}

/* Variants derived from the class : 'Climate::Climate' */
EW_DEFINE_CLASS_VARIANTS( ClimateClimate )
EW_END_OF_CLASS_VARIANTS( ClimateClimate )

/* Virtual Method Table (VMT) for the class : 'Climate::Climate' */
EW_DEFINE_CLASS( ClimateClimate, CoreGroup, "Climate::Climate" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateClimate )

/* Initializer for the class 'Climate::MenuItem' */
void ClimateMenuItem__Init( ClimateMenuItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateMenuItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000D );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const000D );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000E );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000F );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0011 );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const000D );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Text, _Const0012 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->Text, ClimateTextColor );
  _this->Type = ClimateMenuTypeTempHumid;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ClimateMenuItem_enterLeaveSlot 
  );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ClimateMenuItem_enterLeaveSlot 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ClimateMenuItem_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ClimateMenuItem_pressReleaseSlot 
  );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
}

/* Re-Initializer for the class 'Climate::MenuItem' */
void ClimateMenuItem__ReInit( ClimateMenuItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Climate::MenuItem' */
void ClimateMenuItem__Done( ClimateMenuItem _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateMenuItem );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->Text );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::MenuItem' */
void ClimateMenuItem__Mark( ClimateMenuItem _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->Text );
  EwMarkSlot( _this->OnChange );
  EwMarkObject( _this->NextMenuItem );
  EwMarkObject( _this->DataItem );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* 'C' function for method : 'Climate::MenuItem.OnSetBounds()' */
void ClimateMenuItem_OnSetBounds( ClimateMenuItem _this, XRect value )
{
  CoreGroup_OnSetBounds((CoreGroup)_this, value );

  if ( _this->DataItem != 0 )
    CoreRectView__OnSetBounds( _this->DataItem, EwSetRectOrigin( _this->DataItem->Super2.Bounds, 
    EwNewPoint( _this->Super2.Bounds.Point2.X, _this->Super2.Bounds.Point1.Y )));
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateMenuItem_UpdateLayout( ClimateMenuItem _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  CoreRectView__OnSetBounds( &_this->Text, EwNewRect( ClimateSpacing.X, 0, aSize.X, 
  aSize.Y ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateMenuItem_UpdateViewState( ClimateMenuItem _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBorderColor );
  else
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBackColor );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateMenuItem_enterLeaveSlot( ClimateMenuItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateMenuItem_pressReleaseSlot( ClimateMenuItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    EwSignal( _this->OnChange, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Climate::MenuItem.OnSetCaption()' */
void ClimateMenuItem_OnSetCaption( ClimateMenuItem _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* This is an onset method. */
void ClimateMenuItem_OnSetDataItem( ClimateMenuItem _this, ClimateDataItem value )
{
  _this->DataItem = value;

  if ( _this->DataItem != 0 )
    CoreRectView__OnSetBounds( _this->DataItem, EwSetRectOrigin( _this->DataItem->Super2.Bounds, 
    EwNewPoint( _this->Super2.Bounds.Point2.X, _this->Super2.Bounds.Point1.Y )));
}

/* Slot method to trigger the next phase of the auto demo. */
void ClimateMenuItem_AutoDemo( ClimateMenuItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnChange, ((XObject)_this ));
}

/* Variants derived from the class : 'Climate::MenuItem' */
EW_DEFINE_CLASS_VARIANTS( ClimateMenuItem )
EW_END_OF_CLASS_VARIANTS( ClimateMenuItem )

/* Virtual Method Table (VMT) for the class : 'Climate::MenuItem' */
EW_DEFINE_CLASS( ClimateMenuItem, CoreGroup, "Climate::MenuItem" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  ClimateMenuItem_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateMenuItem_UpdateLayout,
  ClimateMenuItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateMenuItem )

/* Color constant according UI design. */
const XColor ClimateBorderColor = { 0x05, 0x54, 0x5D, 0xFF };

/* Color constant according UI design. */
const XColor ClimateBackColor = { 0x03, 0x1C, 0x1F, 0xFF };

/* Color constant according UI design. */
const XColor ClimateSelectColor = { 0x03, 0x27, 0x2B, 0xFF };

/* Color constant according UI design. */
const XColor ClimateStartColor = { 0x73, 0xBD, 0x13, 0xFF };

/* Color constant according UI design. */
const XColor ClimateGraphColor = { 0xFF, 0x56, 0x01, 0xFF };

/* Color constant according UI design. */
const XColor ClimateTextColor = { 0xFF, 0xFF, 0xFF, 0xFF };

/* This is a font resource. */
EW_DEFINE_FONT_RES( ClimateMediumFont, 9, 3, 0, 16, 0x0001, 0x00C0 )
  EW_GLYPH( 0x0001, 0, -7, 4, 7, 4, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 2, 0x0000007C ),                /* ' ' */
  EW_GLYPH( 0x0021, 0, -7, 2, 7, 3, 0x0000007C ),               /* '!' */
  EW_GLYPH( 0x0022, 0, -8, 3, 3, 3, 0x000000A9 ),               /* '"' */
  EW_GLYPH( 0x0023, 0, -7, 6, 7, 6, 0x000000CB ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -9, 6, 10, 6, 0x00000197 ),              /* '$' */
  EW_GLYPH( 0x0025, 0, -7, 7, 7, 7, 0x00000266 ),               /* '%' */
  EW_GLYPH( 0x0026, 0, -7, 7, 7, 6, 0x00000334 ),               /* '&' */
  EW_GLYPH( 0x0027, 0, -8, 2, 2, 2, 0x000003F2 ),               /* ''' */
  EW_GLYPH( 0x0028, 0, -8, 4, 10, 3, 0x00000401 ),              /* '(' */
  EW_GLYPH( 0x0029, 0, -8, 3, 10, 3, 0x00000473 ),              /* ')' */
  EW_GLYPH( 0x002A, 0, -7, 5, 5, 4, 0x000004DF ),               /* '*' */
  EW_GLYPH( 0x002B, 0, -7, 6, 7, 6, 0x00000541 ),               /* '+' */
  EW_GLYPH( 0x002C, 0, -2, 2, 3, 2, 0x000005B1 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -3, 3, 1, 3, 0x000005CB ),               /* '-' */
  EW_GLYPH( 0x002E, 0, -2, 2, 2, 3, 0x000005DD ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -7, 4, 8, 4, 0x000005EB ),               /* '/' */
  EW_GLYPH( 0x0030, 0, -7, 5, 7, 6, 0x0000064F ),               /* '0' */
  EW_GLYPH( 0x0031, 0, -7, 4, 7, 6, 0x000006CD ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -7, 6, 7, 6, 0x0000070C ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -7, 5, 7, 6, 0x000007AD ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -7, 6, 7, 6, 0x00000846 ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -7, 6, 7, 6, 0x000008D0 ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -7, 6, 7, 6, 0x0000097E ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -7, 6, 7, 6, 0x00000A2D ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -7, 6, 7, 6, 0x00000AB5 ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -7, 5, 7, 6, 0x00000B4C ),               /* '9' */
  EW_GLYPH( 0x003A, 0, -5, 2, 5, 2, 0x00000BDF ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -5, 2, 6, 2, 0x00000C05 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -5, 5, 4, 5, 0x00000C37 ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -5, 5, 3, 5, 0x00000C89 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -5, 5, 4, 5, 0x00000CDA ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -7, 5, 7, 5, 0x00000D24 ),               /* '?' */
  EW_GLYPH( 0x0040, 0, -7, 9, 9, 9, 0x00000D9E ),               /* '@' */
  EW_GLYPH( 0x0041, 0, -7, 7, 7, 7, 0x00000EF5 ),               /* 'A' */
  EW_GLYPH( 0x0042, 0, -7, 6, 7, 6, 0x00000F95 ),               /* 'B' */
  EW_GLYPH( 0x0043, 0, -7, 7, 7, 7, 0x0000102A ),               /* 'C' */
  EW_GLYPH( 0x0044, 0, -7, 6, 7, 7, 0x000010D6 ),               /* 'D' */
  EW_GLYPH( 0x0045, 0, -7, 6, 7, 6, 0x0000115E ),               /* 'E' */
  EW_GLYPH( 0x0046, 0, -7, 6, 7, 6, 0x000011E8 ),               /* 'F' */
  EW_GLYPH( 0x0047, 0, -7, 7, 7, 7, 0x0000125E ),               /* 'G' */
  EW_GLYPH( 0x0048, 0, -7, 7, 7, 7, 0x00001315 ),               /* 'H' */
  EW_GLYPH( 0x0049, 0, -7, 2, 7, 3, 0x0000137E ),               /* 'I' */
  EW_GLYPH( 0x004A, 0, -7, 5, 7, 6, 0x00001395 ),               /* 'J' */
  EW_GLYPH( 0x004B, 0, -7, 7, 7, 6, 0x000013E8 ),               /* 'K' */
  EW_GLYPH( 0x004C, 0, -7, 6, 7, 5, 0x00001480 ),               /* 'L' */
  EW_GLYPH( 0x004D, 0, -7, 8, 7, 9, 0x000014C5 ),               /* 'M' */
  EW_GLYPH( 0x004E, 0, -7, 7, 7, 7, 0x0000156D ),               /* 'N' */
  EW_GLYPH( 0x004F, 0, -7, 7, 7, 7, 0x000015F6 ),               /* 'O' */
  EW_GLYPH( 0x0050, 0, -7, 6, 7, 6, 0x000016A3 ),               /* 'P' */
  EW_GLYPH( 0x0051, 0, -7, 7, 9, 7, 0x00001726 ),               /* 'Q' */
  EW_GLYPH( 0x0052, 0, -7, 6, 7, 6, 0x00001808 ),               /* 'R' */
  EW_GLYPH( 0x0053, 0, -7, 6, 7, 6, 0x00001895 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -7, 6, 7, 6, 0x0000194F ),               /* 'T' */
  EW_GLYPH( 0x0055, 0, -7, 6, 7, 6, 0x000019AF ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -7, 7, 7, 6, 0x00001A17 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -7, 9, 7, 9, 0x00001AC1 ),               /* 'W' */
  EW_GLYPH( 0x0058, 0, -7, 6, 7, 6, 0x00001BAC ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -7, 6, 7, 6, 0x00001C65 ),               /* 'Y' */
  EW_GLYPH( 0x005A, 0, -7, 6, 7, 6, 0x00001CEA ),               /* 'Z' */
  EW_GLYPH( 0x005B, 0, -8, 3, 10, 3, 0x00001D94 ),              /* '[' */
  EW_GLYPH( 0x005C, 0, -7, 4, 8, 4, 0x00001DCE ),               /* '\' */
  EW_GLYPH( 0x005D, 0, -8, 2, 10, 3, 0x00001E36 ),              /* ']' */
  EW_GLYPH( 0x005E, 0, -7, 4, 3, 4, 0x00001E5C ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 0, 5, 1, 5, 0x00001E8A ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -8, 3, 2, 3, 0x00001EA3 ),               /* '`' */
  EW_GLYPH( 0x0061, 0, -5, 5, 5, 5, 0x00001EB9 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -8, 6, 8, 6, 0x00001F32 ),               /* 'b' */
  EW_GLYPH( 0x0063, 0, -5, 5, 5, 5, 0x00001FC1 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -8, 6, 8, 6, 0x00002031 ),               /* 'd' */
  EW_GLYPH( 0x0065, 0, -5, 5, 5, 5, 0x000020BA ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -8, 4, 8, 3, 0x0000213B ),               /* 'f' */
  EW_GLYPH( 0x0067, 0, -5, 6, 7, 6, 0x00002193 ),               /* 'g' */
  EW_GLYPH( 0x0068, 1, -8, 5, 8, 6, 0x00002245 ),               /* 'h' */
  EW_GLYPH( 0x0069, 0, -7, 2, 7, 2, 0x000022A0 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -7, 3, 9, 2, 0x000022C7 ),              /* 'j' */
  EW_GLYPH( 0x006B, 0, -8, 6, 8, 5, 0x0000230C ),               /* 'k' */
  EW_GLYPH( 0x006C, 0, -8, 2, 8, 2, 0x00002386 ),               /* 'l' */
  EW_GLYPH( 0x006D, 0, -5, 9, 5, 9, 0x0000239F ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -5, 6, 5, 6, 0x0000241E ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -5, 6, 5, 6, 0x0000246B ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -5, 6, 7, 6, 0x00002505 ),               /* 'p' */
  EW_GLYPH( 0x0071, 0, -5, 6, 7, 6, 0x0000259E ),               /* 'q' */
  EW_GLYPH( 0x0072, 0, -5, 3, 5, 3, 0x00002635 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -5, 5, 5, 5, 0x00002660 ),               /* 's' */
  EW_GLYPH( 0x0074, -1, -6, 4, 6, 3, 0x000026E1 ),              /* 't' */
  EW_GLYPH( 0x0075, 0, -5, 5, 5, 6, 0x0000272F ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -5, 5, 5, 5, 0x00002770 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -5, 8, 5, 8, 0x000027D6 ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -5, 5, 5, 5, 0x00002877 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -5, 5, 7, 5, 0x000028E4 ),               /* 'y' */
  EW_GLYPH( 0x007A, 0, -5, 5, 5, 5, 0x00002968 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -8, 4, 10, 3, 0x000029DA ),              /* '{' */
  EW_GLYPH( 0x007C, 0, -7, 2, 8, 2, 0x00002A4D ),               /* '|' */
  EW_GLYPH( 0x007D, -1, -8, 4, 10, 3, 0x00002A65 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -4, 7, 2, 7, 0x00002AD9 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 2, 0x00002B0D ),
  EW_GLYPH( 0x00A1, 0, -5, 2, 7, 2, 0x00002B0D ),
  EW_GLYPH( 0x00A2, 0, -7, 5, 9, 5, 0x00002B3B ),
  EW_GLYPH( 0x00A3, 0, -7, 6, 7, 6, 0x00002BE2 ),
  EW_GLYPH( 0x00A4, 0, -7, 7, 7, 7, 0x00002C7A ),
  EW_GLYPH( 0x00A5, 0, -7, 6, 7, 6, 0x00002D2F ),
  EW_GLYPH( 0x00A6, 0, -7, 2, 8, 2, 0x00002DFD ),
  EW_GLYPH( 0x00A7, 0, -7, 6, 9, 6, 0x00002E28 ),
  EW_GLYPH( 0x00A8, 0, -7, 4, 1, 4, 0x00002F2F ),
  EW_GLYPH( 0x00A9, 0, -7, 8, 7, 8, 0x00002F41 ),
  EW_GLYPH( 0x00AA, 0, -7, 4, 4, 4, 0x00003037 ),
  EW_GLYPH( 0x00AB, 0, -5, 5, 4, 5, 0x00003081 ),
  EW_GLYPH( 0x00AC, 0, -4, 5, 2, 6, 0x000030CF ),
  EW_GLYPH( 0x00AD, 0, -3, 3, 1, 3, 0x00003100 ),
  EW_GLYPH( 0x00AE, 0, -7, 8, 7, 8, 0x00003112 ),
  EW_GLYPH( 0x00AF, 0, -7, 5, 1, 5, 0x0000320B ),
  EW_GLYPH( 0x00B0, 0, -7, 4, 3, 4, 0x00003224 ),
  EW_GLYPH( 0x00B1, 0, -6, 5, 6, 5, 0x00003259 ),
  EW_GLYPH( 0x00B2, 0, -7, 4, 4, 4, 0x000032C6 ),
  EW_GLYPH( 0x00B3, 0, -7, 4, 4, 4, 0x00003319 ),
  EW_GLYPH( 0x00B4, 0, -8, 3, 2, 3, 0x00003367 ),
  EW_GLYPH( 0x00B5, 0, -5, 6, 7, 6, 0x0000337F ),
  EW_GLYPH( 0x00B6, 0, -7, 5, 7, 5, 0x000033EC ),
  EW_GLYPH( 0x00B7, 1, -4, 2, 2, 3, 0x00003451 ),
  EW_GLYPH( 0x00B8, 0, 0, 2, 3, 2, 0x00003461 ),
  EW_GLYPH( 0x00B9, 0, -7, 3, 4, 4, 0x0000347E ),
  EW_GLYPH( 0x00BA, 0, -7, 5, 4, 5, 0x000034A5 ),
  EW_GLYPH( 0x00BB, 0, -5, 5, 4, 5, 0x000034E7 ),
  EW_GLYPH( 0x00BC, 0, -7, 8, 7, 7, 0x0000352B ),
  EW_GLYPH( 0x00BD, 0, -7, 8, 7, 8, 0x000035EC ),
  EW_GLYPH( 0x00BE, 0, -7, 8, 7, 8, 0x000036B4 ),
  EW_GLYPH( 0x00BF, 0, -5, 5, 7, 5, 0x00003796 ),
  EW_GLYPH( 0x00C0, 0, -10, 7, 10, 7, 0x00003800 ),
  EW_GLYPH( 0x00C1, 0, -10, 7, 10, 7, 0x000038CD ),
  EW_GLYPH( 0x00C2, 0, -10, 7, 10, 7, 0x0000399C ),
  EW_GLYPH( 0x00C3, 0, -10, 7, 11, 7, 0x00003A79 ),
  EW_GLYPH( 0x00C4, 0, -9, 7, 9, 7, 0x00003B68 ),
  EW_GLYPH( 0x00C5, 0, -10, 7, 10, 7, 0x00003C32 ),
  EW_GLYPH( 0x00C6, -1, -7, 11, 7, 9, 0x00003CFF ),
  EW_GLYPH( 0x00C7, 0, -7, 7, 10, 7, 0x00003E03 ),
  EW_GLYPH( 0x00C8, 0, -10, 6, 10, 6, 0x00003EEA ),
  EW_GLYPH( 0x00C9, 0, -10, 6, 10, 6, 0x00003F9E ),
  EW_GLYPH( 0x00CA, 0, -10, 6, 10, 6, 0x00004054 ),
  EW_GLYPH( 0x00CB, 0, -9, 6, 9, 6, 0x00004118 ),
  EW_GLYPH( 0x00CC, 0, -10, 3, 10, 3, 0x000041CA ),
  EW_GLYPH( 0x00CD, 0, -10, 3, 10, 3, 0x00004209 ),
  EW_GLYPH( 0x00CE, -1, -10, 4, 10, 3, 0x0000424A ),
  EW_GLYPH( 0x00CF, -1, -9, 4, 9, 3, 0x000042A3 ),
  EW_GLYPH( 0x00D0, 0, -7, 7, 7, 7, 0x000042EC ),
  EW_GLYPH( 0x00D1, 0, -10, 7, 11, 7, 0x0000438A ),
  EW_GLYPH( 0x00D2, 0, -10, 7, 10, 7, 0x00004462 ),
  EW_GLYPH( 0x00D3, 0, -10, 7, 10, 7, 0x0000453C ),
  EW_GLYPH( 0x00D4, 0, -10, 7, 10, 7, 0x00004618 ),
  EW_GLYPH( 0x00D5, 0, -10, 7, 11, 7, 0x00004702 ),
  EW_GLYPH( 0x00D6, 0, -9, 7, 9, 7, 0x000047FE ),
  EW_GLYPH( 0x00D7, 0, -5, 5, 4, 5, 0x000048D5 ),
  EW_GLYPH( 0x00D8, 0, -8, 7, 9, 7, 0x0000491D ),
  EW_GLYPH( 0x00D9, 0, -10, 6, 10, 6, 0x00004A11 ),
  EW_GLYPH( 0x00DA, 0, -10, 6, 10, 6, 0x00004AA3 ),
  EW_GLYPH( 0x00DB, 0, -10, 6, 10, 6, 0x00004B37 ),
  EW_GLYPH( 0x00DC, 0, -9, 6, 9, 6, 0x00004BD9 ),
  EW_GLYPH( 0x00DD, 0, -10, 6, 10, 6, 0x00004C69 ),
  EW_GLYPH( 0x00DE, 0, -7, 6, 7, 6, 0x00004D1A ),
  EW_GLYPH( 0x00DF, 0, -8, 6, 8, 6, 0x00004DA1 ),
  EW_GLYPH( 0x00E0, 0, -8, 5, 8, 5, 0x00004E38 ),
  EW_GLYPH( 0x00E1, 0, -8, 5, 8, 5, 0x00004ED8 ),
  EW_GLYPH( 0x00E2, 0, -8, 5, 8, 5, 0x00004F7A ),
  EW_GLYPH( 0x00E3, 0, -9, 5, 9, 5, 0x0000502A ),
  EW_GLYPH( 0x00E4, 0, -7, 5, 7, 5, 0x000050EA ),
  EW_GLYPH( 0x00E5, 0, -8, 5, 8, 5, 0x00005189 ),
  EW_GLYPH( 0x00E6, 0, -5, 8, 5, 8, 0x00005229 ),
  EW_GLYPH( 0x00E7, 0, -5, 5, 8, 5, 0x000052F0 ),
  EW_GLYPH( 0x00E8, 0, -8, 5, 8, 5, 0x00005390 ),
  EW_GLYPH( 0x00E9, 0, -8, 5, 8, 5, 0x00005438 ),
  EW_GLYPH( 0x00EA, 0, -8, 5, 8, 5, 0x000054E2 ),
  EW_GLYPH( 0x00EB, 0, -7, 5, 7, 5, 0x0000559A ),
  EW_GLYPH( 0x00EC, -1, -8, 3, 8, 2, 0x00005641 ),
  EW_GLYPH( 0x00ED, 0, -8, 3, 8, 2, 0x0000567A ),
  EW_GLYPH( 0x00EE, -1, -8, 4, 8, 2, 0x000056B5 ),
  EW_GLYPH( 0x00EF, -1, -7, 4, 7, 2, 0x00005706 ),
  EW_GLYPH( 0x00F0, 0, -8, 6, 8, 6, 0x00005747 ),
  EW_GLYPH( 0x00F1, 0, -9, 6, 9, 6, 0x0000580B ),
  EW_GLYPH( 0x00F2, 0, -8, 6, 8, 6, 0x000058A3 ),
  EW_GLYPH( 0x00F3, 0, -8, 6, 8, 6, 0x00005967 ),
  EW_GLYPH( 0x00F4, 0, -8, 6, 8, 6, 0x00005A2D ),
  EW_GLYPH( 0x00F5, 0, -9, 6, 9, 6, 0x00005B01 ),
  EW_GLYPH( 0x00F6, 0, -7, 6, 7, 6, 0x00005BE6 ),
  EW_GLYPH( 0x00F7, 0, -7, 6, 7, 6, 0x00005CA8 ),
  EW_GLYPH( 0x00F8, 0, -6, 6, 7, 6, 0x00005D24 ),
  EW_GLYPH( 0x00F9, 0, -8, 5, 8, 6, 0x00005DDD ),
  EW_GLYPH( 0x00FA, 0, -8, 5, 8, 6, 0x00005E45 ),
  EW_GLYPH( 0x00FB, 0, -8, 5, 8, 6, 0x00005EAF ),
  EW_GLYPH( 0x00FC, 0, -7, 5, 7, 6, 0x00005F27 ),
  EW_GLYPH( 0x00FD, 0, -8, 5, 10, 5, 0x00005F8E ),
  EW_GLYPH( 0x00FE, 0, -8, 6, 10, 6, 0x0000603B ),
  EW_GLYPH( 0x00FF, 0, -7, 5, 9, 5, 0x000060EA ),

  EW_FONT_PIXEL( ClimateMediumFont, 0x00006194 )                /* ratio 85.94 % */
    0xB9EFBDDF, 0x2C72BFE7, 0x39584411, 0x9FE7B9D6, 0x5F8801BF, 0x15E79EFE, 0x9E79E0AC,
    0x2FFAFF87, 0xDFD7FD77, 0xCFB9F79D, 0x9F79F79D, 0x5EFDF7DF, 0x8027FD7B, 0xFFEFD035,
    0x8B767511, 0xFB787918, 0x69DFA93F, 0x9C7927CF, 0xFF7BE3FB, 0x89FFFE53, 0x1E35EDE7,
    0x7BF3DBCF, 0x35FFFFE4, 0x259F7FCC, 0xC5FCF2A2, 0x9E6FE792, 0xFEEFC0FF, 0x83F7350A,
    0xCF4C9EF3, 0x88DAB7BD, 0xE39AEFE8, 0x21AC799C, 0xF84F30E8, 0x04AC9CA6, 0xDF139256,
    0x69589E64, 0xF19762BE, 0x693C24F7, 0x2F5AEDFC, 0xD39EB163, 0x88FD7F9E, 0x3D6FCA6F,
    0xE003D008, 0xF1DF73BD, 0x00EFB9DE, 0xD6780DF8, 0x97DFF9FF, 0xE65E23F1, 0xE6C61EC7,
    0xFCF4C87B, 0xF9EF0BB9, 0xDE73C8D7, 0x09090DB9, 0xA8C467F3, 0x3B78DA73, 0x06DF115E,
    0xFF3BE000, 0x6D39C732, 0xE2225CB5, 0xF275F17B, 0xF679E0F5, 0xFE77C3BD, 0x7739C735,
    0xFB8856BE, 0xCFFEE2BD, 0xB9E5616A, 0x0583F62F, 0x1BA1FFF1, 0xBAEF1223, 0xBDDF3DFD,
    0x7BBE3DFD, 0x4BDEF32F, 0xFEE4CFFC, 0x9CA42FF7, 0x66623B99, 0x85FDEEFE, 0x9DF04EF8,
    0xCF7AC613, 0x9BBDAE63, 0x3D633911, 0x77F23391, 0xF7BDEBEF, 0x7BDEF1DE, 0xD85D606B,
    0xDF87F585, 0x7BC1FCC4, 0x39E465FE, 0xDC64B02D, 0x5FFDCADD, 0x9C730839, 0x3B3DE3FB,
    0x37DE719F, 0xABC9E7AF, 0xDF49EE3C, 0xADB59FC9, 0xC60FE5FC, 0x83F97F2F, 0xC61FFD67,
    0xFDFBF55B, 0xDFBEA04A, 0xF7BDC6AF, 0xFFBDEE3F, 0xD7FDEF71, 0x7D5FA83B, 0xBEAFD413,
    0xEA7EFB99, 0x61F351BD, 0x30D3FDF2, 0x07C61F19, 0x0DE7BBF5, 0xECF7DB9E, 0xE75BF38F,
    0x7F51FF5F, 0x3C554B7D, 0xD60462A3, 0xF58D4B12, 0xFF3FFAAF, 0x7FD6395B, 0xEF97FF7F,
    0xFA82FBEE, 0x4206B383, 0x0727987F, 0xA67DDFBE, 0xDFCF7BAA, 0xEE2308F9, 0x9EEA3F3D,
    0xBA86309C, 0xDEEA3E77, 0xDEEA035F, 0x777DA9FD, 0xF7DEF78A, 0x979E1AA8, 0x47838783,
    0x78AF50D5, 0xDC47BDCF, 0x37BA9A7B, 0x41F7E217, 0x7E224424, 0x5737BA9F, 0x50EF7BDC,
    0xA801DEF7, 0xBDD4FF7B, 0xF7BA807F, 0xBDEF713E, 0x077BDD43, 0x51FDEEA0, 0x8000FEF7,
    0xC43DDFFA, 0x555F6E7B, 0x758E5D43, 0x6EB1C477, 0xD3812AAA, 0x7E22FF77, 0xA0000778,
    0xBA93BDEE, 0x40004EF7, 0xE30001FC, 0xF8080007, 0xDDFD154D, 0x5FA3F1DD, 0xF9E2F998,
    0x01BF987F, 0xE33078EE, 0x1EE2137B, 0x000003F1, 0x7BDD4000, 0xFAC0EE23, 0xE63F0FCB,
    0x2DF0AA13, 0x52FCC3F7, 0xF05EF3C2, 0x83FC62CD, 0x607E30DF, 0x0DEF8145, 0xCC0FDF88,
    0xB187C078, 0x73886FEF, 0x86AA3DEF, 0xE0C1C35A, 0xB52AA860, 0xF7BE9C46, 0xBFBDEE78,
    0x37FDEF34, 0x6FFBDE60, 0x025FDEF3, 0x6FEFB180, 0x3DEF7388, 0xC35A86AA, 0xA860E0C1,
    0x388D6A1A, 0xD8CD7EF7, 0x8C06FFF7, 0xF3DEE31D, 0x98CF750B, 0x9737BA80, 0xE780DFBA,
    0x9F5B7849, 0x8F71AAF3, 0xD77A56B9, 0x88DE7DB8, 0x7AD6BBF1, 0xB8CEE223, 0xBDDFDF27,
    0xB77EFEF7, 0x0000FEFB, 0xE1F78000, 0x08000179, 0xCEF72E70, 0x9DCE4E71, 0xE1EFDFE4,
    0xBF1FCCF9, 0x15C8E629, 0xF077DFDC, 0x0F503D54, 0xD730E1FA, 0xB946AFFF, 0xB7FFCAA3,
    0x1CE4153D, 0x7299A8B1, 0xBFBFFE0E, 0x946A6DFD, 0x58FCF2CA, 0x7E4F13EF, 0x2FBF5FAF,
    0x9E22ACF1, 0xD7F5F0F5, 0xDF89E331, 0xB7CC9DEF, 0xBE3AFC7F, 0xBEB0BEB9, 0x07EFC2DF,
    0xEF7BAC00, 0x33DEEB5D, 0xBC1BBE26, 0x2633C1FF, 0x8DF87EF9, 0xEE3BEF7B, 0x00001732,
    0xF83BD730, 0xDF83C63E, 0xE0843CC3, 0xFDDF9E4C, 0xA5C0005F, 0xBDE18C5B, 0xEF7BDD77,
    0xF2299F9A, 0xBECC7777, 0xCBBDD735, 0xFFE5DDF7, 0x0FC6E33B, 0xA7DAC000, 0x61A9FF89,
    0x44669A86, 0x35BFF14D, 0xCAE7777C, 0xA9F9DFDB, 0x56B53F3E, 0x17E07EDE, 0x3D9D6000,
    0x59FEEFE5, 0x08AAC115, 0xF8FF77F2, 0x3FF5CECE, 0xFDF76FEF, 0xDF3DF472, 0xB1FB3FFB,
    0xD277C64E, 0xA9DFD4E4, 0xCEB0003F, 0xEEFE47FE, 0x6227AC3F, 0x92C44F59, 0xC60FFBBF,
    0xF73EC239, 0xF8000FE7, 0x6F78D7DD, 0x001348C5, 0x2CF5CD73, 0xD39A7300, 0xC6E0005A,
    0x00BCF59A, 0xF83DF800, 0x273587DD, 0xDE3039D6, 0x800178CF, 0x7FA7FFB1, 0xAF7FC3F7,
    0x692D33BE, 0x40000158, 0xC97DDFEC, 0x091856F7, 0x59CEB000, 0xDFDEEFC6, 0xDF88BF98,
    0xDF88BF9C, 0x7F7BBF1C, 0x34FBFE23, 0x5695BFF1, 0xA22B2D44, 0x5FDFF896, 0x802CFB9A,
    0xA31FFB3E, 0x8BF99FEE, 0x1822FE60, 0xAC1FFBBF, 0xFD6007B3, 0x01FC718E, 0x28BFBBF1,
    0xEECF3CFB, 0xDF7F335E, 0xFBFB9D6F, 0xFA9C4FC4, 0x801FA9C5, 0xF1F8BF58, 0x2394C007,
    0x9E5D1EEA, 0x65FB8EFE, 0xF7FFA444, 0xB3D33E67, 0xB53D65AC, 0x615DB7FD, 0xFB0873FC,
    0x4F3777D6, 0xF98F118C, 0x7A399EFA, 0x78FD7A3C, 0xC6B1CDBB, 0xDFD3D3D3, 0xAE52F9DF,
    0x2B1F3FF4, 0xBAC2A317, 0xBBDEEB2F, 0x92D7FDD6, 0x17CE27EF, 0x1AFB9C7A, 0x81CCDD1F,
    0x0FD87FF0, 0x0F3C0821, 0x005E2BBF, 0x97E837C0, 0xF3C4C411, 0x0662D9E7, 0x7CD39278,
    0x1E6675A7, 0x35CD7327, 0x208603D7, 0xDCBF1360, 0xDFDBEEF9, 0x478F5478, 0x7EDF77AD,
    0xD93B97E2, 0xFA3F7DC8, 0xD1E259BB, 0x58FF6AB5, 0xB090FF73, 0x02FBDF6A, 0xFDDDFBEA,
    0xDEF75ACD, 0xE329EAB5, 0x4B33C02B, 0xF759EBBD, 0x58B5AAF6, 0xBD88ED6B, 0x7AFBEFBC,
    0x9FFE73FE, 0x7DEFBEE7, 0x9F7DDB9E, 0x67DF76E7, 0xC778C0BC, 0xDA73DE0B, 0x3519CE33,
    0xE2BF13E7, 0xBEFC5FDC, 0xFBF319DF, 0xF8D477EF, 0xEDF2BB9D, 0x3CDF2B9C, 0xAAB98C67,
    0x1BCE7BC5, 0xFD9CFB7C, 0x389CEBA9, 0xCF739E35, 0xB9D46353, 0xC751A9E7, 0xB7CA7139,
    0xFC9FD9CF, 0xEFCE33FF, 0x1857FF59, 0xB93E67CC, 0xEE407ED7, 0xDEE79FB5, 0x6EF73EFB,
    0xF78AFBFF, 0xF6F8379C, 0xDCF3FB39, 0x2A75FFBC, 0x8A9FBB1F, 0xA8DFEC7C, 0x13DE6E78,
    0x9CFB7CA7, 0xBDEE79FD, 0xEA9FFF11, 0x7823D511, 0x9E775803, 0x973CEEBB, 0xDEF73C37,
    0x33FFF8DF, 0x7FF44577, 0xC6B7F33C, 0x47318FF9, 0xF38D77E8, 0xACCABF2D, 0x000FF3F8,
    0xEE062230, 0xFFF38C1E, 0x373BE007, 0xF85C13D6, 0x24EEC605, 0xFEFE04D7, 0xB47FCCE6,
    0xA31FE3D9, 0x995F7BC1, 0xDE640337, 0x32C6B18C, 0x38C0338E, 0xF01EB0CE, 0xED3C2C7C,
    0xA7FF9049, 0x73A73CFE, 0xBBCFE64F, 0xEFD331EA, 0xE03D63D6, 0xDA7858F9, 0xF3FF2093,
    0xE9CF4FFF, 0x4FE615DC, 0xE9987FF4, 0x9CF5BF99, 0x08F3C07F, 0xF1ABE78B, 0xFF13EE24,
    0xFECE7BF8, 0xFCC4F6FD, 0x9987AAF5, 0x7F0F5BBF, 0xDF1FC3F8, 0xC927278F, 0x3F7759AA,
    0x00A607E6, 0x83FA805F, 0x7F4206B3, 0xBE072798, 0xAAA67DDF, 0xF9DFCF7B, 0x82BF0308,
    0x417C82CC, 0x0359C1FD, 0x93CC3FA1, 0x3EEFDF03, 0xE7BDD553, 0xC1847CEF, 0xEF380FF3,
    0xA82D5F84, 0x206B383F, 0x727987F4, 0x67DDFBE0, 0xFCF7BAAA, 0x00308F9D, 0xEA2F5FE2,
    0x7D4F033D, 0x9C1FD41F, 0xC3FA1035, 0xFDF0393C, 0xDD5533EE, 0x47CEFE7B, 0xC6AAE618,
    0x7F50D55C, 0xE840D670, 0xC0E4F30F, 0x54CFBBF7, 0x3BF9EF75, 0xACF0611F, 0x0AB3C002,
    0x1ACE0FEA, 0x9E61FD08, 0xF77EF81C, 0x3DEEAA99, 0x0C23E77F, 0xFDEF7388, 0x7BEADF83,
    0xBFF950FF, 0xDD6BD380, 0xBB9EB0BB, 0xDC8BBDE7, 0xBC13FEF7, 0xDEF75197, 0x14EEFB50,
    0x51EFBDEF, 0x072F3C35, 0xAA8F070F, 0x9EF15EA1, 0x7BF50F7B, 0x83FC897F, 0x4C1F9868,
    0xF7105F01, 0xBDD43BDE, 0xDEEA0077, 0x1FEF753F, 0x0FBDEEA0, 0x42CC857E, 0xF7BDC4BE,
    0x1DEF750E, 0x4FF7BA80, 0xA807FBDD, 0xF3C3EF7B, 0xE2779C0F, 0x7BDC4B57, 0xDEF750EF,
    0xFF7BA801, 0x807FBDD4, 0xE63EF7BA, 0x6AAE66AA, 0x43BDEF71, 0xA0077BDD, 0xF753FDEE,
    0xDEEA01FE, 0x14CFCCFB, 0x003F88BE, 0xB32AFC00, 0x007F15F2, 0xE1FE7800, 0x96AFD3BC,
    0x000003F8, 0xAE7AAB98, 0x0007F16A, 0xF3DEE000, 0x0F89EF22, 0x3BCFF2F4, 0x41DE7F88,
    0x9EF22F40, 0xBFC400F8, 0x067BD45E, 0xC63EFA9E, 0xE30DF83F, 0xF8145607, 0xFDF880DE,
    0x7C078CC0, 0x05303F30, 0xDF6302F8, 0xDEE710DF, 0xB50D547B, 0xC1C18386, 0x8D6A5550,
    0x81EF7D38, 0x4166415F, 0xFDF630BE, 0xBDEE710D, 0x6B50D547, 0x0C1C1838, 0x88D6A555,
    0x3C1EF7D3, 0x4EF380FF, 0xD8C2D5F8, 0xB9C437F7, 0x43551EF7, 0x7060E1AD, 0x5A955430,
    0x7BDF4E23, 0x5EBFC400, 0x9E067BD4, 0x7D8C3EFA, 0x7B9C437F, 0xD43551EF, 0x07060E1A,
    0x35A95543, 0x87BDF4E2, 0x5731AAB9, 0xBFBEC635, 0xF7BDCE21, 0x0D6A1AA8, 0xA1838307,
    0x711AD4AA, 0x5AA3DEFA, 0x69DFDD75, 0x1A77F750, 0xEEFB1844, 0x6FEFA71F, 0x538AAD45,
    0x08B74315, 0x3D446375, 0x3CAB59FF, 0xB7C3EDCF, 0x0FCC1EEF, 0x782F80A6, 0x00179E1F,
    0x72E70080, 0xE4E71CEF, 0x5990AFC4, 0xE1F797C8, 0x08000179, 0xCEF72E70, 0x9E4E4E71,
    0x13BCE07F, 0x87DE5ABF, 0x200005E7, 0x3BDCB9C0, 0xCD3939C7, 0xD55CCD55, 0x05E787DE,
    0xB9C02000, 0x39C73BDC, 0x642BF139, 0x9DE5F216, 0xFC7FB7CC, 0xBEB9BE3A, 0xC2DFBEB0,
    0xC40007EF, 0x4D3DD40F, 0xFE0A33DD, 0xDD43FE03, 0xD3DD4A33, 0xF18767BC, 0x243C5A9C,
    0xE0B3053C, 0x17690777, 0xE63DF9DF, 0x85F02987, 0xB31DDDFC, 0xEF75CD6F, 0xF9777DF2,
    0xF8B8CEFF, 0xBE459915, 0xCC7777F2, 0xBDD735BE, 0xE5DDF7CB, 0xF2E33BFF, 0x4EF383FC,
    0x77F2B57E, 0x35BECC77, 0xF7CBBDD7, 0x3BFFE5DD, 0xAFF102E3, 0x7867BD57, 0x77F2FBEA,
    0x35BECC77, 0xF7CBBDD7, 0x3BFFE5DD, 0xDAAB9AE3, 0xBBF9D55C, 0x9ADF663B, 0xFBE5DEEB,
    0x9DFFF2EE, 0x00AB3D71, 0xBBF92ACF, 0x9ADF663B, 0xFBE5DEEB, 0x9DFFF2EE, 0x7EFFC771,
    0xE70FF9EF, 0x73CF4E72, 0x7CF7799F, 0x7BCCFBDF, 0x3277DFFF, 0xBBBE59CE, 0xEFEDE573,
    0x9F9F54FC, 0x3F6F2B5A, 0xF24BF7BE, 0x87E6688F, 0xDF05F029, 0xE7FEB9D9, 0x5FBEEDFD,
    0x7BE7BE8E, 0xF83F67FF, 0xBE459915, 0xFAE7677C, 0xFBB7F79F, 0x9EFA397E, 0xFD9FFDEF,
    0x79C1FE78, 0x7C5ABF27, 0x9FFAE767, 0x7EFBB7F7, 0xEF9EFA39, 0x98FD9FFD, 0xD55CDAAB,
    0xFD73B3BE, 0x7DDBFBCF, 0xCF7D1CBF, 0x7ECFFEF7, 0x5F0A67E6, 0xF8002F18, 0x6BE56655,
    0xF3C000BC, 0x7E9DE70F, 0x00178CB5, 0x73D55CC0, 0x002F1B55, 0x931BEB00, 0xC40FFFF5,
    0x89F665FF, 0xCFFDDFCC, 0x9E290A88, 0xF6FCCA88, 0x5FE200EE, 0xC19EF52F, 0xEC47DF53,
    0xF7C97DDF, 0x00091856, 0x02983F30, 0x673AC0BE, 0x7F7BBF19, 0x7E22FE63, 0x7E22FE73,
    0xFDEEFC73, 0x990AFC0D, 0xCEB17C85, 0xDEEFC659, 0x88BF98DF, 0x88BF9CDF, 0x7BBF1CDF,
    0x1FE7837F, 0xAFC4EF38, 0x659CEB16, 0x8DFDEEFC, 0xCDF88BF9, 0xCDF88BF9, 0x37F7BBF1,
    0x4BD7F880, 0xD4F067BD, 0xB39D61F7, 0xBFBDDF8C, 0xBF117F31, 0xBF117F39, 0xFEF77E39,
    0x99AAB986, 0xCE759AAB, 0xFEF77E32, 0xFC45FCC6, 0xFC45FCE6, 0xFBDDF8E6, 0xC26B001B,
    0xEF7BAC9A, 0xF7BDD67D, 0x6B09AC3E, 0xE73AC502, 0xE73BBF18, 0xFCE7BF98, 0xD7FDFCE6,
    0x7759E39E, 0xC59CFB0F, 0xBE0530FC, 0x00FE3F10, 0xDD447298, 0xB322BF03, 0xF8FC57C8,
    0x11CA6003, 0x3FCF0F75, 0x57E4EF38, 0x03F8FC4B, 0x7511CA60, 0x9B55730F, 0xFC7E3AAB,
    0x88E53001, 0x22BF07BA, 0x9E97C8B3, 0xCEFEFE9E, 0xFFA57297, 0x18B958F9, 0x897DD615,
    0xB980001F, 0xF7FE22CF, 0xC2A22B4B, 0xFB10A88A, 0xCFFE697E, 0x6D55CC02, 0x3D3D6AAE,
    0x2F9DFDFD, 0xF3FF4AE5, 0x2A3172B1, 0x0002FBAC
EW_END_OF_FONT_RES( ClimateMediumFont )

/* Table with links to derived variants of the font resource : 'Climate::MediumFont' */
EW_RES_WITHOUT_VARIANTS( ClimateMediumFont )

/* Constant to define the spacing between the menu items. */
const XPoint ClimateSpacing = { 8, 12 };

/* Constant to define the size of a single menu item */
const XPoint ClimateMenuItemSize = { 96, 45 };

/* Initializer for the class 'Climate::DataItem' */
void ClimateDataItem__Init( ClimateDataItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->DescrText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->ValueText, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateDataItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000D );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const000D );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateSelectColor );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const000E );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const000F );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0010 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0011 );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const0014 );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->DescrText, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->DescrText, _Const0015 );
  ViewsText_OnSetWrapText( &_this->DescrText, 1 );
  ViewsText_OnSetAlignment( &_this->DescrText, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DescrText, EwLoadString( &_Const0016 ));
  ViewsText_OnSetColor( &_this->DescrText, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->ValueText, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->ValueText, _Const0017 );
  ViewsText_OnSetWrapText( &_this->ValueText, 1 );
  ViewsText_OnSetAlignment( &_this->ValueText, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ValueText, EwLoadString( &_Const0018 ));
  ViewsText_OnSetColor( &_this->ValueText, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->Image, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  );
  CoreRectView__OnSetBounds( &_this->Image, _Const0019 );
  _this->Unit = ClimateUnitTypeTemperature;
  _this->ValueColor = _Const001A;
  _this->MaxValue = 100;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DescrText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ClimateDataItem_enterLeaveSlot 
  );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ClimateDataItem_enterLeaveSlot 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ClimateDataItem_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ClimateDataItem_pressReleaseSlot 
  );
  ViewsText_OnSetFont( &_this->DescrText, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->ValueText, EwLoadResource( &ClimateLargeFont, ResourcesFont 
  ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ClimateEdge, ResourcesBitmap 
  ));
}

/* Re-Initializer for the class 'Climate::DataItem' */
void ClimateDataItem__ReInit( ClimateDataItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->DescrText );
  ViewsText__ReInit( &_this->ValueText );
  ViewsImage__ReInit( &_this->Image );
}

/* Finalizer method for the class 'Climate::DataItem' */
void ClimateDataItem__Done( ClimateDataItem _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateDataItem );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->DescrText );
  ViewsText__Done( &_this->ValueText );
  ViewsImage__Done( &_this->Image );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::DataItem' */
void ClimateDataItem__Mark( ClimateDataItem _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->DescrText );
  EwMarkSlot( _this->OnChange );
  EwMarkObject( _this->NextDataItem );
  EwMarkObject( &_this->ValueText );
  EwMarkObject( &_this->Image );
  EwMarkRef( _this->DataPoint );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* 'C' function for method : 'Climate::DataItem.OnSetBounds()' */
void ClimateDataItem_OnSetBounds( ClimateDataItem _this, XRect value )
{
  CoreGroup_OnSetBounds((CoreGroup)_this, value );

  if ( _this->NextDataItem != 0 )
    CoreRectView__OnSetBounds( _this->NextDataItem, EwSetRectOrigin( _this->NextDataItem->Super2.Bounds, 
    EwNewPoint( _this->Super2.Bounds.Point2.X, _this->Super2.Bounds.Point1.Y )));
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateDataItem_UpdateLayout( ClimateDataItem _this, XPoint aSize )
{
  XInt32 y;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  y = ( aSize.Y * 3 ) / 5;
  CoreRectView__OnSetBounds( &_this->ValueText, EwNewRect( ClimateSpacing.X, 0, 
  aSize.X, y ));
  CoreRectView__OnSetBounds( &_this->DescrText, EwNewRect( ClimateSpacing.X, y, 
  aSize.X, aSize.Y ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateDataItem_UpdateViewState( ClimateDataItem _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBorderColor );
  else
    ViewsRectangle_OnSetColor( &_this->Background, ClimateSelectColor );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateDataItem_enterLeaveSlot( ClimateDataItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateDataItem_pressReleaseSlot( ClimateDataItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    EwSignal( _this->OnChange, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Climate::DataItem.OnSetCaption()' */
void ClimateDataItem_OnSetCaption( ClimateDataItem _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->DescrText, value );
}

/* 'C' function for method : 'Climate::DataItem.OnSetUnit()' */
void ClimateDataItem_OnSetUnit( ClimateDataItem _this, XEnum value )
{
  _this->Unit = value;
  EwPostSignal( EwNewSlot( _this, ClimateDataItem_onUpdate ), ((XObject)_this ));
}

/* 'C' function for method : 'Climate::DataItem.OnSetValueColor()' */
void ClimateDataItem_OnSetValueColor( ClimateDataItem _this, XColor value )
{
  if ( !EwCompColor( value, _this->ValueColor ))
    return;

  _this->ValueColor = value;
  ViewsText_OnSetColor( &_this->ValueText, value );
}

/* 'C' function for method : 'Climate::DataItem.OnSetDataPoint()' */
void ClimateDataItem_OnSetDataPoint( ClimateDataItem _this, XRef value )
{
  if ( !EwCompRef( value, _this->DataPoint ))
    return;

  if ( _this->DataPoint.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, ClimateDataItem_onUpdate ), _this->DataPoint, 
      0 );

  _this->DataPoint = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, ClimateDataItem_onUpdate ), value, 0 
      );

  EwPostSignal( EwNewSlot( _this, ClimateDataItem_onUpdate ), ((XObject)_this ));
}

/* Slot method to update the display value. */
void ClimateDataItem_onUpdate( ClimateDataItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->DataPoint.Object != 0 )
    switch ( _this->Unit )
    {
      case ClimateUnitTypeTime :
      {
        XInt32 h = EwOnGetInt32( _this->DataPoint ) / 60;
        XInt32 m = EwOnGetInt32( _this->DataPoint ) - ( h * 60 );
        ViewsText_OnSetString( &_this->ValueText, EwConcatString( EwConcatString( 
        EwConcatString( EwNewStringInt( h, 0, 10 ), EwLoadString( &_Const001B )), 
        EwNewStringInt( m, 2, 10 )), EwLoadString( &_Const001C )));
      }
      break;

      case ClimateUnitTypeTemperature :
      {
        ViewsText_OnSetString( &_this->ValueText, EwConcatString( EwNewStringInt( 
        EwOnGetInt32( _this->DataPoint ), 0, 10 ), EwLoadString( &_Const001D )));
      }
      break;

      case ClimateUnitTypePercent :
      {
        ViewsText_OnSetString( &_this->ValueText, EwConcatString( EwNewStringInt( 
        EwOnGetInt32( _this->DataPoint ), 0, 10 ), EwLoadString( &_Const001E )));
      }
      break;

      default : 
        ;
    }
  else
    ViewsText_OnSetString( &_this->ValueText, EwLoadString( &_Const001F ));
}

/* Slot method to trigger the next phase of the auto demo. */
void ClimateDataItem_AutoDemo( ClimateDataItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwSignal( _this->OnChange, ((XObject)_this ));
}

/* Variants derived from the class : 'Climate::DataItem' */
EW_DEFINE_CLASS_VARIANTS( ClimateDataItem )
EW_END_OF_CLASS_VARIANTS( ClimateDataItem )

/* Virtual Method Table (VMT) for the class : 'Climate::DataItem' */
EW_DEFINE_CLASS( ClimateDataItem, CoreGroup, "Climate::DataItem" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  ClimateDataItem_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateDataItem_UpdateLayout,
  ClimateDataItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateDataItem )

/* This is a font resource. */
EW_DEFINE_FONT_RES( ClimateLargeFont, 25, 7, 0, 16, 0x0001, 0x0042 )
  EW_GLYPH( 0x0001, 1, -19, 10, 19, 12, 0x00000000 ),
  EW_GLYPH( 0x0025, 1, -19, 18, 19, 20, 0x0000022B ),           /* '%' */
  EW_GLYPH( 0x0030, 1, -19, 13, 19, 15, 0x000005F5 ),           /* '0' */
  EW_GLYPH( 0x0031, 2, -19, 8, 19, 15, 0x00000859 ),            /* '1' */
  EW_GLYPH( 0x0032, 1, -19, 13, 19, 15, 0x00000951 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -19, 13, 19, 15, 0x00000C16 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -19, 15, 19, 15, 0x00000F0E ),           /* '4' */
  EW_GLYPH( 0x0035, 2, -19, 12, 19, 15, 0x00001184 ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -19, 13, 19, 15, 0x0000143D ),           /* '6' */
  EW_GLYPH( 0x0037, 1, -19, 13, 19, 15, 0x0000170A ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -19, 13, 19, 15, 0x00001962 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -19, 13, 19, 15, 0x00001CA1 ),           /* '9' */
  EW_GLYPH( 0x003A, 1, -15, 4, 15, 6, 0x00001F8D ),             /* ':' */
  EW_GLYPH( 0x0041, 0, -19, 17, 19, 17, 0x00001FF5 ),           /* 'A' */
  EW_GLYPH( 0x0042, 2, -19, 14, 19, 17, 0x00002315 ),           /* 'B' */
  EW_GLYPH( 0x0043, 2, -19, 15, 19, 18, 0x00002608 ),           /* 'C' */
  EW_GLYPH( 0x0044, 2, -19, 15, 19, 18, 0x000028E6 ),           /* 'D' */
  EW_GLYPH( 0x0045, 2, -19, 13, 19, 15, 0x00002B65 ),           /* 'E' */
  EW_GLYPH( 0x0046, 2, -19, 13, 19, 15, 0x00002DE4 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -19, 15, 19, 18, 0x00002FFA ),           /* 'G' */
  EW_GLYPH( 0x0048, 2, -19, 15, 19, 19, 0x0000331B ),           /* 'H' */
  EW_GLYPH( 0x0049, 2, -19, 3, 19, 7, 0x000034E4 ),             /* 'I' */
  EW_GLYPH( 0x004A, 1, -19, 12, 19, 15, 0x0000352A ),           /* 'J' */
  EW_GLYPH( 0x004B, 2, -19, 15, 19, 17, 0x000036AC ),           /* 'K' */
  EW_GLYPH( 0x004C, 2, -19, 12, 19, 14, 0x00003922 ),           /* 'L' */
  EW_GLYPH( 0x004D, 2, -19, 19, 19, 23, 0x00003A73 ),           /* 'M' */
  EW_GLYPH( 0x004E, 2, -19, 15, 19, 19, 0x00003D76 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -19, 16, 19, 18, 0x00003F83 ),           /* 'O' */
  EW_GLYPH( 0x0050, 2, -19, 14, 19, 17, 0x00004267 ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -19, 16, 23, 18, 0x000044D8 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 2, -19, 14, 19, 17, 0x0000484A ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -19, 14, 19, 16, 0x00004AEA ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -19, 16, 19, 16, 0x00004E43 ),           /* 'T' */
  EW_GLYPH( 0x0055, 2, -19, 14, 19, 18, 0x00005046 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -19, 17, 19, 17, 0x00005214 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -19, 24, 19, 24, 0x000054F1 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -19, 16, 19, 17, 0x00005942 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -19, 16, 19, 16, 0x00005C70 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -19, 14, 19, 16, 0x00005EB5 ),           /* 'Z' */
  EW_GLYPH( 0x0061, 1, -14, 12, 14, 14, 0x000061BF ),           /* 'a' */
  EW_GLYPH( 0x0062, 2, -20, 12, 20, 15, 0x000063FE ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -14, 12, 14, 14, 0x0000661F ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -20, 12, 20, 15, 0x00006823 ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -14, 12, 14, 14, 0x00006A49 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -21, 10, 21, 9, 0x00006CC8 ),            /* 'f' */
  EW_GLYPH( 0x0067, 1, -14, 12, 19, 15, 0x00006E51 ),           /* 'g' */
  EW_GLYPH( 0x0068, 2, -20, 11, 20, 15, 0x00007109 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -20, 4, 20, 6, 0x00007291 ),             /* 'i' */
  EW_GLYPH( 0x006A, -2, -20, 6, 25, 6, 0x00007307 ),            /* 'j' */
  EW_GLYPH( 0x006B, 2, -21, 12, 21, 13, 0x00007406 ),           /* 'k' */
  EW_GLYPH( 0x006C, 2, -21, 2, 21, 6, 0x00007600 ),             /* 'l' */
  EW_GLYPH( 0x006D, 2, -14, 20, 14, 24, 0x00007636 ),           /* 'm' */
  EW_GLYPH( 0x006E, 2, -14, 11, 14, 15, 0x00007870 ),           /* 'n' */
  EW_GLYPH( 0x006F, 1, -14, 13, 14, 15, 0x000079B4 ),           /* 'o' */
  EW_GLYPH( 0x0070, 2, -14, 12, 19, 15, 0x00007BE7 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -14, 12, 19, 15, 0x00007E0F ),           /* 'q' */
  EW_GLYPH( 0x0072, 2, -14, 7, 14, 9, 0x0000804E ),             /* 'r' */
  EW_GLYPH( 0x0073, 1, -14, 12, 14, 14, 0x00008107 ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -18, 8, 18, 9, 0x00008356 ),             /* 't' */
  EW_GLYPH( 0x0075, 2, -14, 11, 14, 15, 0x00008482 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -14, 13, 14, 13, 0x000085A9 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -14, 20, 14, 20, 0x0000877E ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -14, 13, 14, 13, 0x00008A83 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -14, 13, 19, 13, 0x00008C9A ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -14, 12, 14, 13, 0x00008F05 ),           /* 'z' */
  EW_GLYPH( 0x00B0, 1, -19, 8, 7, 10, 0x0000912E ),

  EW_FONT_PIXEL( ClimateLargeFont, 0x0000920F )                 /* ratio 61.27 % */
    0xBDEF7BBF, 0xBCD7DEF7, 0x8B7BDEF7, 0xCCFEA03B, 0x4885FE0F, 0x3EF819C6, 0x221909BE,
    0xFBE7FC02, 0x04CFF501, 0x37B00DEC, 0xC099FEA0, 0xC81FBE7F, 0x7DF01110, 0x1922137C,
    0xF83F3067, 0xFD407717, 0x7BDEF799, 0xE73DE16F, 0x97E00037, 0x03FFBDFF, 0x91BE7A80,
    0x3F185EAB, 0x2EE04F18, 0x900E1BB8, 0x201C1658, 0xF182F7C8, 0xE6717604, 0x237CF500,
    0x68AD7AD7, 0xFFFC6FC0, 0x3DF23FFB, 0xDFDCFA00, 0x0001AEF0, 0xBF1AF9CC, 0x4400DE73,
    0xF63FF2BF, 0x6F80FF3F, 0x8E755F95, 0x99E03C5F, 0x7F586D4D, 0x181BDF88, 0x557E0230,
    0x22046030, 0xEA1B507E, 0xFC05F88F, 0xF2FC73AA, 0x63FF2001, 0xE30FF3FF, 0x037CF73B,
    0xEBFB3DCC, 0xCF4627B9, 0xE7B99F3D, 0x0BC7783B, 0x07A97CDE, 0x7F1194F0, 0x4D318EC0,
    0x480132C0, 0x00000000, 0x020C0000, 0xC04CB040, 0xC06C4734, 0x805A863F, 0x781F68A7,
    0xF6BB25F3, 0xEF9EE67C, 0xDFCFFCC0, 0x604F73D7, 0xEF3C3FF4, 0xBF7A4FD9, 0x9DF1F3EC,
    0x008C0CDF, 0x00000000, 0x00000000, 0x00000000, 0xFCF00000, 0x057FFDCE, 0xF7F45F7E,
    0x7DE35FCD, 0xD67CDF7E, 0xF9C9567E, 0x28E2F816, 0x2A2CF013, 0x01FCC200, 0x278007CC,
    0xCFD1003F, 0x03F3F000, 0x600275D0, 0x7800DFAD, 0xEA007DFA, 0xF8C026B7, 0xA9E40356,
    0xFCEE2017, 0x7EC7FC00, 0x9E79E79E, 0xD118A9E7, 0xDF7DF7DF, 0x9E2F7DF7, 0xAFFFB9DF,
    0xFE8BEFC0, 0xBC6BF17E, 0xCF9BEFCF, 0x7255ADFC, 0xAF3A05BE, 0x78F500A5, 0x020800CE,
    0x4F000720, 0x7FA300BD, 0xBDEF01EB, 0xF81AFE7B, 0x7E7DEFBE, 0x99E78C0D, 0x017CFFBF,
    0x1CCCEF18, 0xFEFD6500, 0x028EC400, 0x378CF994, 0x749F78C1, 0x99F3BF62, 0xC8F9FFEF,
    0xE75FD9DD, 0xBE8007EF, 0x0263000B, 0x4000FB80, 0xCC600367, 0x3EE0025F, 0x3F3A000F,
    0x01D98C00, 0x004CFB80, 0x90017CAC, 0xCE00276F, 0xF2B00133, 0xF1BC4005, 0x7BDEF7BF,
    0x7E2BBDF4, 0xDF7DF7DF, 0xEF9EBDF7, 0xF3CF3C7B, 0x2CF3CF3C, 0x0049E7FF, 0x00000000,
    0xEF7BDC60, 0xC7DEF7BD, 0xBBBBBAB2, 0x5AEF497B, 0x52B5AD6B, 0x03380044, 0xAC009C80,
    0xDAC72000, 0xC40EEEE7, 0xE7B7BFDC, 0xFEDF83DC, 0xFFBEB5AD, 0xE300D438, 0x13C01397,
    0x3227801B, 0xF00BE801, 0x8C01CDC4, 0x80DE4FD8, 0xD89D39B8, 0xE76B3CFD, 0xBEA7EC61,
    0x01DCF7EF, 0x6FFDFAC4, 0xF1BEEB00, 0x5EBE017D, 0x980F5BF7, 0x8801BF4F, 0x1980167E,
    0x04AEC00D, 0x3ED619E0, 0xFC323777, 0x7DEFDFBF, 0x3D610EE6, 0xF7CCF5FF, 0x069E1F9F,
    0x05C1ADE3, 0x3840054C, 0x1B990001, 0x0567AE10, 0xFC779530, 0x299DEA03, 0x9E7EDC6E,
    0xE45E7BF7, 0xB2FDF59E, 0xEF7BDC7F, 0x7BDEF7BD, 0xDF7DFBEF, 0xF7DF7DF7, 0xCF3F6D7D,
    0xF3CF3CF3, 0x07CDCF3C, 0x001FCC40, 0x9DE004D3, 0x002F4C00, 0x9E0015BF, 0x56F001FC,
    0x0171A802, 0x8C00A3B8, 0xF378017A, 0x07CF9001, 0x80162FC0, 0xE9801358, 0x04ADE003,
    0x9EE77EA0, 0xA7F7815F, 0x17BF5EBF, 0x7CDFAE73, 0xF2735EE6, 0x7E3D068D, 0x32FC028C,
    0xF22005C2, 0xBE11380F, 0x97AC601A, 0x8867FCF5, 0x7E167FF9, 0xBCF73DF3, 0x7CEF07F3,
    0x667DEFDE, 0x37FFABE3, 0x9FFDF99F, 0x807A7A9F, 0x3DB3D6F1, 0x8007F280, 0x70C02BF8,
    0xC4137C9F, 0xEFD8E9CD, 0xE37BE67C, 0xF66FFE30, 0x1FFBCFD7, 0xDDCEFCF0, 0xA2FDE01D,
    0x60779ABF, 0x4F9BF7CD, 0x7887FCDF, 0xF1B884E7, 0x5180F8AA, 0xC00C7F8F, 0x900188CE,
    0x8DC000D2, 0x7C560C04, 0xD6B11F80, 0xBC23F103, 0xE9F37DF5, 0xDF833F1B, 0xF8DFDF3B,
    0x7303277D, 0x547BF3DF, 0x07C63001, 0x800D6E20, 0x3C0F8FF1, 0x3B5EF7B3, 0xECF5D7C0,
    0x0FFC005F, 0x007FD831, 0xE0000000, 0xB001887F, 0x7C0003EE, 0x5CA8000E, 0x46700095,
    0xA88007C7, 0xB0007CCF, 0x002CBF2C, 0x1C630ABE, 0x7C1C6300, 0x2CBF0015, 0x7E600B2C,
    0x9E01F510, 0x0319C078, 0xF2A09538, 0xDEEAA207, 0x39BDEF7B, 0xFBEF8CC1, 0xBEFBEFBE,
    0xEAF81E37, 0x79E79E79, 0x838E679E, 0x57E003CA, 0xC00A3FC1, 0x800B5934, 0x0F8CCFA8,
    0xB9EB2700, 0xCF7BDEF7, 0xEFE8056F, 0xDE37BEFB, 0xE79EA03B, 0xC7B7D679, 0x3E764001,
    0x007F2800, 0x70C00084, 0x00B1D001, 0x02F9EFD4, 0xEF7BDEFB, 0xF417F9EF, 0xF7DF7DF7,
    0x9EA1BB3E, 0xF99E79E7, 0xC002E6FB, 0xD8005EB3, 0x00000031, 0xCC0018DC, 0xE79EA167,
    0xDFB59E79, 0xF7DFD17A, 0xBF37DF7D, 0xB9F6B01F, 0x3A8137E7, 0xEBDFD3EF, 0x3DF189DD,
    0xFACF9DF7, 0xE3B838ED, 0xB1DE300B, 0x5003A33C, 0x00F1B9F5, 0x01EB99D8, 0x04CCEE60,
    0x00000620, 0x00000000, 0x2004C800, 0x3000F586, 0x0078DE77, 0x1B27CCEC, 0x19C7D460,
    0x8CE300BF, 0xFB9EF8C5, 0xFF7D67CE, 0xF7DD43F8, 0xDBF3EFE9, 0xDEF7BAC1, 0x003BF77B,
    0x5BDF7DFD, 0xD402FECF, 0xF7B33CF3, 0xC000FF57, 0x001FCFF3, 0x00067E8C, 0x4000F8CC,
    0x27F80015, 0x00002000, 0x20000000, 0x009FE000, 0x56000AA0, 0xEF18007C, 0xFE780033,
    0x9E7A83F9, 0xD5FDE9E7, 0xEFBFA03F, 0x5FD9EAFB, 0xDEF7BDE0, 0xF7BDEF7B, 0xFBEFBE0E,
    0xBEFBEFBE, 0xE79E792F, 0x79E79E79, 0x0000009E, 0x00000000, 0xB8000000, 0xEF7BDEF7,
    0xDF7DF0BD, 0xF7DF7DF7, 0xCF3CF3C1, 0x03CF3CF3, 0x00000000, 0x00000000, 0x9E79E79E,
    0x279E79E7, 0xFBEFBEF9, 0xBEFBEFBE, 0xEF7BDEF5, 0x7BDEF7BD, 0xFBEFBE1F, 0xBEFBEFBE,
    0xCF3CF16F, 0xF3CF3CF3, 0x0000093C, 0x00000000, 0xEF7B8000, 0x0BDEF7BD, 0xDF7DF7DF,
    0x3C1F7DF7, 0xCF3CF3CF, 0x00003CF3, 0x00000000, 0x00000000, 0x40000000, 0xFFDEFBBE,
    0x576B00F7, 0xDF17DFBD, 0xFF5EAC0E, 0xFDFACF9E, 0xF9E8CFF2, 0xCB1BF502, 0x8CF00D1B,
    0xA0015A9F, 0x002E237F, 0x000196B5, 0x00000261, 0xEF77E000, 0x0986F7BD, 0x5F7DF7EE,
    0xF3D41299, 0xDCCA4F3C, 0x04A9E000, 0x005E3780, 0x02FD5F88, 0xDF3C1518, 0xCCF9DF73,
    0x78FE3BDE, 0xD7F4FBEE, 0x78F6FCF5, 0x0BEE002F, 0x00000000, 0x00000000, 0x00000000,
    0xBDC00000, 0xEF7BDEF7, 0xEFBE17BD, 0xFBEFBEFB, 0xE783EFBE, 0x79E79E79, 0x0079E79E,
    0x00000000, 0x00000000, 0x00000000, 0x0003EE30, 0x00000000, 0x5F700000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00558000, 0x4E9007BC, 0x2753E015, 0x46B3503E,
    0x33D7B3F5, 0xAC7E5FBF, 0x67AFBF3D, 0x005EF0EF, 0xE8009DEF, 0x7A004EF9, 0x5AC009AD,
    0x3D9801AB, 0x3EF9801B, 0xFBCF002F, 0xAFD4007C, 0xF3EA003E, 0x8CBE3001, 0x67FF001F,
    0xEA00D3F7, 0x00F5CD67, 0x37EB787C, 0x271BE000, 0x7C671000, 0xF57E3000, 0x73D3C002,
    0xBA7AC001, 0x5F1BE000, 0x000037BE, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xB0000000, 0x9E79E79E, 0xF79279E7, 0xFBEFBEFB, 0xEF79EFBE, 0xFBCC000F,
    0x7C0006A7, 0x5000F8C8, 0x05731923, 0xF88B2700, 0xE7C80262, 0x003E7C83, 0xB2704C5F,
    0x500AE600, 0xFC6602E3, 0xF0255F00, 0x7C660255, 0x60038C60, 0x43E6F04E, 0x444C5F02,
    0x7D64007D, 0xEE002698, 0x0015BE28, 0xFC9E3CA8, 0xE2AFC000, 0xA60001AD, 0xC0001C6F,
    0x00007CAA, 0xEFC01F3F, 0xE5F70016, 0x0BC60005, 0x002CE600, 0x0006F1E8, 0x8003F1DC,
    0x000F3EF1, 0x000BF1AC, 0x90007E38, 0x30003CFD, 0xF00017EB, 0xBB2000FA, 0xEACC0026,
    0x0BCF8004, 0x0135D100, 0x000D3E60, 0xFC40007E, 0xBDF77C80, 0xFF404DFB, 0xEAB7DEAB,
    0xF5AF40BF, 0xBFFB39EF, 0x356B51BA, 0x6E0D6BD0, 0x8B674036, 0x2A78007A, 0xED801B1E,
    0x4B002619, 0x01480032, 0xC0000000, 0x30C52000, 0xB1F25801, 0xA89ED801, 0xC2A78007,
    0xBCE806CD, 0xAC0D5AD4, 0xEBDD0B35, 0xBFF673DF, 0xBFD60BD7, 0xFEAB7DEA, 0x7BDEE78D,
    0xEFFFBDEF, 0xDF7DFD01, 0xFDF17DF7, 0x79E79EA0, 0x9EFBF59E, 0xFBCF000F, 0x0A3C000C,
    0x8000E900, 0x00394000, 0xF10058E8, 0xEC17F3FC, 0xE7BDEF7B, 0xFD07FF9B, 0xFDF7DF7D,
    0x3D406FCE, 0x153CF3CF, 0x00000000, 0x00000000, 0x90000000, 0xFDDEFFEF, 0xF5FFA026,
    0x5ED56FBC, 0xEFFD5DE0, 0x7B3FFB39, 0xA02F66A1, 0x2E6E0F67, 0x595E3780, 0x2CAB001F,
    0x951D8003, 0x00A6001E, 0x40000C00, 0x00020000, 0xC003D230, 0x6000CB14, 0x800FACAB,
    0x017370F5, 0xB352F1BC, 0x0D73D017, 0x3DFFABBC, 0x3757FF67, 0xEF3D7FE8, 0xF900A25B,
    0x3BDDEFFE, 0xC4000FFF, 0x80016FAE, 0x8001FD6F, 0xDEF7BCFE, 0x1DD9EF7B, 0xEFBEFBE0,
    0x82DE67EB, 0x679E79E7, 0x06F9F7BE, 0x0179F100, 0xF0005510, 0x11C0008F, 0xC002A800,
    0xBC6003CA, 0x7BDC1F3D, 0xDEBBBDEF, 0xFBEFBE17, 0x7827A5BE, 0xBA79E79E, 0xA3D0003A,
    0x1CE63001, 0x00BCE800, 0xE00163D0, 0xF00037A9, 0xFBBC61FA, 0x80F7FFDE, 0xDFBD5777,
    0xE82FDF17, 0xCF9EFFD9, 0x3F9EFDFA, 0xFD4059F3, 0x01B11CC6, 0x0021D89E, 0x25F1CDF4,
    0xB1DC7CC0, 0x3F630027, 0x009EF9EF, 0xF5AF6FE4, 0x8C04DF9D, 0xBE7BBFF7, 0xFAC6013B,
    0x000762FF, 0x007CF575, 0x1BFCF3E4, 0x07CFF100, 0xF8E6B3C0, 0xBCFC403D, 0x9EEDF5FE,
    0xF3EF7CCF, 0xA7EDF10D, 0x6F7CEBFA, 0xF7BDEE79, 0xBDEF7BDE, 0xBEB5DEF7, 0x6FBEFBEF,
    0xDF7DF7E4, 0x3CF93DF7, 0xCB3CF3CF, 0xF3CF3CF3, 0x00000024, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC00FEFC0, 0x000007FF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00100000, 0x10099FE0, 0xF007CA39,
    0x16B98DFA, 0xDE1CD6B0, 0xA79FBBD9, 0xEF17CF77, 0x7BEF9E7E, 0xEF32FD9E, 0xC4EF8003,
    0x54400B8C, 0x60015585, 0x0B1FE1C5, 0xCA8B3FC0, 0x81EB200F, 0xF1E0246F, 0x7C01E3C1,
    0x03EB2123, 0x3FC07E46, 0x0162F807, 0x2AB03E33, 0xC5416B00, 0xC1E2F801, 0x791802C9,
    0xF8007A89, 0x00F8AC2A, 0x57F96278, 0xCFF59002, 0xA9C003FA, 0x78002C5F, 0x80005662,
    0x36E200E5, 0x500377C0, 0x005189F7, 0xA94300A5, 0xD8C54011, 0x56C23D80, 0x02DFCEC0,
    0x1FC5453C, 0x8062AA78, 0x029E3F8A, 0x0591FF99, 0x011EC286, 0x81FA944F, 0x60A5023D,
    0xF011FF17, 0x88D88C14, 0x542C54DA, 0xCA14F06C, 0xA231B3C2, 0x8F60CEC0, 0x1FB0BFC0,
    0x07EB14A0, 0x81B3C515, 0x8288DB11, 0x00C55B1C, 0x00E5F954, 0x805118F5, 0xB015467F,
    0x5003F733, 0x8A81FC6A, 0x88C0367A, 0x5F500A37, 0x051A8014, 0x000C47B0, 0x0A5806DB,
    0xE0019DF8, 0x02E7C3BB, 0xF886B3D4, 0xCDE2068D, 0x01CCF3C6, 0xDF80E37E, 0x733CF0B8,
    0x13477880, 0x7A80D1BF, 0x0173F0D6, 0xE7CCF2FC, 0xCDE2001D, 0x54002C77, 0x666000FA,
    0xFD900074, 0x3800FDFC, 0x1E7DE37E, 0x617E3580, 0xE3005F8D, 0x1F1C1E7D, 0xF20FC770,
    0xDE3D09AD, 0x32746B00, 0xE38053D6, 0x200FE4E5, 0x2EF35ADF, 0x66BB9E00, 0x73A001BD,
    0x958068E9, 0x007398CD, 0x8E83D6F1, 0xF10BDA06, 0x99CE4156, 0x37868D60, 0x5263D01B,
    0xA7A803F5, 0xD004D743, 0x801A39DE, 0x00E7B39C, 0x000D0F40, 0x000008E6, 0x00000000,
    0x00000000, 0xDD600000, 0xF7BDEF7B, 0xFBEF7BDE, 0x7DF7DF7C, 0x5F7DF7DF, 0xCF3CF9D9,
    0xF3CF3CF3, 0x0079E7CC, 0xA003E3B8, 0xD6A001C7, 0x1DE2001A, 0x5C6FC00D, 0x1DE79E00,
    0x0B57E200, 0xC00BCF80, 0xD9004EAC, 0x8CE004CF, 0xDE3D001F, 0x2CE63000, 0x0178CE00,
    0xE79EB378, 0x79E79E79, 0xF329E79E, 0xFBEFBEFB, 0x3EFBEFBE, 0xBBBDF7B2, 0xF7EBB503,
    0xC877357D, 0x9E7AF6AF, 0x89E7E3DE, 0xD655C81F, 0x0044E00D, 0xE7DDE300, 0x7778DBDE,
    0x7BDEDF7E, 0x9BF7E6B2, 0xFC38C635, 0x011001EA, 0xE01AACD8, 0xDFFC7A2B, 0x4D67BE67,
    0xAFACF723, 0xD5FFFDF3, 0x000005FF, 0x00000000, 0x7F300000, 0xBE05EEE7, 0xB3BDFEDF,
    0xEBFE587F, 0xCD5BDF99, 0x267CC0F8, 0x00513805, 0xB840031E, 0x5D200000, 0x00F0CB00,
    0x82F1946E, 0xED54BCF9, 0xADEFCCF5, 0x7EFFF8C5, 0x0FF677BF, 0xFF73BF3C, 0x8BEF80EF,
    0x3FE7BEFE, 0xE6FBE7E9, 0x88F576B3, 0xF9F01EB9, 0xAF00FC56, 0xDEB0031B, 0x4000001C,
    0x246E000E, 0x0F8AD460, 0x59CC4F70, 0xEBABC7A0, 0xEE67CDF7, 0x2FBE0EF9, 0x7B3DFBFA,
    0x03FDE002, 0x00000000, 0xE6000000, 0xC137E7BE, 0x6FEF5DEF, 0x7AAC3EFF, 0x7F59F37F,
    0xF826B78B, 0x28038A86, 0x247002C3, 0x02380000, 0xA800F0C0, 0xF7878038, 0xAC1DE099,
    0xB3E6FDE7, 0x77BE1576, 0xEFDFBFBE, 0x73BE309F, 0xEF406FFF, 0x3BABEFE8, 0xCDFDEB58,
    0xE23CED67, 0xE4E2139D, 0x7203F19A, 0xE0267FEC, 0xDEF79199, 0x33BDEF7B, 0xBEFBEF8D,
    0xEFBEFBEF, 0x3CF3CF0B, 0xCF3CF3CF, 0x60011FF3, 0xDE200BC6, 0xB2EC40B5, 0x3CF9EF56,
    0xEF455DEF, 0xD97EFBF9, 0xF7FFA03F, 0xF59BF01F, 0xF54F02FD, 0x31D84CFB, 0x00003901,
    0x95BDC400, 0xF621DEF7, 0x1EF7B91E, 0x318CB18C, 0x00000000, 0x00000000, 0x00000000,
    0xF7300000, 0xFDE9BF3D, 0xFBD77BF3, 0x561FBFDB, 0xACF9BFBD, 0x9ADE2C7F, 0x0E2A1BE0,
    0xC00B0CA0, 0xE0000095, 0x04C3004A, 0x0F017150, 0x0EF04D6F, 0xE6FEF3D6, 0xE0F3F6B3,
    0xFBFBD77B, 0xB980F6FD, 0x064BD9EF, 0xFACA7880, 0x9E7CFC02, 0xD679FB75, 0xBFE52FAE,
    0x9EFBEFC7, 0x003FFE5D, 0x00000000, 0x8C000000, 0x1BFFDCEF, 0x5FD1FF98, 0xEFE61DAD,
    0xFDE7CEFF, 0x4077CA72, 0x30146D8D, 0x001805A7, 0x00000000, 0x00000000, 0xFFC00000,
    0x037B044F, 0x0003FBF0, 0x00000000, 0x1FCE0000, 0x037FC046, 0x007FFC00, 0x00000000,
    0x00000000, 0x99120000, 0xC6EB3C67, 0xFCEF7EB3, 0x00017DE7, 0x00000000, 0x00000000,
    0x27FEC400, 0x1371FE20, 0x04DC7FC8, 0xE409DAF2, 0x79007F8D, 0xDE401FE3, 0x7B9A800C,
    0x1BF1807C, 0x43C0BD5F, 0xD6009CF5, 0x3EF002EC, 0xC6F8025F, 0x3F271001, 0x00003FBF,
    0x5DC00000, 0xBBB9DF9E, 0xFF73BF51, 0xDEDF706F, 0xADAE77BF, 0x59EFECBF, 0xAFFCCC3B,
    0x7E3D7E67, 0xD3E77ECF, 0xC0F97CFF, 0xA3093A8A, 0x33C0151E, 0x00699006, 0x0000002C,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xD7FF0000, 0xBFFDCEF8, 0xFD1FF981,
    0xBF3CDAD5, 0xFDE7CEFD, 0x84DE32E5, 0x80A36C67, 0x00C02D39, 0x00000000, 0x00000000,
    0xFA800000, 0x815F3DCE, 0x75FD17F7, 0x7CF45EFC, 0xBF99F37F, 0x735CB677, 0x7E56B982,
    0xC6FAF01A, 0x318C4008, 0x01358017, 0xD6005CC0, 0x9100231C, 0xDE02F3E3, 0x09AD72F8,
    0xCF52B59E, 0xF99F37F7, 0xFDE366FB, 0xBF1D7F45, 0x7DCCBB97, 0x7E709EEE, 0xAEF7EFDF,
    0x7B9987F7, 0xB5D7F33D, 0xF5582F18, 0x144E00F2, 0x48006580, 0x02400000, 0x70121960,
    0xB302D4A2, 0x5EDF9E5E, 0x5ADEFCCF, 0xFDFBFD8C, 0xC0FEF9DE, 0x09EEE7DA, 0x00000000,
    0x7DAC0000, 0x3FDE9ECF, 0xEFEF9EBF, 0xBA0DFBF7, 0xEB3E6FDE, 0xCF988F1F, 0x38AA5F04,
    0x01EFE980, 0x00000210, 0xF7F00084, 0x8038A800, 0x01E7DE25, 0x7DF5583D, 0x0D76B3CF,
    0xFDF9DEFC, 0x60BDBF7E, 0x02F67BEE, 0x00000000, 0xFA5DC000, 0xCDF9DB7F, 0xBEE5BFEA,
    0x580BE1EB, 0x00000001, 0x00000000, 0xBDF7A200, 0x9FB913BB, 0xDCD5F7DF, 0xE7AF6BC5,
    0x552F9BE9, 0x90E5F101, 0xFC3BCC09, 0xF30057EA, 0x6B7E77E7, 0xDF9DFA80, 0x402FF6F8,
    0x3DFFFD3C, 0xB2FD401B, 0x8A604DE6, 0xA8DE068A, 0xCF5ED5FC, 0xE1D3F6B3, 0xBEFBF5D9,
    0xFE13D9EF, 0x0000002F, 0xEF39BDD6, 0xF9DEE77D, 0x318BFDEC, 0x0012318C, 0x00000000,
    0xF1000000, 0x3DF1BF00, 0xEFACD60F, 0xEFC05FFC, 0x0000000F, 0x00000000, 0x60000000,
    0x300B9800, 0x97C07CED, 0xCFBDF8D6, 0xEC55FFD3, 0x9EAFDF59, 0xE016EA9D, 0x007955B9,
    0x0153CB37, 0x58BE3EA2, 0xEB24C560, 0x9C0ABE0F, 0xF038E44A, 0x1E2783C4, 0x137C3EB0,
    0xF91872F8, 0x7CF8C603, 0x2B7E0063, 0xFD3007D6, 0xA7A8802C, 0x8071C002, 0x8077C0D3,
    0x03CF0EE7, 0x63B00C54, 0x63C267F8, 0x528AA07C, 0xC82A9FB0, 0xB0D8E4BC, 0x4A072FCE,
    0x35150AA1, 0x815D87F2, 0x15FE0C5F, 0x186D429E, 0xFCFEA3F1, 0x60511A46, 0x918B9195,
    0xF601CA8F, 0x9E055F88, 0x45405D9F, 0x8DF87F3D, 0x9E207F51, 0xDF230593, 0x91AEC028,
    0x7802A9E0, 0x6C5F80FC, 0xFF004FB0, 0xBC0FC73F, 0x3CFD90E3, 0xCC0EF9A8, 0xB5BC17E7,
    0xBE7C6FC0, 0xD6F102F1, 0x5012FCF7, 0x001E79F3, 0xF5580269, 0xBBC60366, 0xB80ABBE6,
    0x01BD56D9, 0xF8EF179D, 0x903BD6A1, 0x8EF14CFD, 0xD6756605, 0x3EE7809D, 0xE6E01F95,
    0x44031BE3, 0x81F8CC3D, 0x13511F15, 0xF138957C, 0x2A1FC720, 0xE098BE0F, 0xC059E4AB,
    0x07E54F8C, 0x39FE3D44, 0xF59F2700, 0x4CFE5401, 0x00545F00, 0x5F800728, 0x03CF0016,
    0xE01F1AC0, 0x09BF5F99, 0x177AEFB8, 0xDEF7BDE0, 0x3FBDEF7B, 0xDF7DF7DF, 0x36D37DF7,
    0x9E79E79E, 0x802D56A7, 0xFD007C6F, 0xF5A801BC, 0x5ABF2016, 0x007C6700, 0xCF00279D,
    0x7F20077A, 0xE33802CF, 0xA9E3D007, 0xE79E79E7, 0xBEB1F279, 0xEFBEFBEF, 0x39EF16FB,
    0xBEFCBE2F, 0x55F3C4FC, 0x410E4F7D, 0x786F1C88, 0x739E70C7, 0xFFEE439F, 0x0000277F
EW_END_OF_FONT_RES( ClimateLargeFont )

/* Table with links to derived variants of the font resource : 'Climate::LargeFont' */
EW_RES_WITHOUT_VARIANTS( ClimateLargeFont )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateEdge )
  EW_BITMAP_FRAMES( ClimateEdge, Default, EW_DRIVER_VARIANT_RGBA8888, 9, 9, 0 )
    EW_BITMAP_FRAME( 5, 5, 4, 4, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateEdge, Default )                   /* ratio 33.33 % */
    0xA9A80D00, 0x1D604373, 0x0E110600, 0xA1307854, 0xEB0F85C3, 0x21983304, 0x168BC322,
    0x8833FE23, 0x8C8720CC, 0x14364310, 0xC96071B9, 0x6A0CC93A, 0x25B23900, 0x0D3093C3,
    0x81B8331A, 0x06934625, 0xD81CE263, 0x9147E071, 0x14E8EB37, 0xC0E8B39A, 0x02570394,
    0x67744A35, 0x6727A7D3, 0x74C8D526, 0x138355A8, 0x0808D207, 0x00000000

  EW_BITMAPS_TABLE( ClimateEdge )
    EW_BITMAP( ClimateEdge, Default )
EW_END_OF_BITMAP_RES( ClimateEdge )

/* Table with links to derived variants of the bitmap resource : 'Climate::Edge' */
EW_RES_WITHOUT_VARIANTS( ClimateEdge )

/* Initializer for the class 'Climate::DeviceClass' */
void ClimateDeviceClass__Init( ClimateDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->DwellTime = 240;
  _this->HeatTime = 30;
  _this->CoolTime = 45;
  _this->NominalTemp = 79;
  _this->Humidity = 50;
  _this->RemainingTime = 500;
  CoreTimer_OnSetPeriod( &_this->Timer, 250 );
  _this->Timer.OnTrigger = EwNewSlot( _this, ClimateDeviceClass_Animate );
}

/* Re-Initializer for the class 'Climate::DeviceClass' */
void ClimateDeviceClass__ReInit( ClimateDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Timer );
}

/* Finalizer method for the class 'Climate::DeviceClass' */
void ClimateDeviceClass__Done( ClimateDeviceClass _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateDeviceClass );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Timer );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::DeviceClass' */
void ClimateDeviceClass__Mark( ClimateDeviceClass _this )
{
  EwMarkObject( &_this->Timer );

  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetDwellTime()' */
void ClimateDeviceClass_OnSetDwellTime( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 10 )
    value = 10;

  if ( value > 760 )
    value = 760;

  if ( value == _this->DwellTime )
    return;

  _this->DwellTime = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetDwellTime, ClimateDeviceClass_OnSetDwellTime 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetHeatTime()' */
void ClimateDeviceClass_OnSetHeatTime( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 10 )
    value = 10;

  if ( value > 120 )
    value = 120;

  if ( value == _this->HeatTime )
    return;

  _this->HeatTime = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetHeatTime, ClimateDeviceClass_OnSetHeatTime 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetCoolTime()' */
void ClimateDeviceClass_OnSetCoolTime( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 10 )
    value = 10;

  if ( value > 120 )
    value = 120;

  if ( value == _this->CoolTime )
    return;

  _this->CoolTime = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetCoolTime, ClimateDeviceClass_OnSetCoolTime 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetNominalTemp()' */
void ClimateDeviceClass_OnSetNominalTemp( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  if ( value == _this->NominalTemp )
    return;

  _this->NominalTemp = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetNominalTemp, ClimateDeviceClass_OnSetNominalTemp 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetActualTemp()' */
void ClimateDeviceClass_OnSetActualTemp( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  if ( value == _this->ActualTemp )
    return;

  _this->ActualTemp = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetActualTemp, ClimateDeviceClass_OnSetActualTemp 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetHumidity()' */
void ClimateDeviceClass_OnSetHumidity( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  if ( value == _this->Humidity )
    return;

  _this->Humidity = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetHumidity, ClimateDeviceClass_OnSetHumidity 
    ), 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetRunning()' */
void ClimateDeviceClass_OnSetRunning( ClimateDeviceClass _this, XBool value )
{
  if ( value == _this->Running )
    return;

  _this->Running = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetRunning, ClimateDeviceClass_OnSetRunning 
    ), 0 );

  if ( value )
  {
    ClimateDeviceClass_OnSetRemainingTime( _this, ( _this->HeatTime + _this->DwellTime 
    ) + _this->CoolTime );
    ClimateDeviceClass_OnSetActualTemp( _this, 0 );
    CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  }
  else
    CoreTimer_OnSetEnabled( &_this->Timer, 0 );
}

/* 'C' function for method : 'Climate::DeviceClass.OnSetRemainingTime()' */
void ClimateDeviceClass_OnSetRemainingTime( ClimateDeviceClass _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 1000 )
    value = 1000;

  if ( value == _this->RemainingTime )
    return;

  _this->RemainingTime = value;
  EwNotifyRefObservers( EwNewRef( _this, ClimateDeviceClass_OnGetRemainingTime, 
    ClimateDeviceClass_OnSetRemainingTime ), 0 );
}

/* This is a slot method. */
void ClimateDeviceClass_Animate( ClimateDeviceClass _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ClimateDeviceClass_OnSetRemainingTime( _this, _this->RemainingTime - 1 );

  if ( _this->RemainingTime == 0 )
    ClimateDeviceClass_OnSetRunning( _this, 0 );
  else
  {
    XInt32 delta = (( _this->HeatTime + _this->DwellTime ) + _this->CoolTime ) - 
      _this->RemainingTime;

    if ( delta < _this->HeatTime )
      ClimateDeviceClass_OnSetActualTemp( _this, ( _this->NominalTemp * delta ) 
      / _this->HeatTime );
    else
      if ( _this->RemainingTime < _this->CoolTime )
        ClimateDeviceClass_OnSetActualTemp( _this, ( _this->NominalTemp * _this->RemainingTime 
        ) / _this->CoolTime );
      else
        ClimateDeviceClass_OnSetActualTemp( _this, _this->NominalTemp );
  }
}

/* Default onget method for the property 'DwellTime' */
XInt32 ClimateDeviceClass_OnGetDwellTime( ClimateDeviceClass _this )
{
  return _this->DwellTime;
}

/* Default onget method for the property 'HeatTime' */
XInt32 ClimateDeviceClass_OnGetHeatTime( ClimateDeviceClass _this )
{
  return _this->HeatTime;
}

/* Default onget method for the property 'CoolTime' */
XInt32 ClimateDeviceClass_OnGetCoolTime( ClimateDeviceClass _this )
{
  return _this->CoolTime;
}

/* Default onget method for the property 'NominalTemp' */
XInt32 ClimateDeviceClass_OnGetNominalTemp( ClimateDeviceClass _this )
{
  return _this->NominalTemp;
}

/* Default onget method for the property 'ActualTemp' */
XInt32 ClimateDeviceClass_OnGetActualTemp( ClimateDeviceClass _this )
{
  return _this->ActualTemp;
}

/* Default onget method for the property 'Humidity' */
XInt32 ClimateDeviceClass_OnGetHumidity( ClimateDeviceClass _this )
{
  return _this->Humidity;
}

/* Default onget method for the property 'Running' */
XBool ClimateDeviceClass_OnGetRunning( ClimateDeviceClass _this )
{
  return _this->Running;
}

/* Default onget method for the property 'RemainingTime' */
XInt32 ClimateDeviceClass_OnGetRemainingTime( ClimateDeviceClass _this )
{
  return _this->RemainingTime;
}

/* Variants derived from the class : 'Climate::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ClimateDeviceClass )
EW_END_OF_CLASS_VARIANTS( ClimateDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Climate::DeviceClass' */
EW_DEFINE_CLASS( ClimateDeviceClass, XObject, "Climate::DeviceClass" )
EW_END_OF_CLASS( ClimateDeviceClass )

/* User defined auto object: 'Climate::Device' */
EW_DEFINE_AUTOOBJECT( ClimateDevice, ClimateDeviceClass )

/* Initializer for the auto object 'Climate::Device' */
void ClimateDevice__Init( ClimateDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Climate::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ClimateDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ClimateDevice )

/* Constant to define the size of a single data item. */
const XPoint ClimateDataItemSize = { 104, 45 };

/* Constant to define the size of a single data item. */
const XPoint ClimateDataItemSizeLarge = { 208, 45 };

/* Constant to define the size of the diagram. */
const XRect ClimateChartStopPos = {{ 104, 57 }, { 320, 240 }};

/* Initializer for the class 'Climate::Diagram' */
void ClimateDiagram__Init( ClimateDiagram _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );
  ViewsWallpaper__Init( &_this->WallpaperTop, &_this->_XObject, 0 );
  ViewsWallpaper__Init( &_this->WallpaperBottom, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->Graph, &_this->_XObject, 0 );
  ViewsText__Init( &_this->T1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->T2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->T3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->T4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->UnitT, &_this->_XObject, 0 );
  ViewsText__Init( &_this->C1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->C2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->C3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->C4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->UnitC, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->HumidityBar, &_this->_XObject, 0 );
  ViewsText__Init( &_this->HumidText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->DwellText, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TempText, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->HeatLine, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->CoolLine, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->DwellLine, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->RunningBar, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->DwellTimeObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->HeatTimeObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->CoolTimeObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->NominalTempObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->HumidityObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->ActualTempObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->RemainingTimeObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->RunningObserver, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateDiagram );

  /* ... and initialize objects, variables, properties, etc. */
  CoreView_OnSetLayout((CoreView)&_this->SimpleTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0020 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0021 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0022 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0011 );
  CoreRectView__OnSetBounds( _this, _Const0023 );
  CoreView_OnSetLayout((CoreView)&_this->WallpaperTop, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->WallpaperTop, _Const0024 );
  ViewsWallpaper_OnSetColor( &_this->WallpaperTop, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->WallpaperBottom, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->WallpaperBottom, _Const0025 );
  ViewsWallpaper_OnSetColor( &_this->WallpaperBottom, ClimateBackColor );
  ViewsWallpaper_OnSetFrameNumber( &_this->WallpaperBottom, 1 );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0026 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->Graph, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Graph, _Const0027 );
  ChartsGraph_OnSetLineColor( &_this->Graph, ClimateGraphColor );
  ChartsGraph_OnSetLineWidth( &_this->Graph, 4.000000f );
  ChartsGraph_OnSetDotColor( &_this->Graph, ClimateGraphColor );
  ChartsGraph_OnSetDotWidth( &_this->Graph, 12.000000f );
  ChartsGraph_OnSetBackColor( &_this->Graph, ClimateSelectColor );
  ChartsGraph_OnSetHorzGridColor( &_this->Graph, ClimateBorderColor );
  ChartsGraph_OnSetVertGridColor( &_this->Graph, _Const0028 );
  ChartsGraph_OnSetGridDistance( &_this->Graph, _Const0029 );
  CoreView_OnSetLayout((CoreView)&_this->T1, CoreLayoutAlignToBottom );
  CoreRectView__OnSetBounds( &_this->T1, _Const002A );
  ViewsText_OnSetString( &_this->T1, EwLoadString( &_Const002B ));
  ViewsText_OnSetColor( &_this->T1, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->T2, CoreLayoutAlignToBottom );
  CoreRectView__OnSetBounds( &_this->T2, _Const002C );
  ViewsText_OnSetString( &_this->T2, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->T2, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->T3, CoreLayoutAlignToBottom );
  CoreRectView__OnSetBounds( &_this->T3, _Const002E );
  ViewsText_OnSetString( &_this->T3, EwLoadString( &_Const002F ));
  ViewsText_OnSetColor( &_this->T3, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->T4, CoreLayoutAlignToBottom );
  CoreRectView__OnSetBounds( &_this->T4, _Const0030 );
  ViewsText_OnSetString( &_this->T4, EwLoadString( &_Const0031 ));
  ViewsText_OnSetColor( &_this->T4, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->UnitT, CoreLayoutAlignToBottom | CoreLayoutAlignToRight 
  );
  CoreRectView__OnSetBounds( &_this->UnitT, _Const0032 );
  ViewsText_OnSetAlignment( &_this->UnitT, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->UnitT, EwLoadString( &_Const0033 ));
  ViewsText_OnSetColor( &_this->UnitT, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->C1, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->C1, _Const0034 );
  ViewsText_OnSetAlignment( &_this->C1, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->C1, EwLoadString( &_Const0035 ));
  ViewsText_OnSetColor( &_this->C1, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->C2, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->C2, _Const0036 );
  ViewsText_OnSetAlignment( &_this->C2, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->C2, EwLoadString( &_Const0037 ));
  ViewsText_OnSetColor( &_this->C2, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->C3, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->C3, _Const0038 );
  ViewsText_OnSetAlignment( &_this->C3, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->C3, EwLoadString( &_Const0039 ));
  ViewsText_OnSetColor( &_this->C3, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->C4, CoreLayoutAlignToLeft );
  CoreRectView__OnSetBounds( &_this->C4, _Const003A );
  ViewsText_OnSetAlignment( &_this->C4, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->C4, EwLoadString( &_Const003B ));
  ViewsText_OnSetColor( &_this->C4, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->UnitC, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->UnitC, _Const003C );
  ViewsText_OnSetAlignment( &_this->UnitC, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->UnitC, EwLoadString( &_Const001D ));
  ViewsText_OnSetColor( &_this->UnitC, ClimateBorderColor );
  CoreRectView__OnSetBounds( &_this->HumidityBar, _Const003D );
  ViewsRectangle_OnSetColor( &_this->HumidityBar, ClimateHumidityColor );
  CoreRectView__OnSetBounds( &_this->HumidText, _Const003E );
  ViewsText_OnSetString( &_this->HumidText, EwLoadString( &_Const003F ));
  ViewsText_OnSetColor( &_this->HumidText, ClimateHumidityColor );
  CoreRectView__OnSetBounds( &_this->DwellText, _Const0040 );
  ViewsText_OnSetAlignment( &_this->DwellText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->DwellText, EwLoadString( &_Const0041 ));
  ViewsText_OnSetColor( &_this->DwellText, ClimateTextColor );
  CoreRectView__OnSetBounds( &_this->TempText, _Const0042 );
  ViewsText_OnSetAlignment( &_this->TempText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TempText, EwLoadString( &_Const0043 ));
  ViewsText_OnSetColor( &_this->TempText, ClimateGraphColor );
  CoreRectView__OnSetBounds( &_this->HeatLine, _Const0044 );
  ViewsImage_OnSetColor( &_this->HeatLine, ClimateTextColor );
  CoreRectView__OnSetBounds( &_this->CoolLine, _Const0045 );
  ViewsImage_OnSetColor( &_this->CoolLine, ClimateTextColor );
  CoreRectView__OnSetBounds( &_this->DwellLine, _Const0046 );
  ViewsImage_OnSetColor( &_this->DwellLine, ClimateTextColor );
  CoreRectView__OnSetBounds( &_this->RunningBar, _Const0047 );
  ViewsRectangle_OnSetColor( &_this->RunningBar, ClimateStartColor );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WallpaperTop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WallpaperBottom ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Graph ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->T1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->T2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->T3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->T4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UnitT ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->C4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UnitC ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HumidityBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HumidText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DwellText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TempText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HeatLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CoolLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DwellLine ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RunningBar ), 0 );
  ViewsWallpaper_OnSetBitmap( &_this->WallpaperTop, EwLoadResource( &ClimateWiper, 
  ResourcesBitmap ));
  ViewsWallpaper_OnSetBitmap( &_this->WallpaperBottom, EwLoadResource( &ClimateWiper, 
  ResourcesBitmap ));
  ChartsGraph_OnSetDotBitmap( &_this->Graph, EwLoadResource( &ChartsDots12x12, ResourcesBitmap 
  ));
  ViewsText_OnSetFont( &_this->T1, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->T2, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->T3, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->T4, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->UnitT, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->C1, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->C2, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->C3, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->C4, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->UnitC, EwLoadResource( &ClimateSmallFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->HumidText, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->DwellText, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TempText, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsImage_OnSetBitmap( &_this->HeatLine, EwLoadResource( &ClimateDashLineV, ResourcesBitmap 
  ));
  ViewsImage_OnSetBitmap( &_this->CoolLine, EwLoadResource( &ClimateDashLineV, ResourcesBitmap 
  ));
  ViewsImage_OnSetBitmap( &_this->DwellLine, EwLoadResource( &ClimateDashLineH, 
  ResourcesBitmap ));
  _this->DwellTimeObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->DwellTimeObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetDwellTime, ClimateDeviceClass_OnSetDwellTime 
  ));
  _this->HeatTimeObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->HeatTimeObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetHeatTime, ClimateDeviceClass_OnSetHeatTime 
  ));
  _this->CoolTimeObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->CoolTimeObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetCoolTime, ClimateDeviceClass_OnSetCoolTime 
  ));
  _this->NominalTempObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate 
  );
  CorePropertyObserver_OnSetOutlet( &_this->NominalTempObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetNominalTemp, ClimateDeviceClass_OnSetNominalTemp 
  ));
  _this->HumidityObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->HumidityObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetHumidity, ClimateDeviceClass_OnSetHumidity 
  ));
  _this->ActualTempObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate 
  );
  CorePropertyObserver_OnSetOutlet( &_this->ActualTempObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetActualTemp, ClimateDeviceClass_OnSetActualTemp 
  ));
  _this->RemainingTimeObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate 
  );
  CorePropertyObserver_OnSetOutlet( &_this->RemainingTimeObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetRemainingTime, ClimateDeviceClass_OnSetRemainingTime 
  ));
  _this->RunningObserver.OnEvent = EwNewSlot( _this, ClimateDiagram_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->RunningObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetRunning, ClimateDeviceClass_OnSetRunning 
  ));
}

/* Re-Initializer for the class 'Climate::Diagram' */
void ClimateDiagram__ReInit( ClimateDiagram _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsWallpaper__ReInit( &_this->WallpaperTop );
  ViewsWallpaper__ReInit( &_this->WallpaperBottom );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ChartsGraph__ReInit( &_this->Graph );
  ViewsText__ReInit( &_this->T1 );
  ViewsText__ReInit( &_this->T2 );
  ViewsText__ReInit( &_this->T3 );
  ViewsText__ReInit( &_this->T4 );
  ViewsText__ReInit( &_this->UnitT );
  ViewsText__ReInit( &_this->C1 );
  ViewsText__ReInit( &_this->C2 );
  ViewsText__ReInit( &_this->C3 );
  ViewsText__ReInit( &_this->C4 );
  ViewsText__ReInit( &_this->UnitC );
  ViewsRectangle__ReInit( &_this->HumidityBar );
  ViewsText__ReInit( &_this->HumidText );
  ViewsText__ReInit( &_this->DwellText );
  ViewsText__ReInit( &_this->TempText );
  ViewsImage__ReInit( &_this->HeatLine );
  ViewsImage__ReInit( &_this->CoolLine );
  ViewsImage__ReInit( &_this->DwellLine );
  ViewsRectangle__ReInit( &_this->RunningBar );
  CorePropertyObserver__ReInit( &_this->DwellTimeObserver );
  CorePropertyObserver__ReInit( &_this->HeatTimeObserver );
  CorePropertyObserver__ReInit( &_this->CoolTimeObserver );
  CorePropertyObserver__ReInit( &_this->NominalTempObserver );
  CorePropertyObserver__ReInit( &_this->HumidityObserver );
  CorePropertyObserver__ReInit( &_this->ActualTempObserver );
  CorePropertyObserver__ReInit( &_this->RemainingTimeObserver );
  CorePropertyObserver__ReInit( &_this->RunningObserver );
}

/* Finalizer method for the class 'Climate::Diagram' */
void ClimateDiagram__Done( ClimateDiagram _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateDiagram );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsWallpaper__Done( &_this->WallpaperTop );
  ViewsWallpaper__Done( &_this->WallpaperBottom );
  ViewsRectangle__Done( &_this->Rectangle );
  ChartsGraph__Done( &_this->Graph );
  ViewsText__Done( &_this->T1 );
  ViewsText__Done( &_this->T2 );
  ViewsText__Done( &_this->T3 );
  ViewsText__Done( &_this->T4 );
  ViewsText__Done( &_this->UnitT );
  ViewsText__Done( &_this->C1 );
  ViewsText__Done( &_this->C2 );
  ViewsText__Done( &_this->C3 );
  ViewsText__Done( &_this->C4 );
  ViewsText__Done( &_this->UnitC );
  ViewsRectangle__Done( &_this->HumidityBar );
  ViewsText__Done( &_this->HumidText );
  ViewsText__Done( &_this->DwellText );
  ViewsText__Done( &_this->TempText );
  ViewsImage__Done( &_this->HeatLine );
  ViewsImage__Done( &_this->CoolLine );
  ViewsImage__Done( &_this->DwellLine );
  ViewsRectangle__Done( &_this->RunningBar );
  CorePropertyObserver__Done( &_this->DwellTimeObserver );
  CorePropertyObserver__Done( &_this->HeatTimeObserver );
  CorePropertyObserver__Done( &_this->CoolTimeObserver );
  CorePropertyObserver__Done( &_this->NominalTempObserver );
  CorePropertyObserver__Done( &_this->HumidityObserver );
  CorePropertyObserver__Done( &_this->ActualTempObserver );
  CorePropertyObserver__Done( &_this->RemainingTimeObserver );
  CorePropertyObserver__Done( &_this->RunningObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::Diagram' */
void ClimateDiagram__Mark( ClimateDiagram _this )
{
  EwMarkObject( &_this->SimpleTouchHandler );
  EwMarkObject( &_this->WallpaperTop );
  EwMarkObject( &_this->WallpaperBottom );
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Graph );
  EwMarkObject( &_this->T1 );
  EwMarkObject( &_this->T2 );
  EwMarkObject( &_this->T3 );
  EwMarkObject( &_this->T4 );
  EwMarkObject( &_this->UnitT );
  EwMarkObject( &_this->C1 );
  EwMarkObject( &_this->C2 );
  EwMarkObject( &_this->C3 );
  EwMarkObject( &_this->C4 );
  EwMarkObject( &_this->UnitC );
  EwMarkObject( &_this->HumidityBar );
  EwMarkObject( &_this->HumidText );
  EwMarkObject( &_this->DwellText );
  EwMarkObject( &_this->TempText );
  EwMarkObject( &_this->HeatLine );
  EwMarkObject( &_this->CoolLine );
  EwMarkObject( &_this->DwellLine );
  EwMarkObject( &_this->RunningBar );
  EwMarkObject( &_this->DwellTimeObserver );
  EwMarkObject( &_this->HeatTimeObserver );
  EwMarkObject( &_this->CoolTimeObserver );
  EwMarkObject( &_this->NominalTempObserver );
  EwMarkObject( &_this->HumidityObserver );
  EwMarkObject( &_this->ActualTempObserver );
  EwMarkObject( &_this->RemainingTimeObserver );
  EwMarkObject( &_this->RunningObserver );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateDiagram_UpdateLayout( ClimateDiagram _this, XPoint aSize )
{
  XInt32 y1;
  XInt32 y2;
  XRect r;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  y1 = _this->WallpaperTop.Bitmap->FrameSize.Y;
  y2 = aSize.Y - _this->WallpaperBottom.Bitmap->FrameSize.Y;
  CoreRectView__OnSetBounds( &_this->WallpaperTop, EwNewRect( 0, 0, aSize.X, y1 
  ));
  CoreRectView__OnSetBounds( &_this->WallpaperBottom, EwNewRect( 0, y2, aSize.X, 
  aSize.Y ));
  CoreRectView__OnSetBounds( &_this->Graph, EwNewRect( 2 * ClimateSpacing.X, y1, 
  aSize.X - ClimateSpacing.X, y2 - ClimateSpacing.Y ));
  CoreRectView__OnSetBounds( &_this->Rectangle, EwNewRect( 0, y1, aSize.X, y2 ));
  r = EwNewRect( 0, y1, ( 2 * ClimateSpacing.X ) - 3, y1 + ClimateSpacing.Y );
  CoreRectView__OnSetBounds( &_this->UnitC, r );
  CoreRectView__OnSetBounds( &_this->C4, r );
  CoreRectView__OnSetBounds( &_this->C3, r );
  CoreRectView__OnSetBounds( &_this->C2, r );
  CoreRectView__OnSetBounds( &_this->C1, r );
  r = EwNewRect(( aSize.X - ClimateSpacing.X ) - ( 3 * ClimateSpacing.X ), y2 - 
  ClimateSpacing.Y, aSize.X - ClimateSpacing.X, y2 );
  CoreRectView__OnSetBounds( &_this->UnitT, r );
  CoreRectView__OnSetBounds( &_this->T4, r );
  CoreRectView__OnSetBounds( &_this->T3, r );
  CoreRectView__OnSetBounds( &_this->T2, r );
  CoreRectView__OnSetBounds( &_this->T1, r );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateDiagram_UpdateViewState( ClimateDiagram _this, XSet aState )
{
  XInt32 totalTime;
  XInt32 rangeTime;
  ChartsCoordList coords;
  XFloat x1;
  XFloat x2;
  XFloat x3;
  XFloat y;
  XPoint grid;
  XInt32 humPos;
  XInt32 centerX;
  XInt32 centerY;
  XInt32 h;
  XInt32 m;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  totalTime = ( EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->HeatTime 
  + EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->DwellTime ) + EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass )->CoolTime;
  rangeTime = 0;

  if ( totalTime < 25 )
    rangeTime = 25;
  else
    if ( totalTime < 50 )
      rangeTime = 50;
    else
      if ( totalTime < 75 )
        rangeTime = 75;
      else
        if ( totalTime < 100 )
          rangeTime = 100;
        else
          if ( totalTime < 150 )
            rangeTime = 150;
          else
            if ( totalTime < 300 )
              rangeTime = 300;
            else
              if ( totalTime < 600 )
                rangeTime = 600;
              else
                rangeTime = 1200;

  ViewsText_OnSetString( &_this->T1, EwNewStringInt(( rangeTime / 5 ) * 1, 0, 10 
  ));
  ViewsText_OnSetString( &_this->T2, EwNewStringInt(( rangeTime / 5 ) * 2, 0, 10 
  ));
  ViewsText_OnSetString( &_this->T3, EwNewStringInt(( rangeTime / 5 ) * 3, 0, 10 
  ));
  ViewsText_OnSetString( &_this->T4, EwNewStringInt(( rangeTime / 5 ) * 4, 0, 10 
  ));
  coords = EwNewObject( ChartsCoordList, 0 );
  x1 = (XFloat)EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->HeatTime / 
  (XFloat)rangeTime;
  x2 = (XFloat)( EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->HeatTime 
  + EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->DwellTime ) / (XFloat)rangeTime;
  x3 = (XFloat)totalTime / (XFloat)rangeTime;
  y = (XFloat)EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->NominalTemp 
  / 100.000000f;
  ChartsCoordList_AddCoord( coords, -x1, -y );
  ChartsCoordList_AddCoord( coords, x1, y );
  ChartsCoordList_AddCoord( coords, x2, y );
  ChartsCoordList_AddCoord( coords, x3, 0.000000f );
  grid = EwNewPoint( EwGetRectW( _this->Graph.Super2.Bounds ) / 5, EwGetRectH( _this->Graph.Super2.Bounds 
  ) / 5 );
  ChartsGraph_OnSetGridDistance( &_this->Graph, grid );
  ChartsGraph_OnSetCoordOrigin( &_this->Graph, EwNewPoint( 0, EwGetRectH( _this->Graph.Super2.Bounds 
  )));
  ChartsGraph_OnSetPixelPerUnit( &_this->Graph, EwNewPoint( EwGetRectW( _this->Graph.Super2.Bounds 
  ), -EwGetRectH( _this->Graph.Super2.Bounds )));
  ChartsGraph_OnSetCoordinates( &_this->Graph, coords );
  humPos = _this->Graph.Super2.Bounds.Point2.Y - (( EwGetAutoObject( &ClimateDevice, 
  ClimateDeviceClass )->Humidity * EwGetRectH( _this->Graph.Super2.Bounds )) / 100 
  );
  CoreRectView__OnSetBounds( &_this->HumidityBar, EwNewRect( _this->Graph.Super2.Bounds.Point1.X, 
  humPos - 1, _this->Graph.Super2.Bounds.Point2.X, humPos + 1 ));
  ViewsText_OnSetString( &_this->HumidText, EwConcatString( EwNewStringInt( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass )->Humidity, 0, 10 ), EwLoadString( &_Const001E 
  )));
  CoreRectView__OnSetBounds( &_this->HumidText, EwSetRectOrigin( _this->HumidText.Super1.Bounds, 
  EwNewPoint( _this->HumidityBar.Super1.Bounds.Point2.X - EwGetRectW( _this->HumidText.Super1.Bounds 
  ), humPos - EwGetRectH( _this->HumidText.Super1.Bounds ))));
  centerX = _this->Graph.Super2.Bounds.Point1.X + ((( EwGetAutoObject( &ClimateDevice, 
  ClimateDeviceClass )->HeatTime + ( EwGetAutoObject( &ClimateDevice, ClimateDeviceClass 
  )->DwellTime / 2 )) * EwGetRectW( _this->Graph.Super2.Bounds )) / rangeTime );
  centerY = _this->Graph.Super2.Bounds.Point2.Y - (( EwGetAutoObject( &ClimateDevice, 
  ClimateDeviceClass )->NominalTemp * EwGetRectH( _this->Graph.Super2.Bounds )) 
  / 100 );
  ViewsText_OnSetString( &_this->TempText, EwConcatString( EwNewStringInt( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass )->NominalTemp, 0, 10 ), EwLoadString( &_Const001D 
  )));
  CoreRectView__OnSetBounds( &_this->TempText, EwSetRectOrigin( _this->TempText.Super1.Bounds, 
  EwNewPoint( centerX - ( EwGetRectW( _this->DwellText.Super1.Bounds ) / 2 ), centerY 
  - EwGetRectH( _this->TempText.Super1.Bounds ))));
  h = EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->DwellTime / 60;
  m = EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->DwellTime - ( h * 60 
  );
  ViewsText_OnSetString( &_this->DwellText, EwConcatString( EwConcatString( EwConcatString( 
  EwNewStringInt( h, 0, 10 ), EwLoadString( &_Const001B )), EwNewStringInt( m, 2, 
  10 )), EwLoadString( &_Const001C )));
  CoreRectView__OnSetBounds( &_this->DwellText, EwSetRectOrigin( _this->DwellText.Super1.Bounds, 
  EwNewPoint( centerX - ( EwGetRectW( _this->DwellText.Super1.Bounds ) / 2 ), _this->Graph.Super2.Bounds.Point2.Y 
  - EwGetRectH( _this->DwellText.Super1.Bounds ))));
  CoreRectView__OnSetBounds( &_this->HeatLine, EwSetRectX1( _this->HeatLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point1.X + (( EwGetAutoObject( &ClimateDevice, ClimateDeviceClass 
  )->HeatTime * EwGetRectW( _this->Graph.Super2.Bounds )) / rangeTime )));
  CoreRectView__OnSetBounds( &_this->HeatLine, EwSetRectX2( _this->HeatLine.Super1.Bounds, 
  _this->HeatLine.Super1.Bounds.Point1.X + 2 ));
  CoreRectView__OnSetBounds( &_this->HeatLine, EwSetRectY1( _this->HeatLine.Super1.Bounds, 
  centerY + 10 ));
  CoreRectView__OnSetBounds( &_this->HeatLine, EwSetRectY2( _this->HeatLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point2.Y ));
  CoreRectView__OnSetBounds( &_this->CoolLine, EwSetRectX1( _this->CoolLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point1.X + ((( EwGetAutoObject( &ClimateDevice, ClimateDeviceClass 
  )->HeatTime + EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->DwellTime 
  ) * EwGetRectW( _this->Graph.Super2.Bounds )) / rangeTime )));
  CoreRectView__OnSetBounds( &_this->CoolLine, EwSetRectX2( _this->CoolLine.Super1.Bounds, 
  _this->CoolLine.Super1.Bounds.Point1.X + 2 ));
  CoreRectView__OnSetBounds( &_this->CoolLine, EwSetRectY1( _this->CoolLine.Super1.Bounds, 
  centerY + 10 ));
  CoreRectView__OnSetBounds( &_this->CoolLine, EwSetRectY2( _this->CoolLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point2.Y ));
  CoreRectView__OnSetBounds( &_this->DwellLine, EwSetRectX1( _this->DwellLine.Super1.Bounds, 
  _this->HeatLine.Super1.Bounds.Point2.X ));
  CoreRectView__OnSetBounds( &_this->DwellLine, EwSetRectX2( _this->DwellLine.Super1.Bounds, 
  _this->CoolLine.Super1.Bounds.Point1.X ));
  CoreRectView__OnSetBounds( &_this->DwellLine, EwSetRectY1( _this->DwellLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point2.Y - 2 ));
  CoreRectView__OnSetBounds( &_this->DwellLine, EwSetRectY2( _this->DwellLine.Super1.Bounds, 
  _this->Graph.Super2.Bounds.Point2.Y ));
  CoreRectView__OnSetBounds( &_this->T1, EwSetRectOrigin( _this->T1.Super1.Bounds, 
  EwSetPointX( _this->T1.Super1.Bounds.Point1, ( _this->Graph.Super2.Bounds.Point1.X 
  + grid.X ) - ( EwGetRectW( _this->T1.Super1.Bounds ) / 2 ))));
  CoreRectView__OnSetBounds( &_this->T2, EwSetRectOrigin( _this->T2.Super1.Bounds, 
  EwSetPointX( _this->T2.Super1.Bounds.Point1, _this->T1.Super1.Bounds.Point1.X 
  + grid.X )));
  CoreRectView__OnSetBounds( &_this->T3, EwSetRectOrigin( _this->T3.Super1.Bounds, 
  EwSetPointX( _this->T3.Super1.Bounds.Point1, _this->T2.Super1.Bounds.Point1.X 
  + grid.X )));
  CoreRectView__OnSetBounds( &_this->T4, EwSetRectOrigin( _this->T4.Super1.Bounds, 
  EwSetPointX( _this->T4.Super1.Bounds.Point1, _this->T3.Super1.Bounds.Point1.X 
  + grid.X )));
  CoreRectView__OnSetBounds( &_this->C4, EwSetRectOrigin( _this->C4.Super1.Bounds, 
  EwSetPointY( _this->C4.Super1.Bounds.Point1, ( _this->Graph.Super2.Bounds.Point1.Y 
  + grid.Y ) - ( EwGetRectH( _this->C4.Super1.Bounds ) / 2 ))));
  CoreRectView__OnSetBounds( &_this->C3, EwSetRectOrigin( _this->C3.Super1.Bounds, 
  EwSetPointY( _this->C3.Super1.Bounds.Point1, _this->C4.Super1.Bounds.Point1.Y 
  + grid.Y )));
  CoreRectView__OnSetBounds( &_this->C2, EwSetRectOrigin( _this->C2.Super1.Bounds, 
  EwSetPointY( _this->C2.Super1.Bounds.Point1, _this->C3.Super1.Bounds.Point1.Y 
  + grid.Y )));
  CoreRectView__OnSetBounds( &_this->C1, EwSetRectOrigin( _this->C1.Super1.Bounds, 
  EwSetPointY( _this->C1.Super1.Bounds.Point1, _this->C2.Super1.Bounds.Point1.Y 
  + grid.Y )));
  ViewsRectangle_OnSetVisible( &_this->RunningBar, EwGetAutoObject( &ClimateDevice, 
  ClimateDeviceClass )->Running );
  CoreRectView__OnSetBounds( &_this->RunningBar, EwSetRectOrigin( _this->RunningBar.Super1.Bounds, 
  EwNewPoint( _this->Graph.Super2.Bounds.Point1.X + ((( totalTime - EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass )->RemainingTime ) * EwGetRectW( _this->Graph.Super2.Bounds 
  )) / rangeTime ), _this->Graph.Super2.Bounds.Point1.Y )));
  CoreRectView__OnSetBounds( &_this->RunningBar, EwSetRectH( _this->RunningBar.Super1.Bounds, 
  EwGetRectH( _this->Graph.Super2.Bounds )));
}

/* Slot method to update the display value. */
void ClimateDiagram_onUpdate( ClimateDiagram _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Climate::Diagram' */
EW_DEFINE_CLASS_VARIANTS( ClimateDiagram )
EW_END_OF_CLASS_VARIANTS( ClimateDiagram )

/* Virtual Method Table (VMT) for the class : 'Climate::Diagram' */
EW_DEFINE_CLASS( ClimateDiagram, CoreGroup, "Climate::Diagram" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateDiagram_UpdateLayout,
  ClimateDiagram_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateDiagram )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateWiper )
  EW_BITMAP_FRAMES( ClimateWiper, Default, EW_DRIVER_VARIANT_ALPHA8, 60, 12, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x000000F8, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateWiper, Default )                  /* ratio 35.83 % */
    0x4B79E100, 0x1F52EB06, 0x70644931, 0x20400050, 0x15088341, 0xF0587432, 0x1D189220,
    0x581BC618, 0x8CC5CC51, 0x4B7DE200, 0xC5E20B16, 0x76472185, 0x2503124C, 0x512C8845,
    0x5269246E, 0x308E4862, 0x69C44E5B, 0x824EE311, 0x94260E98, 0xC62113C9, 0xC2550D05,
    0x646F09B4, 0x8B4CA149, 0x54A8D4C6, 0xCA9BCEA8, 0xCA350560, 0x95CCE901, 0xECBE910A,
    0x436A6613, 0x82595B8E, 0xEC90FA6C, 0xA1688D49, 0x3169A512, 0x32B4C92A, 0x3ABD4AD6,
    0xBDCBA236, 0xFD729F73, 0x57A5B2B9, 0xFAE987C0, 0xA236DB85, 0xCD64A05E, 0x36298DF6,
    0x6D9BE0EE, 0xD9155ECB, 0x9CD7ECD8, 0x647E3B8F, 0xE76FF85C, 0x934B98B0, 0xA9784D06,
    0x6173B069, 0xE7E4C693, 0x27DACBF2, 0x930DD32B, 0xD369ECFB, 0xCE861382, 0x6D52FAF9,
    0x7F2F55C9, 0x6077CB4D, 0xE59F9B70, 0x398E96B6, 0x79A966F8, 0x00040619, 0xB0801B00,
    0xA04CE4E1, 0x8D9AB64E, 0x204FD7AB, 0x9B088341, 0xCFE7A389, 0x0782C0C1, 0xE7AB8A13,
    0x828D604F, 0x6C6E2282, 0x4661E218, 0x621D0C85, 0xE3B0B88C, 0x35213445, 0x11F8B452,
    0xF471C262, 0x79A8821A, 0x1B492712, 0xCC8A604F, 0x50E41349, 0x7A8F3C97, 0x66542274,
    0x633510C5, 0xF2A8A44A, 0x159C548C, 0xC8D51A77, 0xA943E2D1, 0x64963B13, 0x45EA960A,
    0x0275289B, 0xE730AA6D, 0x5322AB52, 0xD61B656A, 0x37B813E3, 0x49EDCE89, 0xA74AEA15,
    0x2DDE4A0D, 0x5E09B6AB, 0x9EAB1C89, 0x7172FBAC, 0x1D771ADF, 0x379A4CEB, 0x669657EB,
    0xCA4662A3, 0xBA52F254, 0x26832172, 0x4FAD91F9, 0x62D16307, 0xB115BAF5, 0x496DBFE5,
    0x794C66B7, 0x87D63F6A, 0xCC759F57, 0xC1ED2D19, 0x0C0F6F43, 0xEE68B84A, 0x137D7EC4,
    0xEC57CD4D, 0x9B6FC25A, 0xD57D2E07, 0x72DF56AD, 0x2B75D209, 0xEBCCF4D8, 0x8F07999E,
    0xE13AFE3E, 0x00000080, 0x00000000

  EW_BITMAPS_TABLE( ClimateWiper )
    EW_BITMAP( ClimateWiper, Default )
EW_END_OF_BITMAP_RES( ClimateWiper )

/* Table with links to derived variants of the bitmap resource : 'Climate::Wiper' */
EW_RES_WITHOUT_VARIANTS( ClimateWiper )

/* This is a font resource. */
EW_DEFINE_FONT_RES( ClimateSmallFont, 9, 3, 0, 16, 0x0001, 0x00C0 )
  EW_GLYPH( 0x0001, 0, -7, 4, 7, 4, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 2, 0x0000007C ),                /* ' ' */
  EW_GLYPH( 0x0021, 0, -7, 2, 7, 3, 0x0000007C ),               /* '!' */
  EW_GLYPH( 0x0022, 0, -8, 3, 3, 3, 0x000000A9 ),               /* '"' */
  EW_GLYPH( 0x0023, 0, -7, 6, 7, 6, 0x000000CB ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -9, 6, 10, 6, 0x00000197 ),              /* '$' */
  EW_GLYPH( 0x0025, 0, -7, 7, 7, 7, 0x00000266 ),               /* '%' */
  EW_GLYPH( 0x0026, 0, -7, 7, 7, 6, 0x00000334 ),               /* '&' */
  EW_GLYPH( 0x0027, 0, -8, 2, 2, 2, 0x000003F2 ),               /* ''' */
  EW_GLYPH( 0x0028, 0, -8, 4, 10, 3, 0x00000401 ),              /* '(' */
  EW_GLYPH( 0x0029, 0, -8, 3, 10, 3, 0x00000473 ),              /* ')' */
  EW_GLYPH( 0x002A, 0, -7, 5, 5, 4, 0x000004DF ),               /* '*' */
  EW_GLYPH( 0x002B, 0, -7, 6, 7, 6, 0x00000541 ),               /* '+' */
  EW_GLYPH( 0x002C, 0, -2, 2, 3, 2, 0x000005B1 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -3, 3, 1, 3, 0x000005CB ),               /* '-' */
  EW_GLYPH( 0x002E, 0, -2, 2, 2, 3, 0x000005DD ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -7, 4, 8, 4, 0x000005EB ),               /* '/' */
  EW_GLYPH( 0x0030, 0, -7, 5, 7, 6, 0x0000064F ),               /* '0' */
  EW_GLYPH( 0x0031, 0, -7, 4, 7, 6, 0x000006CD ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -7, 6, 7, 6, 0x0000070C ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -7, 5, 7, 6, 0x000007AD ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -7, 6, 7, 6, 0x00000846 ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -7, 6, 7, 6, 0x000008D0 ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -7, 6, 7, 6, 0x0000097E ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -7, 6, 7, 6, 0x00000A2D ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -7, 6, 7, 6, 0x00000AB5 ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -7, 5, 7, 6, 0x00000B4C ),               /* '9' */
  EW_GLYPH( 0x003A, 0, -5, 2, 5, 2, 0x00000BDF ),               /* ':' */
  EW_GLYPH( 0x003B, 0, -5, 2, 6, 2, 0x00000C05 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -5, 5, 4, 5, 0x00000C37 ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -5, 5, 3, 5, 0x00000C89 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -5, 5, 4, 5, 0x00000CDA ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -7, 5, 7, 5, 0x00000D24 ),               /* '?' */
  EW_GLYPH( 0x0040, 0, -7, 9, 9, 9, 0x00000D9E ),               /* '@' */
  EW_GLYPH( 0x0041, 0, -7, 7, 7, 7, 0x00000EF5 ),               /* 'A' */
  EW_GLYPH( 0x0042, 0, -7, 6, 7, 6, 0x00000F95 ),               /* 'B' */
  EW_GLYPH( 0x0043, 0, -7, 7, 7, 7, 0x0000102A ),               /* 'C' */
  EW_GLYPH( 0x0044, 0, -7, 6, 7, 7, 0x000010D6 ),               /* 'D' */
  EW_GLYPH( 0x0045, 0, -7, 6, 7, 6, 0x0000115E ),               /* 'E' */
  EW_GLYPH( 0x0046, 0, -7, 6, 7, 6, 0x000011E8 ),               /* 'F' */
  EW_GLYPH( 0x0047, 0, -7, 7, 7, 7, 0x0000125E ),               /* 'G' */
  EW_GLYPH( 0x0048, 0, -7, 7, 7, 7, 0x00001315 ),               /* 'H' */
  EW_GLYPH( 0x0049, 0, -7, 2, 7, 3, 0x0000137E ),               /* 'I' */
  EW_GLYPH( 0x004A, 0, -7, 5, 7, 6, 0x00001395 ),               /* 'J' */
  EW_GLYPH( 0x004B, 0, -7, 7, 7, 6, 0x000013E8 ),               /* 'K' */
  EW_GLYPH( 0x004C, 0, -7, 6, 7, 5, 0x00001480 ),               /* 'L' */
  EW_GLYPH( 0x004D, 0, -7, 8, 7, 9, 0x000014C5 ),               /* 'M' */
  EW_GLYPH( 0x004E, 0, -7, 7, 7, 7, 0x0000156D ),               /* 'N' */
  EW_GLYPH( 0x004F, 0, -7, 7, 7, 7, 0x000015F6 ),               /* 'O' */
  EW_GLYPH( 0x0050, 0, -7, 6, 7, 6, 0x000016A3 ),               /* 'P' */
  EW_GLYPH( 0x0051, 0, -7, 7, 9, 7, 0x00001726 ),               /* 'Q' */
  EW_GLYPH( 0x0052, 0, -7, 6, 7, 6, 0x00001808 ),               /* 'R' */
  EW_GLYPH( 0x0053, 0, -7, 6, 7, 6, 0x00001895 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -7, 6, 7, 6, 0x0000194F ),               /* 'T' */
  EW_GLYPH( 0x0055, 0, -7, 6, 7, 6, 0x000019AF ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -7, 7, 7, 6, 0x00001A17 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -7, 9, 7, 9, 0x00001AC1 ),               /* 'W' */
  EW_GLYPH( 0x0058, 0, -7, 6, 7, 6, 0x00001BAC ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -7, 6, 7, 6, 0x00001C65 ),               /* 'Y' */
  EW_GLYPH( 0x005A, 0, -7, 6, 7, 6, 0x00001CEA ),               /* 'Z' */
  EW_GLYPH( 0x005B, 0, -8, 3, 10, 3, 0x00001D94 ),              /* '[' */
  EW_GLYPH( 0x005C, 0, -7, 4, 8, 4, 0x00001DCE ),               /* '\' */
  EW_GLYPH( 0x005D, 0, -8, 2, 10, 3, 0x00001E36 ),              /* ']' */
  EW_GLYPH( 0x005E, 0, -7, 4, 3, 4, 0x00001E5C ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 0, 5, 1, 5, 0x00001E8A ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -8, 3, 2, 3, 0x00001EA3 ),               /* '`' */
  EW_GLYPH( 0x0061, 0, -5, 5, 5, 5, 0x00001EB9 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -8, 6, 8, 6, 0x00001F32 ),               /* 'b' */
  EW_GLYPH( 0x0063, 0, -5, 5, 5, 5, 0x00001FC1 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -8, 6, 8, 6, 0x00002031 ),               /* 'd' */
  EW_GLYPH( 0x0065, 0, -5, 5, 5, 5, 0x000020BA ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -8, 4, 8, 3, 0x0000213B ),               /* 'f' */
  EW_GLYPH( 0x0067, 0, -5, 6, 7, 6, 0x00002193 ),               /* 'g' */
  EW_GLYPH( 0x0068, 1, -8, 5, 8, 6, 0x00002245 ),               /* 'h' */
  EW_GLYPH( 0x0069, 0, -7, 2, 7, 2, 0x000022A0 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -7, 3, 9, 2, 0x000022C7 ),              /* 'j' */
  EW_GLYPH( 0x006B, 0, -8, 6, 8, 5, 0x0000230C ),               /* 'k' */
  EW_GLYPH( 0x006C, 0, -8, 2, 8, 2, 0x00002386 ),               /* 'l' */
  EW_GLYPH( 0x006D, 0, -5, 9, 5, 9, 0x0000239F ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -5, 6, 5, 6, 0x0000241E ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -5, 6, 5, 6, 0x0000246B ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -5, 6, 7, 6, 0x00002505 ),               /* 'p' */
  EW_GLYPH( 0x0071, 0, -5, 6, 7, 6, 0x0000259E ),               /* 'q' */
  EW_GLYPH( 0x0072, 0, -5, 3, 5, 3, 0x00002635 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -5, 5, 5, 5, 0x00002660 ),               /* 's' */
  EW_GLYPH( 0x0074, -1, -6, 4, 6, 3, 0x000026E1 ),              /* 't' */
  EW_GLYPH( 0x0075, 0, -5, 5, 5, 6, 0x0000272F ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -5, 5, 5, 5, 0x00002770 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -5, 8, 5, 8, 0x000027D6 ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -5, 5, 5, 5, 0x00002877 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -5, 5, 7, 5, 0x000028E4 ),               /* 'y' */
  EW_GLYPH( 0x007A, 0, -5, 5, 5, 5, 0x00002968 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -8, 4, 10, 3, 0x000029DA ),              /* '{' */
  EW_GLYPH( 0x007C, 0, -7, 2, 8, 2, 0x00002A4D ),               /* '|' */
  EW_GLYPH( 0x007D, -1, -8, 4, 10, 3, 0x00002A65 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -4, 7, 2, 7, 0x00002AD9 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 2, 0x00002B0D ),
  EW_GLYPH( 0x00A1, 0, -5, 2, 7, 2, 0x00002B0D ),
  EW_GLYPH( 0x00A2, 0, -7, 5, 9, 5, 0x00002B3B ),
  EW_GLYPH( 0x00A3, 0, -7, 6, 7, 6, 0x00002BE2 ),
  EW_GLYPH( 0x00A4, 0, -7, 7, 7, 7, 0x00002C7A ),
  EW_GLYPH( 0x00A5, 0, -7, 6, 7, 6, 0x00002D2F ),
  EW_GLYPH( 0x00A6, 0, -7, 2, 8, 2, 0x00002DFD ),
  EW_GLYPH( 0x00A7, 0, -7, 6, 9, 6, 0x00002E28 ),
  EW_GLYPH( 0x00A8, 0, -7, 4, 1, 4, 0x00002F2F ),
  EW_GLYPH( 0x00A9, 0, -7, 8, 7, 8, 0x00002F41 ),
  EW_GLYPH( 0x00AA, 0, -7, 4, 4, 4, 0x00003037 ),
  EW_GLYPH( 0x00AB, 0, -5, 5, 4, 5, 0x00003081 ),
  EW_GLYPH( 0x00AC, 0, -4, 5, 2, 6, 0x000030CF ),
  EW_GLYPH( 0x00AD, 0, -3, 3, 1, 3, 0x00003100 ),
  EW_GLYPH( 0x00AE, 0, -7, 8, 7, 8, 0x00003112 ),
  EW_GLYPH( 0x00AF, 0, -7, 5, 1, 5, 0x0000320B ),
  EW_GLYPH( 0x00B0, 0, -7, 4, 3, 4, 0x00003224 ),
  EW_GLYPH( 0x00B1, 0, -6, 5, 6, 5, 0x00003259 ),
  EW_GLYPH( 0x00B2, 0, -7, 4, 4, 4, 0x000032C6 ),
  EW_GLYPH( 0x00B3, 0, -7, 4, 4, 4, 0x00003319 ),
  EW_GLYPH( 0x00B4, 0, -8, 3, 2, 3, 0x00003367 ),
  EW_GLYPH( 0x00B5, 0, -5, 6, 7, 6, 0x0000337F ),
  EW_GLYPH( 0x00B6, 0, -7, 5, 7, 5, 0x000033EC ),
  EW_GLYPH( 0x00B7, 1, -4, 2, 2, 3, 0x00003451 ),
  EW_GLYPH( 0x00B8, 0, 0, 2, 3, 2, 0x00003461 ),
  EW_GLYPH( 0x00B9, 0, -7, 3, 4, 4, 0x0000347E ),
  EW_GLYPH( 0x00BA, 0, -7, 5, 4, 5, 0x000034A5 ),
  EW_GLYPH( 0x00BB, 0, -5, 5, 4, 5, 0x000034E7 ),
  EW_GLYPH( 0x00BC, 0, -7, 8, 7, 7, 0x0000352B ),
  EW_GLYPH( 0x00BD, 0, -7, 8, 7, 8, 0x000035EC ),
  EW_GLYPH( 0x00BE, 0, -7, 8, 7, 8, 0x000036B4 ),
  EW_GLYPH( 0x00BF, 0, -5, 5, 7, 5, 0x00003796 ),
  EW_GLYPH( 0x00C0, 0, -10, 7, 10, 7, 0x00003800 ),
  EW_GLYPH( 0x00C1, 0, -10, 7, 10, 7, 0x000038CD ),
  EW_GLYPH( 0x00C2, 0, -10, 7, 10, 7, 0x0000399C ),
  EW_GLYPH( 0x00C3, 0, -10, 7, 11, 7, 0x00003A79 ),
  EW_GLYPH( 0x00C4, 0, -9, 7, 9, 7, 0x00003B68 ),
  EW_GLYPH( 0x00C5, 0, -10, 7, 10, 7, 0x00003C32 ),
  EW_GLYPH( 0x00C6, -1, -7, 11, 7, 9, 0x00003CFF ),
  EW_GLYPH( 0x00C7, 0, -7, 7, 10, 7, 0x00003E03 ),
  EW_GLYPH( 0x00C8, 0, -10, 6, 10, 6, 0x00003EEA ),
  EW_GLYPH( 0x00C9, 0, -10, 6, 10, 6, 0x00003F9E ),
  EW_GLYPH( 0x00CA, 0, -10, 6, 10, 6, 0x00004054 ),
  EW_GLYPH( 0x00CB, 0, -9, 6, 9, 6, 0x00004118 ),
  EW_GLYPH( 0x00CC, 0, -10, 3, 10, 3, 0x000041CA ),
  EW_GLYPH( 0x00CD, 0, -10, 3, 10, 3, 0x00004209 ),
  EW_GLYPH( 0x00CE, -1, -10, 4, 10, 3, 0x0000424A ),
  EW_GLYPH( 0x00CF, -1, -9, 4, 9, 3, 0x000042A3 ),
  EW_GLYPH( 0x00D0, 0, -7, 7, 7, 7, 0x000042EC ),
  EW_GLYPH( 0x00D1, 0, -10, 7, 11, 7, 0x0000438A ),
  EW_GLYPH( 0x00D2, 0, -10, 7, 10, 7, 0x00004462 ),
  EW_GLYPH( 0x00D3, 0, -10, 7, 10, 7, 0x0000453C ),
  EW_GLYPH( 0x00D4, 0, -10, 7, 10, 7, 0x00004618 ),
  EW_GLYPH( 0x00D5, 0, -10, 7, 11, 7, 0x00004702 ),
  EW_GLYPH( 0x00D6, 0, -9, 7, 9, 7, 0x000047FE ),
  EW_GLYPH( 0x00D7, 0, -5, 5, 4, 5, 0x000048D5 ),
  EW_GLYPH( 0x00D8, 0, -8, 7, 9, 7, 0x0000491D ),
  EW_GLYPH( 0x00D9, 0, -10, 6, 10, 6, 0x00004A11 ),
  EW_GLYPH( 0x00DA, 0, -10, 6, 10, 6, 0x00004AA3 ),
  EW_GLYPH( 0x00DB, 0, -10, 6, 10, 6, 0x00004B37 ),
  EW_GLYPH( 0x00DC, 0, -9, 6, 9, 6, 0x00004BD9 ),
  EW_GLYPH( 0x00DD, 0, -10, 6, 10, 6, 0x00004C69 ),
  EW_GLYPH( 0x00DE, 0, -7, 6, 7, 6, 0x00004D1A ),
  EW_GLYPH( 0x00DF, 0, -8, 6, 8, 6, 0x00004DA1 ),
  EW_GLYPH( 0x00E0, 0, -8, 5, 8, 5, 0x00004E38 ),
  EW_GLYPH( 0x00E1, 0, -8, 5, 8, 5, 0x00004ED8 ),
  EW_GLYPH( 0x00E2, 0, -8, 5, 8, 5, 0x00004F7A ),
  EW_GLYPH( 0x00E3, 0, -9, 5, 9, 5, 0x0000502A ),
  EW_GLYPH( 0x00E4, 0, -7, 5, 7, 5, 0x000050EA ),
  EW_GLYPH( 0x00E5, 0, -8, 5, 8, 5, 0x00005189 ),
  EW_GLYPH( 0x00E6, 0, -5, 8, 5, 8, 0x00005229 ),
  EW_GLYPH( 0x00E7, 0, -5, 5, 8, 5, 0x000052F0 ),
  EW_GLYPH( 0x00E8, 0, -8, 5, 8, 5, 0x00005390 ),
  EW_GLYPH( 0x00E9, 0, -8, 5, 8, 5, 0x00005438 ),
  EW_GLYPH( 0x00EA, 0, -8, 5, 8, 5, 0x000054E2 ),
  EW_GLYPH( 0x00EB, 0, -7, 5, 7, 5, 0x0000559A ),
  EW_GLYPH( 0x00EC, -1, -8, 3, 8, 2, 0x00005641 ),
  EW_GLYPH( 0x00ED, 0, -8, 3, 8, 2, 0x0000567A ),
  EW_GLYPH( 0x00EE, -1, -8, 4, 8, 2, 0x000056B5 ),
  EW_GLYPH( 0x00EF, -1, -7, 4, 7, 2, 0x00005706 ),
  EW_GLYPH( 0x00F0, 0, -8, 6, 8, 6, 0x00005747 ),
  EW_GLYPH( 0x00F1, 0, -9, 6, 9, 6, 0x0000580B ),
  EW_GLYPH( 0x00F2, 0, -8, 6, 8, 6, 0x000058A3 ),
  EW_GLYPH( 0x00F3, 0, -8, 6, 8, 6, 0x00005967 ),
  EW_GLYPH( 0x00F4, 0, -8, 6, 8, 6, 0x00005A2D ),
  EW_GLYPH( 0x00F5, 0, -9, 6, 9, 6, 0x00005B01 ),
  EW_GLYPH( 0x00F6, 0, -7, 6, 7, 6, 0x00005BE6 ),
  EW_GLYPH( 0x00F7, 0, -7, 6, 7, 6, 0x00005CA8 ),
  EW_GLYPH( 0x00F8, 0, -6, 6, 7, 6, 0x00005D24 ),
  EW_GLYPH( 0x00F9, 0, -8, 5, 8, 6, 0x00005DDD ),
  EW_GLYPH( 0x00FA, 0, -8, 5, 8, 6, 0x00005E45 ),
  EW_GLYPH( 0x00FB, 0, -8, 5, 8, 6, 0x00005EAF ),
  EW_GLYPH( 0x00FC, 0, -7, 5, 7, 6, 0x00005F27 ),
  EW_GLYPH( 0x00FD, 0, -8, 5, 10, 5, 0x00005F8E ),
  EW_GLYPH( 0x00FE, 0, -8, 6, 10, 6, 0x0000603B ),
  EW_GLYPH( 0x00FF, 0, -7, 5, 9, 5, 0x000060EA ),

  EW_FONT_PIXEL( ClimateSmallFont, 0x00006194 )                 /* ratio 85.94 % */
    0xB9EFBDDF, 0x2C72BFE7, 0x39584411, 0x9FE7B9D6, 0x5F8801BF, 0x15E79EFE, 0x9E79E0AC,
    0x2FFAFF87, 0xDFD7FD77, 0xCFB9F79D, 0x9F79F79D, 0x5EFDF7DF, 0x8027FD7B, 0xFFEFD035,
    0x8B767511, 0xFB787918, 0x69DFA93F, 0x9C7927CF, 0xFF7BE3FB, 0x89FFFE53, 0x1E35EDE7,
    0x7BF3DBCF, 0x35FFFFE4, 0x259F7FCC, 0xC5FCF2A2, 0x9E6FE792, 0xFEEFC0FF, 0x83F7350A,
    0xCF4C9EF3, 0x88DAB7BD, 0xE39AEFE8, 0x21AC799C, 0xF84F30E8, 0x04AC9CA6, 0xDF139256,
    0x69589E64, 0xF19762BE, 0x693C24F7, 0x2F5AEDFC, 0xD39EB163, 0x88FD7F9E, 0x3D6FCA6F,
    0xE003D008, 0xF1DF73BD, 0x00EFB9DE, 0xD6780DF8, 0x97DFF9FF, 0xE65E23F1, 0xE6C61EC7,
    0xFCF4C87B, 0xF9EF0BB9, 0xDE73C8D7, 0x09090DB9, 0xA8C467F3, 0x3B78DA73, 0x06DF115E,
    0xFF3BE000, 0x6D39C732, 0xE2225CB5, 0xF275F17B, 0xF679E0F5, 0xFE77C3BD, 0x7739C735,
    0xFB8856BE, 0xCFFEE2BD, 0xB9E5616A, 0x0583F62F, 0x1BA1FFF1, 0xBAEF1223, 0xBDDF3DFD,
    0x7BBE3DFD, 0x4BDEF32F, 0xFEE4CFFC, 0x9CA42FF7, 0x66623B99, 0x85FDEEFE, 0x9DF04EF8,
    0xCF7AC613, 0x9BBDAE63, 0x3D633911, 0x77F23391, 0xF7BDEBEF, 0x7BDEF1DE, 0xD85D606B,
    0xDF87F585, 0x7BC1FCC4, 0x39E465FE, 0xDC64B02D, 0x5FFDCADD, 0x9C730839, 0x3B3DE3FB,
    0x37DE719F, 0xABC9E7AF, 0xDF49EE3C, 0xADB59FC9, 0xC60FE5FC, 0x83F97F2F, 0xC61FFD67,
    0xFDFBF55B, 0xDFBEA04A, 0xF7BDC6AF, 0xFFBDEE3F, 0xD7FDEF71, 0x7D5FA83B, 0xBEAFD413,
    0xEA7EFB99, 0x61F351BD, 0x30D3FDF2, 0x07C61F19, 0x0DE7BBF5, 0xECF7DB9E, 0xE75BF38F,
    0x7F51FF5F, 0x3C554B7D, 0xD60462A3, 0xF58D4B12, 0xFF3FFAAF, 0x7FD6395B, 0xEF97FF7F,
    0xFA82FBEE, 0x4206B383, 0x0727987F, 0xA67DDFBE, 0xDFCF7BAA, 0xEE2308F9, 0x9EEA3F3D,
    0xBA86309C, 0xDEEA3E77, 0xDEEA035F, 0x777DA9FD, 0xF7DEF78A, 0x979E1AA8, 0x47838783,
    0x78AF50D5, 0xDC47BDCF, 0x37BA9A7B, 0x41F7E217, 0x7E224424, 0x5737BA9F, 0x50EF7BDC,
    0xA801DEF7, 0xBDD4FF7B, 0xF7BA807F, 0xBDEF713E, 0x077BDD43, 0x51FDEEA0, 0x8000FEF7,
    0xC43DDFFA, 0x555F6E7B, 0x758E5D43, 0x6EB1C477, 0xD3812AAA, 0x7E22FF77, 0xA0000778,
    0xBA93BDEE, 0x40004EF7, 0xE30001FC, 0xF8080007, 0xDDFD154D, 0x5FA3F1DD, 0xF9E2F998,
    0x01BF987F, 0xE33078EE, 0x1EE2137B, 0x000003F1, 0x7BDD4000, 0xFAC0EE23, 0xE63F0FCB,
    0x2DF0AA13, 0x52FCC3F7, 0xF05EF3C2, 0x83FC62CD, 0x607E30DF, 0x0DEF8145, 0xCC0FDF88,
    0xB187C078, 0x73886FEF, 0x86AA3DEF, 0xE0C1C35A, 0xB52AA860, 0xF7BE9C46, 0xBFBDEE78,
    0x37FDEF34, 0x6FFBDE60, 0x025FDEF3, 0x6FEFB180, 0x3DEF7388, 0xC35A86AA, 0xA860E0C1,
    0x388D6A1A, 0xD8CD7EF7, 0x8C06FFF7, 0xF3DEE31D, 0x98CF750B, 0x9737BA80, 0xE780DFBA,
    0x9F5B7849, 0x8F71AAF3, 0xD77A56B9, 0x88DE7DB8, 0x7AD6BBF1, 0xB8CEE223, 0xBDDFDF27,
    0xB77EFEF7, 0x0000FEFB, 0xE1F78000, 0x08000179, 0xCEF72E70, 0x9DCE4E71, 0xE1EFDFE4,
    0xBF1FCCF9, 0x15C8E629, 0xF077DFDC, 0x0F503D54, 0xD730E1FA, 0xB946AFFF, 0xB7FFCAA3,
    0x1CE4153D, 0x7299A8B1, 0xBFBFFE0E, 0x946A6DFD, 0x58FCF2CA, 0x7E4F13EF, 0x2FBF5FAF,
    0x9E22ACF1, 0xD7F5F0F5, 0xDF89E331, 0xB7CC9DEF, 0xBE3AFC7F, 0xBEB0BEB9, 0x07EFC2DF,
    0xEF7BAC00, 0x33DEEB5D, 0xBC1BBE26, 0x2633C1FF, 0x8DF87EF9, 0xEE3BEF7B, 0x00001732,
    0xF83BD730, 0xDF83C63E, 0xE0843CC3, 0xFDDF9E4C, 0xA5C0005F, 0xBDE18C5B, 0xEF7BDD77,
    0xF2299F9A, 0xBECC7777, 0xCBBDD735, 0xFFE5DDF7, 0x0FC6E33B, 0xA7DAC000, 0x61A9FF89,
    0x44669A86, 0x35BFF14D, 0xCAE7777C, 0xA9F9DFDB, 0x56B53F3E, 0x17E07EDE, 0x3D9D6000,
    0x59FEEFE5, 0x08AAC115, 0xF8FF77F2, 0x3FF5CECE, 0xFDF76FEF, 0xDF3DF472, 0xB1FB3FFB,
    0xD277C64E, 0xA9DFD4E4, 0xCEB0003F, 0xEEFE47FE, 0x6227AC3F, 0x92C44F59, 0xC60FFBBF,
    0xF73EC239, 0xF8000FE7, 0x6F78D7DD, 0x001348C5, 0x2CF5CD73, 0xD39A7300, 0xC6E0005A,
    0x00BCF59A, 0xF83DF800, 0x273587DD, 0xDE3039D6, 0x800178CF, 0x7FA7FFB1, 0xAF7FC3F7,
    0x692D33BE, 0x40000158, 0xC97DDFEC, 0x091856F7, 0x59CEB000, 0xDFDEEFC6, 0xDF88BF98,
    0xDF88BF9C, 0x7F7BBF1C, 0x34FBFE23, 0x5695BFF1, 0xA22B2D44, 0x5FDFF896, 0x802CFB9A,
    0xA31FFB3E, 0x8BF99FEE, 0x1822FE60, 0xAC1FFBBF, 0xFD6007B3, 0x01FC718E, 0x28BFBBF1,
    0xEECF3CFB, 0xDF7F335E, 0xFBFB9D6F, 0xFA9C4FC4, 0x801FA9C5, 0xF1F8BF58, 0x2394C007,
    0x9E5D1EEA, 0x65FB8EFE, 0xF7FFA444, 0xB3D33E67, 0xB53D65AC, 0x615DB7FD, 0xFB0873FC,
    0x4F3777D6, 0xF98F118C, 0x7A399EFA, 0x78FD7A3C, 0xC6B1CDBB, 0xDFD3D3D3, 0xAE52F9DF,
    0x2B1F3FF4, 0xBAC2A317, 0xBBDEEB2F, 0x92D7FDD6, 0x17CE27EF, 0x1AFB9C7A, 0x81CCDD1F,
    0x0FD87FF0, 0x0F3C0821, 0x005E2BBF, 0x97E837C0, 0xF3C4C411, 0x0662D9E7, 0x7CD39278,
    0x1E6675A7, 0x35CD7327, 0x208603D7, 0xDCBF1360, 0xDFDBEEF9, 0x478F5478, 0x7EDF77AD,
    0xD93B97E2, 0xFA3F7DC8, 0xD1E259BB, 0x58FF6AB5, 0xB090FF73, 0x02FBDF6A, 0xFDDDFBEA,
    0xDEF75ACD, 0xE329EAB5, 0x4B33C02B, 0xF759EBBD, 0x58B5AAF6, 0xBD88ED6B, 0x7AFBEFBC,
    0x9FFE73FE, 0x7DEFBEE7, 0x9F7DDB9E, 0x67DF76E7, 0xC778C0BC, 0xDA73DE0B, 0x3519CE33,
    0xE2BF13E7, 0xBEFC5FDC, 0xFBF319DF, 0xF8D477EF, 0xEDF2BB9D, 0x3CDF2B9C, 0xAAB98C67,
    0x1BCE7BC5, 0xFD9CFB7C, 0x389CEBA9, 0xCF739E35, 0xB9D46353, 0xC751A9E7, 0xB7CA7139,
    0xFC9FD9CF, 0xEFCE33FF, 0x1857FF59, 0xB93E67CC, 0xEE407ED7, 0xDEE79FB5, 0x6EF73EFB,
    0xF78AFBFF, 0xF6F8379C, 0xDCF3FB39, 0x2A75FFBC, 0x8A9FBB1F, 0xA8DFEC7C, 0x13DE6E78,
    0x9CFB7CA7, 0xBDEE79FD, 0xEA9FFF11, 0x7823D511, 0x9E775803, 0x973CEEBB, 0xDEF73C37,
    0x33FFF8DF, 0x7FF44577, 0xC6B7F33C, 0x47318FF9, 0xF38D77E8, 0xACCABF2D, 0x000FF3F8,
    0xEE062230, 0xFFF38C1E, 0x373BE007, 0xF85C13D6, 0x24EEC605, 0xFEFE04D7, 0xB47FCCE6,
    0xA31FE3D9, 0x995F7BC1, 0xDE640337, 0x32C6B18C, 0x38C0338E, 0xF01EB0CE, 0xED3C2C7C,
    0xA7FF9049, 0x73A73CFE, 0xBBCFE64F, 0xEFD331EA, 0xE03D63D6, 0xDA7858F9, 0xF3FF2093,
    0xE9CF4FFF, 0x4FE615DC, 0xE9987FF4, 0x9CF5BF99, 0x08F3C07F, 0xF1ABE78B, 0xFF13EE24,
    0xFECE7BF8, 0xFCC4F6FD, 0x9987AAF5, 0x7F0F5BBF, 0xDF1FC3F8, 0xC927278F, 0x3F7759AA,
    0x00A607E6, 0x83FA805F, 0x7F4206B3, 0xBE072798, 0xAAA67DDF, 0xF9DFCF7B, 0x82BF0308,
    0x417C82CC, 0x0359C1FD, 0x93CC3FA1, 0x3EEFDF03, 0xE7BDD553, 0xC1847CEF, 0xEF380FF3,
    0xA82D5F84, 0x206B383F, 0x727987F4, 0x67DDFBE0, 0xFCF7BAAA, 0x00308F9D, 0xEA2F5FE2,
    0x7D4F033D, 0x9C1FD41F, 0xC3FA1035, 0xFDF0393C, 0xDD5533EE, 0x47CEFE7B, 0xC6AAE618,
    0x7F50D55C, 0xE840D670, 0xC0E4F30F, 0x54CFBBF7, 0x3BF9EF75, 0xACF0611F, 0x0AB3C002,
    0x1ACE0FEA, 0x9E61FD08, 0xF77EF81C, 0x3DEEAA99, 0x0C23E77F, 0xFDEF7388, 0x7BEADF83,
    0xBFF950FF, 0xDD6BD380, 0xBB9EB0BB, 0xDC8BBDE7, 0xBC13FEF7, 0xDEF75197, 0x14EEFB50,
    0x51EFBDEF, 0x072F3C35, 0xAA8F070F, 0x9EF15EA1, 0x7BF50F7B, 0x83FC897F, 0x4C1F9868,
    0xF7105F01, 0xBDD43BDE, 0xDEEA0077, 0x1FEF753F, 0x0FBDEEA0, 0x42CC857E, 0xF7BDC4BE,
    0x1DEF750E, 0x4FF7BA80, 0xA807FBDD, 0xF3C3EF7B, 0xE2779C0F, 0x7BDC4B57, 0xDEF750EF,
    0xFF7BA801, 0x807FBDD4, 0xE63EF7BA, 0x6AAE66AA, 0x43BDEF71, 0xA0077BDD, 0xF753FDEE,
    0xDEEA01FE, 0x14CFCCFB, 0x003F88BE, 0xB32AFC00, 0x007F15F2, 0xE1FE7800, 0x96AFD3BC,
    0x000003F8, 0xAE7AAB98, 0x0007F16A, 0xF3DEE000, 0x0F89EF22, 0x3BCFF2F4, 0x41DE7F88,
    0x9EF22F40, 0xBFC400F8, 0x067BD45E, 0xC63EFA9E, 0xE30DF83F, 0xF8145607, 0xFDF880DE,
    0x7C078CC0, 0x05303F30, 0xDF6302F8, 0xDEE710DF, 0xB50D547B, 0xC1C18386, 0x8D6A5550,
    0x81EF7D38, 0x4166415F, 0xFDF630BE, 0xBDEE710D, 0x6B50D547, 0x0C1C1838, 0x88D6A555,
    0x3C1EF7D3, 0x4EF380FF, 0xD8C2D5F8, 0xB9C437F7, 0x43551EF7, 0x7060E1AD, 0x5A955430,
    0x7BDF4E23, 0x5EBFC400, 0x9E067BD4, 0x7D8C3EFA, 0x7B9C437F, 0xD43551EF, 0x07060E1A,
    0x35A95543, 0x87BDF4E2, 0x5731AAB9, 0xBFBEC635, 0xF7BDCE21, 0x0D6A1AA8, 0xA1838307,
    0x711AD4AA, 0x5AA3DEFA, 0x69DFDD75, 0x1A77F750, 0xEEFB1844, 0x6FEFA71F, 0x538AAD45,
    0x08B74315, 0x3D446375, 0x3CAB59FF, 0xB7C3EDCF, 0x0FCC1EEF, 0x782F80A6, 0x00179E1F,
    0x72E70080, 0xE4E71CEF, 0x5990AFC4, 0xE1F797C8, 0x08000179, 0xCEF72E70, 0x9E4E4E71,
    0x13BCE07F, 0x87DE5ABF, 0x200005E7, 0x3BDCB9C0, 0xCD3939C7, 0xD55CCD55, 0x05E787DE,
    0xB9C02000, 0x39C73BDC, 0x642BF139, 0x9DE5F216, 0xFC7FB7CC, 0xBEB9BE3A, 0xC2DFBEB0,
    0xC40007EF, 0x4D3DD40F, 0xFE0A33DD, 0xDD43FE03, 0xD3DD4A33, 0xF18767BC, 0x243C5A9C,
    0xE0B3053C, 0x17690777, 0xE63DF9DF, 0x85F02987, 0xB31DDDFC, 0xEF75CD6F, 0xF9777DF2,
    0xF8B8CEFF, 0xBE459915, 0xCC7777F2, 0xBDD735BE, 0xE5DDF7CB, 0xF2E33BFF, 0x4EF383FC,
    0x77F2B57E, 0x35BECC77, 0xF7CBBDD7, 0x3BFFE5DD, 0xAFF102E3, 0x7867BD57, 0x77F2FBEA,
    0x35BECC77, 0xF7CBBDD7, 0x3BFFE5DD, 0xDAAB9AE3, 0xBBF9D55C, 0x9ADF663B, 0xFBE5DEEB,
    0x9DFFF2EE, 0x00AB3D71, 0xBBF92ACF, 0x9ADF663B, 0xFBE5DEEB, 0x9DFFF2EE, 0x7EFFC771,
    0xE70FF9EF, 0x73CF4E72, 0x7CF7799F, 0x7BCCFBDF, 0x3277DFFF, 0xBBBE59CE, 0xEFEDE573,
    0x9F9F54FC, 0x3F6F2B5A, 0xF24BF7BE, 0x87E6688F, 0xDF05F029, 0xE7FEB9D9, 0x5FBEEDFD,
    0x7BE7BE8E, 0xF83F67FF, 0xBE459915, 0xFAE7677C, 0xFBB7F79F, 0x9EFA397E, 0xFD9FFDEF,
    0x79C1FE78, 0x7C5ABF27, 0x9FFAE767, 0x7EFBB7F7, 0xEF9EFA39, 0x98FD9FFD, 0xD55CDAAB,
    0xFD73B3BE, 0x7DDBFBCF, 0xCF7D1CBF, 0x7ECFFEF7, 0x5F0A67E6, 0xF8002F18, 0x6BE56655,
    0xF3C000BC, 0x7E9DE70F, 0x00178CB5, 0x73D55CC0, 0x002F1B55, 0x931BEB00, 0xC40FFFF5,
    0x89F665FF, 0xCFFDDFCC, 0x9E290A88, 0xF6FCCA88, 0x5FE200EE, 0xC19EF52F, 0xEC47DF53,
    0xF7C97DDF, 0x00091856, 0x02983F30, 0x673AC0BE, 0x7F7BBF19, 0x7E22FE63, 0x7E22FE73,
    0xFDEEFC73, 0x990AFC0D, 0xCEB17C85, 0xDEEFC659, 0x88BF98DF, 0x88BF9CDF, 0x7BBF1CDF,
    0x1FE7837F, 0xAFC4EF38, 0x659CEB16, 0x8DFDEEFC, 0xCDF88BF9, 0xCDF88BF9, 0x37F7BBF1,
    0x4BD7F880, 0xD4F067BD, 0xB39D61F7, 0xBFBDDF8C, 0xBF117F31, 0xBF117F39, 0xFEF77E39,
    0x99AAB986, 0xCE759AAB, 0xFEF77E32, 0xFC45FCC6, 0xFC45FCE6, 0xFBDDF8E6, 0xC26B001B,
    0xEF7BAC9A, 0xF7BDD67D, 0x6B09AC3E, 0xE73AC502, 0xE73BBF18, 0xFCE7BF98, 0xD7FDFCE6,
    0x7759E39E, 0xC59CFB0F, 0xBE0530FC, 0x00FE3F10, 0xDD447298, 0xB322BF03, 0xF8FC57C8,
    0x11CA6003, 0x3FCF0F75, 0x57E4EF38, 0x03F8FC4B, 0x7511CA60, 0x9B55730F, 0xFC7E3AAB,
    0x88E53001, 0x22BF07BA, 0x9E97C8B3, 0xCEFEFE9E, 0xFFA57297, 0x18B958F9, 0x897DD615,
    0xB980001F, 0xF7FE22CF, 0xC2A22B4B, 0xFB10A88A, 0xCFFE697E, 0x6D55CC02, 0x3D3D6AAE,
    0x2F9DFDFD, 0xF3FF4AE5, 0x2A3172B1, 0x0002FBAC
EW_END_OF_FONT_RES( ClimateSmallFont )

/* Table with links to derived variants of the font resource : 'Climate::SmallFont' */
EW_RES_WITHOUT_VARIANTS( ClimateSmallFont )

/* Color constant according UI design. */
const XColor ClimateHumidityColor = { 0x00, 0xC9, 0xFF, 0xFF };

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateDashLineV )
  EW_BITMAP_FRAMES( ClimateDashLineV, Default, EW_DRIVER_VARIANT_ALPHA8, 2, 320, 0 )
    EW_BITMAP_FRAME( 0, 0, 2, 8, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateDashLineV, Default )              /* ratio 15.63 % */
    0x1C080100, 0xBFE05048, 0x160F0883, 0x6120085C, 0x1D058642, 0x50488422, 0x068A42A2,
    0x28CC622D, 0x8D436371, 0xF3FE2D1B, 0x48249228, 0x9E43258C, 0xE51298A4, 0x592D884A,
    0x131864BE, 0x3585CCE6, 0xB88CDE69, 0x81CF62B3, 0xE4FE7139, 0x4764D0E8, 0x265D4795,
    0x66D4B995, 0x854F9D53, 0x00080C4A, 0x00000000

  EW_BITMAPS_TABLE( ClimateDashLineV )
    EW_BITMAP( ClimateDashLineV, Default )
EW_END_OF_BITMAP_RES( ClimateDashLineV )

/* Table with links to derived variants of the bitmap resource : 'Climate::DashLineV' */
EW_RES_WITHOUT_VARIANTS( ClimateDashLineV )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateDashLineH )
  EW_BITMAP_FRAMES( ClimateDashLineH, Default, EW_DRIVER_VARIANT_ALPHA8, 520, 2, 0 )
    EW_BITMAP_FRAME( 0, 0, 8, 2, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateDashLineH, Default )              /* ratio 10.38 % */
    0x1C09FF00, 0x3FE0B048, 0x2A130800, 0xA130C85C, 0x1B0387C1, 0x11089C4A, 0x0B8BC4E2,
    0xC8C43E2B, 0x83468011, 0x2C7E311D, 0x48E2F218, 0x9E292582, 0xE2529814, 0x192D964A,
    0x33183CBE, 0x369ACBE3, 0x3854E257, 0x9BC3A773, 0xF5023D3E, 0x516833D9, 0x1E7743A2,
    0xE7149A55, 0x6B4DA752, 0x351A953E, 0x55AB54E6, 0x0004065B, 0x00000000

  EW_BITMAPS_TABLE( ClimateDashLineH )
    EW_BITMAP( ClimateDashLineH, Default )
EW_END_OF_BITMAP_RES( ClimateDashLineH )

/* Table with links to derived variants of the bitmap resource : 'Climate::DashLineH' */
EW_RES_WITHOUT_VARIANTS( ClimateDashLineH )

/* Initializer for the class 'Climate::StartButton' */
void ClimateStartButton__Init( ClimateStartButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsWallpaper__Init( &_this->Wallpaper, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateStartButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0048 );
  CoreView_OnSetLayout((CoreView)&_this->Wallpaper, CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz );
  CoreRectView__OnSetBounds( &_this->Wallpaper, _Const0049 );
  ViewsWallpaper_OnSetColor( &_this->Wallpaper, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const004A );
  ViewsRectangle_OnSetColor( &_this->Rectangle, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const004B );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateStartColor );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const004C );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const004D );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const004E );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const004F );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const004B );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Text, _Const0050 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0051 ));
  ViewsText_OnSetColor( &_this->Text, ClimateTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Wallpaper ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  ViewsWallpaper_OnSetBitmap( &_this->Wallpaper, EwLoadResource( &ClimateWiper, 
  ResourcesBitmap ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ClimateStartButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ClimateStartButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ClimateStartButton_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ClimateStartButton_pressReleaseSlot 
  );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ClimateLargeFont, ResourcesFont 
  ));
}

/* Re-Initializer for the class 'Climate::StartButton' */
void ClimateStartButton__ReInit( ClimateStartButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsWallpaper__ReInit( &_this->Wallpaper );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsRectangle__ReInit( &_this->Background );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'Climate::StartButton' */
void ClimateStartButton__Done( ClimateStartButton _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateStartButton );

  /* Finalize all embedded objects */
  ViewsWallpaper__Done( &_this->Wallpaper );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsRectangle__Done( &_this->Background );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::StartButton' */
void ClimateStartButton__Mark( ClimateStartButton _this )
{
  EwMarkObject( &_this->Wallpaper );
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->Text );
  EwMarkSlot( _this->OnAction );
  EwMarkRef( _this->IsRunning );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateStartButton_UpdateLayout( ClimateStartButton _this, XPoint aSize )
{
  XInt32 y;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  y = _this->Wallpaper.Bitmap->FrameSize.Y;
  CoreRectView__OnSetBounds( &_this->Wallpaper, EwNewRect( 0, 0, aSize.X, y ));
  CoreRectView__OnSetBounds( &_this->Rectangle, EwNewRect( 0, y, aSize.X, aSize.Y 
  ));
  CoreRectView__OnSetBounds( &_this->Background, EwNewRect( 0, y, aSize.X, aSize.Y 
  - ClimateSpacing.Y ));
  CoreRectView__OnSetBounds( &_this->Border, _this->Background.Super1.Bounds );
  CoreRectView__OnSetBounds( &_this->Text, EwNewRect( ClimateSpacing.X, ClimateSpacing.Y, 
  aSize.X, aSize.Y - ClimateSpacing.Y ));
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, EwNewPoint( 0, y ));
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, EwNewPoint( aSize.X, y ));
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, EwNewPoint( aSize.X, aSize.Y 
  ));
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, EwNewPoint( 0, aSize.Y ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateStartButton_UpdateViewState( ClimateStartButton _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->IsRunning.Object == 0 )
    return;

  if ( EwOnGetBool( _this->IsRunning ))
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0052 ));
  else
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0051 ));

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBorderColor );
  else
  {
    if ( EwOnGetBool( _this->IsRunning ))
      ViewsRectangle_OnSetColor( &_this->Background, ClimateBorderColor );
    else
      ViewsRectangle_OnSetColor( &_this->Background, ClimateStartColor );
  }
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateStartButton_enterLeaveSlot( ClimateStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateStartButton_pressReleaseSlot( ClimateStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    if ( _this->IsRunning.Object != 0 )
      EwOnSetBool( _this->IsRunning, (XBool)!EwOnGetBool( _this->IsRunning ));

    EwSignal( _this->OnAction, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Climate::StartButton.OnSetIsRunning()' */
void ClimateStartButton_OnSetIsRunning( ClimateStartButton _this, XRef value )
{
  if ( !EwCompRef( value, _this->IsRunning ))
    return;

  if ( _this->IsRunning.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, ClimateStartButton_onUpdate ), _this->IsRunning, 
      0 );

  _this->IsRunning = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, ClimateStartButton_onUpdate ), value, 
      0 );

  EwPostSignal( EwNewSlot( _this, ClimateStartButton_onUpdate ), ((XObject)_this 
    ));
}

/* Slot method to update the display value. */
void ClimateStartButton_onUpdate( ClimateStartButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwSignal( _this->OnAction, ((XObject)_this ));
}

/* Variants derived from the class : 'Climate::StartButton' */
EW_DEFINE_CLASS_VARIANTS( ClimateStartButton )
EW_END_OF_CLASS_VARIANTS( ClimateStartButton )

/* Virtual Method Table (VMT) for the class : 'Climate::StartButton' */
EW_DEFINE_CLASS( ClimateStartButton, CoreGroup, "Climate::StartButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateStartButton_UpdateLayout,
  ClimateStartButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateStartButton )

/* Constant to define the size of the diagram. */
const XRect ClimateChartStartPos = {{ 0, 0 }, { 320, 183 }};

/* Initializer for the class 'Climate::StatusBar' */
void ClimateStatusBar__Init( ClimateStatusBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->RectOp, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextTime, &_this->_XObject, 0 );
  ViewsText__Init( &_this->ValueTime, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextTemp, &_this->_XObject, 0 );
  ViewsText__Init( &_this->ValueTemp, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line0, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextOp, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->RemainingTimeObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->ActualTempObserver, &_this->_XObject, 0 );
  CorePropertyObserver__Init( &_this->RunningObserver, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateStatusBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0053 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const0053 );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateSelectColor );
  CoreView_OnSetLayout((CoreView)&_this->RectOp, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->RectOp, _Const0054 );
  ViewsRectangle_OnSetColor( &_this->RectOp, ClimateStartColor );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const0055 );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->TextTime, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  );
  CoreRectView__OnSetBounds( &_this->TextTime, _Const0056 );
  ViewsText_OnSetEllipsis( &_this->TextTime, 1 );
  ViewsText_OnSetAlignment( &_this->TextTime, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextTime, EwLoadString( &_Const0057 ));
  ViewsText_OnSetColor( &_this->TextTime, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->ValueTime, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  );
  CoreRectView__OnSetBounds( &_this->ValueTime, _Const0058 );
  ViewsText_OnSetWrapText( &_this->ValueTime, 1 );
  ViewsText_OnSetAlignment( &_this->ValueTime, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ValueTime, EwLoadString( &_Const0059 ));
  ViewsText_OnSetColor( &_this->ValueTime, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->TextTemp, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  );
  CoreRectView__OnSetBounds( &_this->TextTemp, _Const005A );
  ViewsText_OnSetEllipsis( &_this->TextTemp, 1 );
  ViewsText_OnSetAlignment( &_this->TextTemp, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextTemp, EwLoadString( &_Const005B ));
  ViewsText_OnSetColor( &_this->TextTemp, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->ValueTemp, CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  );
  CoreRectView__OnSetBounds( &_this->ValueTemp, _Const005C );
  ViewsText_OnSetWrapText( &_this->ValueTemp, 1 );
  ViewsText_OnSetAlignment( &_this->ValueTemp, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ValueTemp, EwLoadString( &_Const005D ));
  ViewsText_OnSetColor( &_this->ValueTemp, ClimateGraphColor );
  CoreView_OnSetLayout((CoreView)&_this->Line, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const005E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const005F );
  ViewsLine_OnSetColor( &_this->Line, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->Line0, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line0, _Const0060 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line0, _Const0061 );
  ViewsLine_OnSetColor( &_this->Line0, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->TextOp, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToTop | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->TextOp, _Const0054 );
  ViewsText_OnSetWrapText( &_this->TextOp, 1 );
  ViewsText_OnSetAlignment( &_this->TextOp, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TextOp, EwLoadString( &_Const0062 ));
  ViewsText_OnSetColor( &_this->TextOp, ClimateTextColor );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RectOp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextTime ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueTime ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextTemp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueTemp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextOp ), 0 );
  ViewsText_OnSetFont( &_this->TextTime, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->ValueTime, EwLoadResource( &ClimateLargeFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TextTemp, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->ValueTemp, EwLoadResource( &ClimateLargeFont, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TextOp, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  _this->RemainingTimeObserver.OnEvent = EwNewSlot( _this, ClimateStatusBar_onUpdate 
  );
  CorePropertyObserver_OnSetOutlet( &_this->RemainingTimeObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetRemainingTime, ClimateDeviceClass_OnSetRemainingTime 
  ));
  _this->ActualTempObserver.OnEvent = EwNewSlot( _this, ClimateStatusBar_onUpdate 
  );
  CorePropertyObserver_OnSetOutlet( &_this->ActualTempObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetActualTemp, ClimateDeviceClass_OnSetActualTemp 
  ));
  _this->RunningObserver.OnEvent = EwNewSlot( _this, ClimateStatusBar_onUpdate );
  CorePropertyObserver_OnSetOutlet( &_this->RunningObserver, EwNewRef( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass ), ClimateDeviceClass_OnGetRunning, ClimateDeviceClass_OnSetRunning 
  ));
}

/* Re-Initializer for the class 'Climate::StatusBar' */
void ClimateStatusBar__ReInit( ClimateStatusBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsRectangle__ReInit( &_this->RectOp );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->TextTime );
  ViewsText__ReInit( &_this->ValueTime );
  ViewsText__ReInit( &_this->TextTemp );
  ViewsText__ReInit( &_this->ValueTemp );
  ViewsLine__ReInit( &_this->Line );
  ViewsLine__ReInit( &_this->Line0 );
  ViewsText__ReInit( &_this->TextOp );
  CorePropertyObserver__ReInit( &_this->RemainingTimeObserver );
  CorePropertyObserver__ReInit( &_this->ActualTempObserver );
  CorePropertyObserver__ReInit( &_this->RunningObserver );
}

/* Finalizer method for the class 'Climate::StatusBar' */
void ClimateStatusBar__Done( ClimateStatusBar _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateStatusBar );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsRectangle__Done( &_this->RectOp );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->TextTime );
  ViewsText__Done( &_this->ValueTime );
  ViewsText__Done( &_this->TextTemp );
  ViewsText__Done( &_this->ValueTemp );
  ViewsLine__Done( &_this->Line );
  ViewsLine__Done( &_this->Line0 );
  ViewsText__Done( &_this->TextOp );
  CorePropertyObserver__Done( &_this->RemainingTimeObserver );
  CorePropertyObserver__Done( &_this->ActualTempObserver );
  CorePropertyObserver__Done( &_this->RunningObserver );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::StatusBar' */
void ClimateStatusBar__Mark( ClimateStatusBar _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->RectOp );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->TextTime );
  EwMarkObject( &_this->ValueTime );
  EwMarkObject( &_this->TextTemp );
  EwMarkObject( &_this->ValueTemp );
  EwMarkObject( &_this->Line );
  EwMarkObject( &_this->Line0 );
  EwMarkObject( &_this->TextOp );
  EwMarkObject( &_this->RemainingTimeObserver );
  EwMarkObject( &_this->ActualTempObserver );
  EwMarkObject( &_this->RunningObserver );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateStatusBar_UpdateLayout( ClimateStatusBar _this, XPoint aSize )
{
  XInt32 dx;
  XInt32 y;
  XInt32 x1;
  XInt32 x2;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  dx = ClimateSpacing.X / 2;
  y = ( aSize.Y * 3 ) / 5;
  x1 = ( aSize.X * 7 ) / 26;
  x2 = (( aSize.X - x1 ) / 2 ) + x1;
  CoreRectView__OnSetBounds( &_this->RectOp, EwNewRect( 0, 0, x1, aSize.Y ));
  CoreRectView__OnSetBounds( &_this->TextOp, _this->RectOp.Super1.Bounds );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, EwNewPoint( x1, 0 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, EwNewPoint( x1, aSize.Y ));
  CoreRectView__OnSetBounds( &_this->ValueTemp, EwNewRect( x1 + dx, 0, x2, y ));
  CoreRectView__OnSetBounds( &_this->TextTemp, EwNewRect( x1 + dx, y, x2, aSize.Y 
  ));
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line0, EwNewPoint( x2, 0 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line0, EwNewPoint( x2, aSize.Y 
  ));
  CoreRectView__OnSetBounds( &_this->ValueTime, EwNewRect( x2 + dx, 0, aSize.X, 
  y ));
  CoreRectView__OnSetBounds( &_this->TextTime, EwNewRect( x2 + dx, y, aSize.X, aSize.Y 
  ));
}

/* Slot method to update the display value. */
void ClimateStatusBar_onUpdate( ClimateStatusBar _this, XObject sender )
{
  XInt32 h;
  XInt32 m;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  h = EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->RemainingTime / 60;
  m = EwGetAutoObject( &ClimateDevice, ClimateDeviceClass )->RemainingTime - ( h 
  * 60 );
  ViewsText_OnSetString( &_this->ValueTime, EwConcatString( EwConcatString( EwConcatString( 
  EwNewStringInt( h, 0, 10 ), EwLoadString( &_Const001B )), EwNewStringInt( m, 2, 
  10 )), EwLoadString( &_Const001C )));
  ViewsText_OnSetString( &_this->ValueTemp, EwConcatString( EwNewStringInt( EwGetAutoObject( 
  &ClimateDevice, ClimateDeviceClass )->ActualTemp, 0, 10 ), EwLoadString( &_Const001D 
  )));
  ViewsText_OnSetVisible( &_this->TextOp, EwGetAutoObject( &ClimateDevice, ClimateDeviceClass 
  )->Running );
  ViewsRectangle_OnSetVisible( &_this->RectOp, EwGetAutoObject( &ClimateDevice, 
  ClimateDeviceClass )->Running );
}

/* Variants derived from the class : 'Climate::StatusBar' */
EW_DEFINE_CLASS_VARIANTS( ClimateStatusBar )
EW_END_OF_CLASS_VARIANTS( ClimateStatusBar )

/* Virtual Method Table (VMT) for the class : 'Climate::StatusBar' */
EW_DEFINE_CLASS( ClimateStatusBar, CoreGroup, "Climate::StatusBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateStatusBar_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateStatusBar )

/* Constant to define the size of the diagram. */
const XRect ClimateStartButtonPos = {{ 8, 171 }, { 104, 240 }};

/* Constant to define the size of the diagram. */
const XRect ClimateStatusBarPos = {{ 104, 183 }, { 312, 228 }};

/* Initializer for the class 'Climate::SliderItem' */
void ClimateSliderItem__Init( ClimateSliderItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ClimateButton__Init( &_this->ButtonUp, &_this->_XObject, 0 );
  ClimateButton__Init( &_this->ButtonDown, &_this->_XObject, 0 );
  ClimateButton__Init( &_this->ButtonOk, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->SliderArea, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line0, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line5, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line6, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line7, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line8, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line9, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line10, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->Triangle, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Thumb, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateSliderItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0063 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const0063 );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateBackColor );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const0063 );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreRectView__OnSetBounds( &_this->ButtonUp, _Const0064 );
  ClimateButton_OnSetCaption( &_this->ButtonUp, EwLoadString( &_Const0065 ));
  CoreRectView__OnSetBounds( &_this->ButtonDown, _Const0066 );
  ClimateButton_OnSetCaption( &_this->ButtonDown, EwLoadString( &_Const0067 ));
  CoreRectView__OnSetBounds( &_this->ButtonOk, _Const0068 );
  ClimateButton_OnSetCaption( &_this->ButtonOk, EwLoadString( &_Const0069 ));
  CoreRectView__OnSetBounds( &_this->SliderArea, _Const006A );
  ViewsRectangle_OnSetColor( &_this->SliderArea, ClimateBorderColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line0, _Const006B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line0, _Const006C );
  ViewsLine_OnSetColor( &_this->Line0, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const006D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const006E );
  ViewsLine_OnSetColor( &_this->Line1, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const006F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0070 );
  ViewsLine_OnSetColor( &_this->Line2, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0071 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const0072 );
  ViewsLine_OnSetColor( &_this->Line3, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const0073 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0074 );
  ViewsLine_OnSetColor( &_this->Line4, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line5, _Const0075 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line5, _Const0076 );
  ViewsLine_OnSetColor( &_this->Line5, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line6, _Const0077 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line6, _Const0078 );
  ViewsLine_OnSetColor( &_this->Line6, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line7, _Const0079 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line7, _Const005F );
  ViewsLine_OnSetColor( &_this->Line7, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line8, _Const007A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line8, _Const007B );
  ViewsLine_OnSetColor( &_this->Line8, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line9, _Const007C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line9, _Const007D );
  ViewsLine_OnSetColor( &_this->Line9, ClimateBackColor );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line10, _Const007E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line10, _Const007F );
  ViewsLine_OnSetColor( &_this->Line10, ClimateBackColor );
  CoreQuadView__OnSetPoint4( &_this->Triangle, _Const0080 );
  CoreQuadView__OnSetPoint3( &_this->Triangle, _Const0081 );
  CoreQuadView__OnSetPoint2( &_this->Triangle, _Const0082 );
  CoreQuadView__OnSetPoint1( &_this->Triangle, _Const0083 );
  ViewsWarpImage_OnSetColor( &_this->Triangle, ClimateTextColor );
  ViewsWarpImage_OnSetOpacity( &_this->Triangle, 192 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0081 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0080 );
  ViewsLine_OnSetColor( &_this->Line, ClimateTextColor );
  CoreRectView__OnSetBounds( &_this->Thumb, _Const0084 );
  ViewsImage_OnSetAutoSize( &_this->Thumb, 1 );
  _this->CurrentValue = 50;
  _this->MaxValue = 100;
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0085 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0086 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const007F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0074 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonUp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonDown ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonOk ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SliderArea ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line6 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line7 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line8 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line9 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Triangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Thumb ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  _this->ButtonUp.OnAction = EwNewSlot( _this, ClimateSliderItem_onIncrement );
  _this->ButtonDown.OnAction = EwNewSlot( _this, ClimateSliderItem_onDecrement );
  _this->ButtonOk.OnAction = EwNewSlot( _this, ClimateSliderItem_onOk );
  ViewsWarpImage_OnSetBitmap( &_this->Triangle, EwLoadResource( &ClimateTriangle, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Thumb, EwLoadResource( &ClimateThumb, ResourcesBitmap 
  ));
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ClimateSliderItem_onDragSlot 
  );
  _this->SimpleTouchHandler.OnRelease = EwNewSlot( _this, ClimateSliderItem_onReleaseSlot 
  );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ClimateSliderItem_onPressSlot 
  );
}

/* Re-Initializer for the class 'Climate::SliderItem' */
void ClimateSliderItem__ReInit( ClimateSliderItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->Border );
  ClimateButton__ReInit( &_this->ButtonUp );
  ClimateButton__ReInit( &_this->ButtonDown );
  ClimateButton__ReInit( &_this->ButtonOk );
  ViewsRectangle__ReInit( &_this->SliderArea );
  ViewsLine__ReInit( &_this->Line0 );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsLine__ReInit( &_this->Line3 );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsLine__ReInit( &_this->Line5 );
  ViewsLine__ReInit( &_this->Line6 );
  ViewsLine__ReInit( &_this->Line7 );
  ViewsLine__ReInit( &_this->Line8 );
  ViewsLine__ReInit( &_this->Line9 );
  ViewsLine__ReInit( &_this->Line10 );
  ViewsWarpImage__ReInit( &_this->Triangle );
  ViewsLine__ReInit( &_this->Line );
  ViewsImage__ReInit( &_this->Thumb );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
}

/* Finalizer method for the class 'Climate::SliderItem' */
void ClimateSliderItem__Done( ClimateSliderItem _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateSliderItem );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->Border );
  ClimateButton__Done( &_this->ButtonUp );
  ClimateButton__Done( &_this->ButtonDown );
  ClimateButton__Done( &_this->ButtonOk );
  ViewsRectangle__Done( &_this->SliderArea );
  ViewsLine__Done( &_this->Line0 );
  ViewsLine__Done( &_this->Line1 );
  ViewsLine__Done( &_this->Line2 );
  ViewsLine__Done( &_this->Line3 );
  ViewsLine__Done( &_this->Line4 );
  ViewsLine__Done( &_this->Line5 );
  ViewsLine__Done( &_this->Line6 );
  ViewsLine__Done( &_this->Line7 );
  ViewsLine__Done( &_this->Line8 );
  ViewsLine__Done( &_this->Line9 );
  ViewsLine__Done( &_this->Line10 );
  ViewsWarpImage__Done( &_this->Triangle );
  ViewsLine__Done( &_this->Line );
  ViewsImage__Done( &_this->Thumb );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::SliderItem' */
void ClimateSliderItem__Mark( ClimateSliderItem _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->ButtonUp );
  EwMarkObject( &_this->ButtonDown );
  EwMarkObject( &_this->ButtonOk );
  EwMarkObject( &_this->SliderArea );
  EwMarkObject( &_this->Line0 );
  EwMarkObject( &_this->Line1 );
  EwMarkObject( &_this->Line2 );
  EwMarkObject( &_this->Line3 );
  EwMarkObject( &_this->Line4 );
  EwMarkObject( &_this->Line5 );
  EwMarkObject( &_this->Line6 );
  EwMarkObject( &_this->Line7 );
  EwMarkObject( &_this->Line8 );
  EwMarkObject( &_this->Line9 );
  EwMarkObject( &_this->Line10 );
  EwMarkObject( &_this->Triangle );
  EwMarkObject( &_this->Line );
  EwMarkObject( &_this->Thumb );
  EwMarkObject( &_this->SimpleTouchHandler );
  EwMarkRef( _this->Outlet );
  EwMarkSlot( _this->OnClose );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateSliderItem_UpdateLayout( ClimateSliderItem _this, XPoint aSize )
{
  XInt32 x1;
  XInt32 x2;
  XInt32 y;
  XInt32 delta;
  XInt32 xStart;
  XInt32 xEnd;
  XInt32 y1;
  XInt32 y2;
  XInt32 x;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  x1 = ( ClimateMenuItemSize.X * 1 ) / 5;
  x2 = aSize.X - x1;
  y = aSize.Y / 2;
  delta = ( x2 - x1 ) / 12;
  xStart = (((( x2 - x1 ) - ( 12 * delta )) / 2 ) + delta ) + x1;
  xEnd = xStart + ( 10 * delta );
  CoreRectView__OnSetBounds( &_this->ButtonUp, EwNewRect( 0, 0, x1, y + 1 ));
  CoreRectView__OnSetBounds( &_this->ButtonDown, EwNewRect( 0, y, x1, aSize.Y ));
  CoreRectView__OnSetBounds( &_this->ButtonOk, EwNewRect( x2, 0, aSize.X, aSize.Y 
  ));
  CoreRectView__OnSetBounds( &_this->SliderArea, EwNewRect( x1, 0, x2, aSize.Y ));
  y1 = 2;
  y2 = aSize.Y - 2;
  x = xStart;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line0, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line0, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line5, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line5, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line6, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line6, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line7, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line7, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line8, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line8, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line9, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line9, EwNewPoint( x, y2 ));
  x = x + delta;
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line10, EwNewPoint( x, y1 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line10, EwNewPoint( x, y2 ));
  CoreQuadView__OnSetPoint1( &_this->Triangle, EwNewPoint( xStart, 5 ));
  CoreQuadView__OnSetPoint2( &_this->Triangle, EwNewPoint( xEnd, 5 ));
  CoreQuadView__OnSetPoint3( &_this->Triangle, EwNewPoint( xEnd, y ));
  CoreQuadView__OnSetPoint4( &_this->Triangle, EwNewPoint( xStart, y ));
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, EwNewPoint( xStart - ( _this->Thumb.Bitmap->FrameSize.X 
  / 2 ), y ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, EwNewPoint( xEnd + ( _this->Thumb.Bitmap->FrameSize.X 
  / 2 ), y ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateSliderItem_UpdateViewState( ClimateSliderItem _this, XSet aState )
{
  XInt32 pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  pos = 0;

  if ((( _this->MaxValue > _this->MinValue ) && ( _this->CurrentValue >= _this->MinValue 
      )) && ( _this->CurrentValue <= _this->MaxValue ))
  {
    pos = ((( _this->Line.Super1.Point2.X - _this->Line.Super1.Point1.X ) - _this->Thumb.Bitmap->FrameSize.X 
    ) * ( _this->CurrentValue - _this->MinValue )) / ( _this->MaxValue - _this->MinValue 
    );
  }

  CoreRectView__OnSetBounds( &_this->Thumb, EwSetRectOrigin( _this->Thumb.Super1.Bounds, 
  EwNewPoint( _this->Line.Super1.Point1.X + pos, _this->Line.Super1.Point1.Y - ( 
  EwGetRectH( _this->Thumb.Super1.Bounds ) / 2 ))));
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, EwNewPoint( _this->Thumb.Super1.Bounds.Point1.X 
  - 10, 0 ));
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, EwNewPoint( _this->Thumb.Super1.Bounds.Point2.X 
  + 10, 0 ));
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, EwNewPoint( _this->Thumb.Super1.Bounds.Point2.X 
  + 10, _this->SliderArea.Super1.Bounds.Point2.Y ));
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, EwNewPoint( _this->Thumb.Super1.Bounds.Point1.X 
  - 10, _this->SliderArea.Super1.Bounds.Point2.Y ));
}

/* 'C' function for method : 'Climate::SliderItem.OnSetCurrentValue()' */
void ClimateSliderItem_OnSetCurrentValue( ClimateSliderItem _this, XInt32 value )
{
  if ( value < _this->MinValue )
    value = _this->MinValue;

  if ( value > _this->MaxValue )
    value = _this->MaxValue;

  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Climate::SliderItem.OnSetMinValue()' */
void ClimateSliderItem_OnSetMinValue( ClimateSliderItem _this, XInt32 value )
{
  if ( _this->MinValue == value )
    return;

  _this->MinValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Climate::SliderItem.OnSetMaxValue()' */
void ClimateSliderItem_OnSetMaxValue( ClimateSliderItem _this, XInt32 value )
{
  if ( _this->MaxValue == value )
    return;

  _this->MaxValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onPressSlot( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->startValue = _this->CurrentValue;
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onDragSlot( ClimateSliderItem _this, XObject sender )
{
  XInt32 oldValue;
  XInt32 ofs;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = _this->CurrentValue;
  ofs = _this->SimpleTouchHandler.CurrentPos.X - _this->SimpleTouchHandler.HittingPos.X;

  if ((( _this->MaxValue > _this->MinValue ) && ( _this->CurrentValue >= _this->MinValue 
      )) && ( _this->CurrentValue <= _this->MaxValue ))
  {
    ofs = ( ofs * ( _this->MaxValue - _this->MinValue )) / (( _this->Line.Super1.Point2.X 
    - _this->Line.Super1.Point1.X ) - _this->Thumb.Bitmap->FrameSize.X );
  }
  else
    ofs = 0;

  ClimateSliderItem_OnSetCurrentValue( _this, _this->startValue + ofs );

  if ( _this->CurrentValue != oldValue )
  {
    if ( _this->Outlet.Object != 0 )
      EwOnSetInt32( _this->Outlet, _this->CurrentValue );
  }
}

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void ClimateSliderItem_outletSlot( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    ClimateSliderItem_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'Climate::SliderItem.OnSetOutlet()' */
void ClimateSliderItem_OnSetOutlet( ClimateSliderItem _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  EwDetachRefObserver( EwNewSlot( _this, ClimateSliderItem_outletSlot ), _this->Outlet, 
    0 );
  _this->Outlet = value;
  EwAttachRefObserver( EwNewSlot( _this, ClimateSliderItem_outletSlot ), value, 
    0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, ClimateSliderItem_outletSlot ), ((XObject)_this 
      ));
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onReleaseSlot( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Slot method for the PlusButton. */
void ClimateSliderItem_onIncrement( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ClimateSliderItem_OnSetCurrentValue( _this, (( _this->CurrentValue / 10 ) * 10 
  ) + 10 );

  if ( _this->Outlet.Object != 0 )
    EwOnSetInt32( _this->Outlet, _this->CurrentValue );
}

/* Slot method for the MinusButton. */
void ClimateSliderItem_onDecrement( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ClimateSliderItem_OnSetCurrentValue( _this, ((( _this->CurrentValue + 9 ) / 10 
  ) * 10 ) - 10 );

  if ( _this->Outlet.Object != 0 )
    EwOnSetInt32( _this->Outlet, _this->CurrentValue );
}

/* Slot method for the OkButton. */
void ClimateSliderItem_onOk( ClimateSliderItem _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnClose, ((XObject)_this ));
}

/* Variants derived from the class : 'Climate::SliderItem' */
EW_DEFINE_CLASS_VARIANTS( ClimateSliderItem )
EW_END_OF_CLASS_VARIANTS( ClimateSliderItem )

/* Virtual Method Table (VMT) for the class : 'Climate::SliderItem' */
EW_DEFINE_CLASS( ClimateSliderItem, CoreGroup, "Climate::SliderItem" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  ClimateSliderItem_UpdateLayout,
  ClimateSliderItem_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateSliderItem )

/* Constant to define the size of the slider item */
const XPoint ClimateSliderSize = { 227, 45 };

/* Initializer for the class 'Climate::Button' */
void ClimateButton__Init( ClimateButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ClimateButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0064 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const0064 );
  ViewsRectangle_OnSetColor( &_this->Background, ClimateSelectColor );
  CoreView_OnSetLayout((CoreView)&_this->Border, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Border, _Const0064 );
  ViewsBorder_OnSetColor( &_this->Border, ClimateBorderColor );
  CoreView_OnSetLayout((CoreView)&_this->Text, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Text, _Const0064 );
  ViewsText_OnSetAlignment( &_this->Text, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0065 ));
  ViewsText_OnSetColor( &_this->Text, ClimateTextColor );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0087 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0088 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0089 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0011 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ClimateMediumFont, ResourcesFont 
  ));
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ClimateButton_enterLeaveSlot );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ClimateButton_enterLeaveSlot );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ClimateButton_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ClimateButton_pressReleaseSlot 
  );
}

/* Re-Initializer for the class 'Climate::Button' */
void ClimateButton__ReInit( ClimateButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->Text );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'Climate::Button' */
void ClimateButton__Done( ClimateButton _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ClimateButton );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->Text );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Climate::Button' */
void ClimateButton__Mark( ClimateButton _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->Text );
  EwMarkObject( &_this->TouchHandler );
  EwMarkSlot( _this->OnAction );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ClimateButton_UpdateViewState( ClimateButton _this, XSet aState )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aState );

  if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBorderColor );
  else
    ViewsRectangle_OnSetColor( &_this->Background, ClimateBackColor );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateButton_enterLeaveSlot( ClimateButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateButton_pressReleaseSlot( ClimateButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    EwSignal( _this->OnAction, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Climate::Button.OnSetCaption()' */
void ClimateButton_OnSetCaption( ClimateButton _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->Text, value );
}

/* Variants derived from the class : 'Climate::Button' */
EW_DEFINE_CLASS_VARIANTS( ClimateButton )
EW_END_OF_CLASS_VARIANTS( ClimateButton )

/* Virtual Method Table (VMT) for the class : 'Climate::Button' */
EW_DEFINE_CLASS( ClimateButton, CoreGroup, "Climate::Button" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  ClimateButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ClimateButton )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateTriangle )
  EW_BITMAP_FRAMES( ClimateTriangle, Default, EW_DRIVER_VARIANT_ALPHA8, 450, 40, 0 )
    EW_BITMAP_FRAME( 224, 20, 226, 20, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateTriangle, Default )               /* ratio 8.09 % */
    0x1C080100, 0xC1A0B048, 0xAA090883, 0x61B0C848, 0x230E19C2, 0xB122744A, 0x16334322,
    0xA3AC1A33, 0x4CC0A3B1, 0x0A723B1E, 0xC91991A9, 0x564F268C, 0xE2B2A7B4, 0xFF1296BF,
    0xF0E9806D, 0x0C9A441F, 0x99C109FF, 0x844F2313, 0x04FCD2FF, 0xC1A8720A, 0x128D457F,
    0x694C37FC, 0x9D297FC1, 0x4E77FC0A, 0x2F7FC0EA, 0xFAC002AD, 0x9BD62B40, 0xF0DAB152,
    0xD867CFFA, 0x912164B2, 0x2B14EA4D, 0xDB51B22D, 0x3646DBFE, 0x037FD9EB, 0xA9B562AC,
    0x7FDF6BF7, 0x559AFE5D, 0x5FD037BA, 0xA2F746B6, 0x31371BFA, 0xED7F67D6, 0x791BDE12,
    0x97BF5CA1, 0x3CCC51FF, 0x7FDEE878, 0xFE23331C, 0xE66479F9, 0xA2F7A4C6, 0x6599F9E6,
    0x3F9EC966, 0x17BC9CCF, 0x3BBDEC6C, 0xCCED6369, 0xDD50B3FA, 0xC68F5F48, 0xEBE999F9,
    0x578B34D5, 0xF7BB0E05, 0x3F8EAEE7, 0x77BE76DB, 0xBCBDF46C, 0x0ECF1793, 0xB53FF8B3,
    0xEF0EB1D7, 0x786DFC5E, 0x9EE9CCA8, 0x78BDAE6F, 0xD7D2DBDE, 0x39FF6F4F, 0xEBEC7C30,
    0xBF17DF0D, 0xF47EF17E, 0x1FF641FF, 0x87792D7B, 0x58FF7AD5, 0xA97C5D46, 0x82D9B779,
    0x5C5835F8, 0x27F21068, 0x22036961, 0x00819277, 0x6B8FF856, 0x21B8121E, 0xC711B387,
    0x712A7CE1, 0x9F85D3A8, 0x8A924771, 0xE06899BF, 0x48722F78, 0x362A4863, 0x3886A215,
    0x8C9CB872, 0x5CF8B206, 0xE9017C88, 0x79F4759D, 0x2A47A2E7, 0x716465A2, 0xDC5925E0,
    0x69351D8D, 0xF19F949E, 0xEA8AA558, 0x9119F961, 0x1C593D78, 0x48AA3D8A, 0xDA4D9326,
    0x4B8A9E47, 0x3FE4D46A, 0xA369ADFA, 0x27F99F98, 0x665A81A7, 0x7780A6F4, 0x97E5E906,
    0x60A5EE7F, 0xE99E6F8A, 0x120F9BE6, 0x169B64DA, 0xA05A09BD, 0xA6F81616, 0x99369269,
    0x5E6F4BA7, 0x209BD31A, 0xA424DA2A, 0x62389558, 0x981A7DA1, 0x966CA79B, 0xA38C5DEA,
    0xA6254936, 0xE9BABE6F, 0xCAA23A9B, 0x3935A6A1, 0x9FAB63FA, 0x7426FA56, 0x6BE99ABC,
    0xE8D64893, 0x3911A328, 0x2AB0DBBA, 0xAC6C6946, 0xE57872CC, 0x6B4696B3, 0xF6D49760,
    0xEF8AAC1A, 0xB6EC2B65, 0xA2AADA27, 0x2B1E659A, 0x9671872E, 0x06B82D0B, 0xB56EA9DA,
    0xE7C77AEC, 0xABD2DABB, 0x0E1CB9E2, 0x45B2A5BA, 0xA261CBDA, 0x6C8B2AFB, 0xEA3EFC4E,
    0x12B28AAD, 0x68A52FCC, 0x502B8BF2, 0x507C3F05, 0xEBC61FC1, 0x1E24BFA7, 0xFCC36DFC,
    0xC0B01A9E, 0xEAC8731A, 0x0C2705A1, 0x1B21C971, 0x8EC7EB58, 0xC514FC4A, 0x705C92BB,
    0x2B0206CA, 0x3686BF33, 0x1858B144, 0xC4F03873, 0xD47CFF3B, 0xB9EACECE, 0x5343C9B3,
    0x14D1AD3C, 0xCED57CBB, 0x714D32D8, 0x2B761CCF, 0x2739C175, 0x376633B4, 0xA36E4BF3,
    0xD4BD0B5B, 0x7D82E9D6, 0xBB05C734, 0x68D3766B, 0xDAEF3BF3, 0x6FCCB353, 0x3BEAFCDB,
    0x0359CEEB, 0x77C035BD, 0x54F62C53, 0x357C1B5B, 0x2C2F5DCA, 0x074EB2B7, 0x05DC21DE,
    0xD6EB0A77, 0x6A2B2B87, 0xFDE714DF, 0x531EE072, 0x8ADFF05E, 0xBF385507, 0x781E0348,
    0xBE295BE8, 0x7F0EE6B2, 0xC9CC6CAE, 0xB2BAAE76, 0xB8AEB736, 0x5E2B4FE5, 0x8B81ECAC,
    0x8F93B9DD, 0xAE745D6F, 0xFBBE878A, 0x2E07C0D2, 0x1751EEF1, 0x3BE0F81F, 0xD6FCAD5B,
    0x79DE97B4, 0xC603BBF4, 0x53D7D078, 0xBBCEB65C, 0xDABD5D23, 0x70FE77DC, 0xEF876FF5,
    0xA3CBEF7A, 0x5ADDB5BF, 0xF57B4F57, 0x3D8FA99A, 0xF85314EA, 0xC326D6FC, 0x8AF9B0CF,
    0xFFBF0AE3, 0xC29C73D5, 0x9DBF2776, 0xEE7DAE4D, 0x32C51FA3, 0x0DDDC087, 0xC39E7E0C,
    0x0612E75D, 0xEFC20A41, 0x9F140D74, 0xBAC60B02, 0x836F5593, 0x079D8B05, 0x08379777,
    0x2376E3FE, 0x4CB21CEC, 0xFE0842B8, 0x93D56F4E, 0x07890995, 0xCA5DDDC3, 0x21ABC984,
    0x38A7EF01, 0x7A70E9E7, 0xD65C0C3C, 0xFE3D684C, 0x64883039, 0x8CD9E243, 0x25F039D8,
    0xA44A7FED, 0x089EF958, 0x6DC628BF, 0xDF63F080, 0x33984CD8, 0x8B0FC622, 0x17936BD5,
    0x09C3F7ED, 0xFB73B132, 0xB4F562A3, 0x123645E4, 0x33978051, 0x773B19E1, 0x11722DC0,
    0xA063D58C, 0x24B8211D, 0x8530462F, 0xF763C431, 0x0C39D904, 0x198A11EE, 0x6B075F84,
    0x76424447, 0xBC8C844E, 0x87AB2023, 0x31F248C2, 0x9173F091, 0xC983BF1F, 0x78724E40,
    0x2861B49D, 0xD143973B, 0x9D947179, 0x8929A1F3, 0xF64DA648, 0xFC448E2B, 0x592F259A,
    0x6F6DEAC6, 0x8F1C2695, 0xBD289D2B, 0x77727E36, 0x29E5EC53, 0x6241F96B, 0xAE7D8EEE,
    0x212CE57C, 0x126137C8, 0x24C93B31, 0x69732E23, 0xB356344C, 0x5E34D77F, 0xC706B736,
    0x9BC7B264, 0x7CE6F407, 0x6F40C9BC, 0x239BC6F2, 0x47112673, 0x26764DE3, 0x44DE8313,
    0xE759378D, 0x33D4E6CD, 0x4E9CF576, 0xCF576F3D, 0x9613F4CE, 0x3D5A2C7E, 0xA5CF5311,
    0xF531B3D5, 0x613D5A8C, 0x2DAB50B3, 0x3D0F36D4, 0xB5C91FA4, 0x342CC1D0, 0xCB650B5D,
    0xD0B5DD42, 0x5E742CB8, 0x484C950B, 0x0547EA25, 0x212C1485, 0xCD48507D, 0x850A5212,
    0xA5212934, 0x32A34854, 0x117A65D3, 0x4BB52144, 0xD393674E, 0x3734E49B, 0x4E49F539,
    0xA2D3937F, 0x9B9A7514, 0x534E51D4, 0xE4E5D392, 0xED4F2B34, 0xF22153CA, 0x153CB1D4,
    0xA7555723, 0x54F2D52B, 0x2DF53C90, 0x53C9354F, 0x97D4F2E9, 0x65007594, 0xCB5A419D,
    0x9AB285DA, 0x2881ACA1, 0x8ACA266B, 0xA332B28A, 0xEB28CFAC, 0x0002023F, 0x00000000

  EW_BITMAPS_TABLE( ClimateTriangle )
    EW_BITMAP( ClimateTriangle, Default )
EW_END_OF_BITMAP_RES( ClimateTriangle )

/* Table with links to derived variants of the bitmap resource : 'Climate::Triangle' */
EW_RES_WITHOUT_VARIANTS( ClimateTriangle )

/* This is a bitmap resource. */
EW_DEFINE_BITMAP_RES( ClimateThumb )
  EW_BITMAP_FRAMES( ClimateThumb, Default, EW_DRIVER_VARIANT_RGBA8888, 25, 25, 0 )
    EW_BITMAP_FRAME( 4, 4, 17, 17, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ClimateThumb, Default )                  /* ratio 21.28 % */
    0x0409FF00, 0xC11FF020, 0x1A0F0581, 0xA110C84C, 0x0A097FC3, 0xA6382916, 0x72829E20,
    0xF8292E0A, 0x87C2E1A0, 0x147A430A, 0xC9A47209, 0xC60A5D87, 0xA5B2C82A, 0x752E97CB,
    0xF2737C15, 0x37924DA3, 0x513CE26B, 0x7FCC16F0, 0xD409F2F9, 0x271FF325, 0x1D0F024E,
    0x91A8D812, 0x04B45A40, 0xB3F7B3DA, 0x4882B0E0, 0xF92D6A74, 0xA1414850, 0x1391C92C,
    0x408CC668, 0x1E061209, 0xADB6B004, 0x2209815A, 0x4542A3FE, 0x556934A0, 0x9AE46605,
    0xAF42AF93, 0x640A8F30, 0x41ADE0C0, 0xB30D87B7, 0xC0788C55, 0xF67B8100, 0x6997FDE4,
    0x247FDF6B, 0x1965520A, 0xCFE31028, 0x162F4389, 0xE9B4788D, 0x08A25183, 0xA60FC7E4,
    0xA30ACB13, 0x09F4FCB2, 0xA5DB69F4, 0x5C36E373, 0x664C0EA7, 0x6CB35F96, 0x83E04ED7,
    0x2777A48E, 0xB99B7E5F, 0x92C97FEE, 0x1353F4C1, 0xCADECB55, 0xBE7F6B9B, 0x22C1FB3D,
    0xE55E5F13, 0x86E5AE5B, 0x3BD3DE0D, 0x9FFDDF57, 0x3D30753A, 0xF2D16C14, 0xF8EE7B2E,
    0x552F2BEF, 0x8296A60A, 0x8AE4B1AA, 0x67ADFA2B, 0x22087B60, 0x30210846, 0x4B564649,
    0x60765499, 0xD816137E, 0x6930595E, 0x034B6002, 0x8261485A, 0x60B40A1E, 0x87D5F383,
    0x82288557, 0xFC73E298, 0x7951E7F9, 0xE2179D2C, 0xF68E338A, 0x591E7C5E, 0x7B1C92C7,
    0x87E3E8A9, 0x1E040A40, 0x165DE34C, 0x0DC44160, 0x4C8D1856, 0x745868FE, 0xD3E659D3,
    0x1935B56C, 0xBDD89324, 0x1E5F9C04, 0x4B552665, 0x6578D59D, 0xD6ADA973, 0x5DC24BDA,
    0x3F5FD386, 0x610FF609, 0x18E68262, 0x06B20E64, 0xC26A8493, 0x40601056, 0x591624B5,
    0x5683FD66, 0x44097181, 0x56275D97, 0x7A9AE785, 0x4093C5F2, 0xD414BE53, 0xA9B94550,
    0xFD4E5314, 0x9B549503, 0x56645555, 0xA79A865C, 0xB40929A8, 0xB6A864D2, 0x343FD454,
    0xABA8CA89, 0xD7265E8D, 0x53FDE13F, 0xE9174091, 0xB14711A5, 0x40537ABE, 0x00000000

  EW_BITMAPS_TABLE( ClimateThumb )
    EW_BITMAP( ClimateThumb, Default )
EW_END_OF_BITMAP_RES( ClimateThumb )

/* Table with links to derived variants of the bitmap resource : 'Climate::Thumb' */
EW_RES_WITHOUT_VARIANTS( ClimateThumb )

/* Embedded Wizard */
