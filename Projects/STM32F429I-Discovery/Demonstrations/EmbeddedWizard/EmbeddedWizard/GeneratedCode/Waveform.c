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
#include "_CoreOutline.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsInt32Effect.h"
#include "_FlatHorzSlider.h"
#include "_FlatLabel.h"
#include "_FlatToggleButton.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WaveformChannelPanel.h"
#include "_WaveformWaveform.h"
#include "Core.h"
#include "Flat.h"
#include "Views.h"
#include "Waveform.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000144, /* ratio 60.49 % */
  0xB8001B00, 0x80000452, 0x00D00021, 0x4DC00308, 0x00650043, 0x020001B0, 0x00830C40,
  0x88341204, 0x87432150, 0xAC4E230E, 0x82230328, 0x260F0581, 0x074008B4, 0x0D280DC6,
  0xC008595E, 0x6600440E, 0x2001BC00, 0x8A1B4007, 0x0CDC8E00, 0x1D2693C9, 0x122B459D,
  0xA773F9B9, 0x553104C1, 0x52E8BC2A, 0x15A8C981, 0x03D00091, 0x93C1AAC0, 0xB4FE811B,
  0xD86AF5D2, 0x3CD20039, 0xEAD0688C, 0x00710059, 0x93D9A1D4, 0x29B0002D, 0x09FC327B,
  0xB0D42307, 0xAC94011D, 0x5441D18A, 0xC6234523, 0x0B740175, 0xBB5CAD00, 0xC41A8E14,
  0x13BE8027, 0x3C745719, 0x83648016, 0xFE06A20B, 0xC62256B8, 0x000101D3, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 320, 240 }};
static const XRect _Const0001 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0002 = {{ 5, 30 }, { 175, 235 }};
static const XRect _Const0003 = {{ 160, 0 }, { 320, 240 }};
static const XPoint _Const0004 = { 0, 210 };
static const XRect _Const0005 = {{ 10, 35 }, { 170, 230 }};
static const XPoint _Const0006 = { 0, 110 };
static const XPoint _Const0007 = { 75, 55 };
static const XRect _Const0008 = {{ 180, 30 }, { 320, 240 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x0003 };
static const XRect _Const000A = {{ 320, 30 }, { 460, 240 }};
static const XStringRes _Const000B = { _StringsDefault0, 0x0010 };
static const XRect _Const000C = {{ 10, 140 }, { 80, 230 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x001D };
static const XRect _Const000E = {{ 90, 140 }, { 170, 230 }};
static const XRect _Const000F = {{ 5, 0 }, { 290, 30 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0025 };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0040 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x0049 };
static const XStringRes _Const0013 = { _StringsDefault0, 0x0051 };
static const XStringRes _Const0014 = { _StringsDefault0, 0x0059 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x0061 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x006B };
static const XStringRes _Const0017 = { _StringsDefault0, 0x0073 };
static const XRect _Const0018 = {{ 0, 0 }, { 140, 210 }};
static const XRect _Const0019 = {{ 5, 20 }, { 135, 205 }};
static const XRect _Const001A = {{ 17, 25 }, { 123, 85 }};
static const XRect _Const001B = {{ 17, 90 }, { 123, 150 }};
static const XRect _Const001C = {{ 17, 65 }, { 117, 85 }};
static const XStringRes _Const001D = { _StringsDefault0, 0x007C };
static const XRect _Const001E = {{ 17, 130 }, { 117, 150 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x008A };
static const XRect _Const0020 = {{ 17, 165 }, { 47, 195 }};
static const XRect _Const0021 = {{ 53, 165 }, { 83, 195 }};
static const XRect _Const0022 = {{ 89, 165 }, { 119, 195 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x0098 };
static const XRect _Const0024 = {{ 5, 0 }, { 145, 30 }};

/* Initializer for the class 'Waveform::Waveform' */
void WaveformWaveform__Init( WaveformWaveform _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->Graph, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_XObject, 0 );
  WaveformChannelPanel__Init( &_this->ChannelPanel1, &_this->_XObject, 0 );
  WaveformChannelPanel__Init( &_this->ChannelPanel2, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->CoordList, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->RecalcTimer, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextCh1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->TextCh2, &_this->_XObject, 0 );
  FlatLabel__Init( &_this->Caption, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->AutoDemoTimer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WaveformWaveform );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, FlatColorOfBackground );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0002 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTheme );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0003 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0004 );
  _this->SlideTouchHandler.SlideHorz = 0;
  CoreSlideTouchHandler_OnSetResetSpace( &_this->SlideTouchHandler, 50 );
  CoreRectView__OnSetBounds( &_this->Graph, _Const0005 );
  ChartsGraph_OnSetLineColor( &_this->Graph, FlatColorOfTouch );
  ChartsGraph_OnSetLineWidth( &_this->Graph, 3.000000f );
  ChartsGraph_OnSetDotColor( &_this->Graph, FlatColorOfTouch );
  ChartsGraph_OnSetDotWidth( &_this->Graph, 2.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->Graph, _Const0006 );
  ChartsGraph_OnSetPixelPerUnit( &_this->Graph, _Const0007 );
  ChartsGraph_OnSetGridDistance( &_this->Graph, _Const0007 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const0008 );
  CoreOutline_OnSetFormation( &_this->Outline, CoreFormationTopToBottom );
  CoreRectView__OnSetBounds( &_this->ChannelPanel1, _Const0008 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->ChannelPanel1, 1 );
  _this->ChannelPanel1.Frequency = 100;
  _this->ChannelPanel1.Amplitude = 14;
  WaveformChannelPanel_OnSetCaption( &_this->ChannelPanel1, EwLoadString( &_Const0009 
  ));
  CoreRectView__OnSetBounds( &_this->ChannelPanel2, _Const000A );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->ChannelPanel2, 1 );
  _this->ChannelPanel2.Frequency = 71;
  _this->ChannelPanel2.Amplitude = 15;
  WaveformChannelPanel_OnSetWaveform( &_this->ChannelPanel2, WaveformWaveformTypeSquare 
  );
  WaveformChannelPanel_OnSetCaption( &_this->ChannelPanel2, EwLoadString( &_Const000B 
  ));
  ChartsCoordList_OnSetMaxNoOfItems( &_this->CoordList, 100 );
  CoreTimer_OnSetPeriod( &_this->RecalcTimer, 250 );
  CoreRectView__OnSetBounds( &_this->TextCh1, _Const000C );
  ViewsText_OnSetAlignment( &_this->TextCh1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertBottom 
  );
  ViewsText_OnSetString( &_this->TextCh1, EwLoadString( &_Const000D ));
  ViewsText_OnSetColor( &_this->TextCh1, FlatColorOfTheme );
  CoreRectView__OnSetBounds( &_this->TextCh2, _Const000E );
  ViewsText_OnSetAlignment( &_this->TextCh2, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertBottom );
  ViewsText_OnSetString( &_this->TextCh2, EwLoadString( &_Const000D ));
  ViewsText_OnSetColor( &_this->TextCh2, FlatColorOfTheme );
  CoreRectView__OnSetBounds( &_this->Caption, _Const000F );
  FlatLabel_OnSetString( &_this->Caption, EwLoadString( &_Const0010 ));
  _this->AutoDemoTimer.Super1.Symmetric = 1;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->AutoDemoTimer, 12000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->AutoDemoTimer, 0 );
  _this->AutoDemoTimer.Value2 = 140;
  _this->AutoDemoTimer.Value1 = 60;
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Graph ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChannelPanel1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChannelPanel2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextCh1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TextCh2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &WaveformPanelBorder, ResourcesBitmap 
  ));
  CoreOutline_OnSetSlideHandler( &_this->Outline, &_this->SlideTouchHandler );
  _this->ChannelPanel1.OnChanged = EwNewSlot( _this, WaveformWaveform_SettingsChanged 
  );
  _this->ChannelPanel2.OnChanged = EwNewSlot( _this, WaveformWaveform_SettingsChanged 
  );
  _this->RecalcTimer.OnTrigger = EwNewSlot( _this, WaveformWaveform_TimerSlot );
  ViewsText_OnSetFont( &_this->TextCh1, EwLoadResource( &FlatFontS, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->TextCh2, EwLoadResource( &FlatFontS, ResourcesFont 
  ));
  _this->AutoDemoTimer.Super1.OnAnimate = EwNewSlot( _this, WaveformWaveform_AnimateFrequency 
  );
  _this->AutoDemoTimer.Outlet = EwNewRef( &_this->ChannelPanel1, WaveformChannelPanel_OnGetFrequency, 
  WaveformChannelPanel_OnSetFrequency );

  /* Call the user defined constructor */
  WaveformWaveform_Init( _this, aArg );
}

/* Re-Initializer for the class 'Waveform::Waveform' */
void WaveformWaveform__ReInit( WaveformWaveform _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsFrame__ReInit( &_this->Frame );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  ChartsGraph__ReInit( &_this->Graph );
  CoreOutline__ReInit( &_this->Outline );
  WaveformChannelPanel__ReInit( &_this->ChannelPanel1 );
  WaveformChannelPanel__ReInit( &_this->ChannelPanel2 );
  ChartsCoordList__ReInit( &_this->CoordList );
  CoreTimer__ReInit( &_this->RecalcTimer );
  ViewsText__ReInit( &_this->TextCh1 );
  ViewsText__ReInit( &_this->TextCh2 );
  FlatLabel__ReInit( &_this->Caption );
  EffectsInt32Effect__ReInit( &_this->AutoDemoTimer );
}

/* Finalizer method for the class 'Waveform::Waveform' */
void WaveformWaveform__Done( WaveformWaveform _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WaveformWaveform );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsFrame__Done( &_this->Frame );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  ChartsGraph__Done( &_this->Graph );
  CoreOutline__Done( &_this->Outline );
  WaveformChannelPanel__Done( &_this->ChannelPanel1 );
  WaveformChannelPanel__Done( &_this->ChannelPanel2 );
  ChartsCoordList__Done( &_this->CoordList );
  CoreTimer__Done( &_this->RecalcTimer );
  ViewsText__Done( &_this->TextCh1 );
  ViewsText__Done( &_this->TextCh2 );
  FlatLabel__Done( &_this->Caption );
  EffectsInt32Effect__Done( &_this->AutoDemoTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Waveform::Waveform' */
void WaveformWaveform__Mark( WaveformWaveform _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Frame );
  EwMarkObject( &_this->SlideTouchHandler );
  EwMarkObject( &_this->Graph );
  EwMarkObject( &_this->Outline );
  EwMarkObject( &_this->ChannelPanel1 );
  EwMarkObject( &_this->ChannelPanel2 );
  EwMarkObject( &_this->CoordList );
  EwMarkObject( &_this->RecalcTimer );
  EwMarkObject( &_this->TextCh1 );
  EwMarkObject( &_this->TextCh2 );
  EwMarkObject( &_this->Caption );
  EwMarkObject( &_this->AutoDemoTimer );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void WaveformWaveform_Init( WaveformWaveform _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwSignal( EwNewSlot( _this, WaveformWaveform_SettingsChanged ), ((XObject)_this 
    ));
}

/* The slot method 'SettingsChanged' is called when the user has changed the current 
   waveform gernator channel settings. */
void WaveformWaveform_SettingsChanged( WaveformWaveform _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WaveformWaveform_CalculateCoords( _this );
  ViewsText_OnSetString( &_this->TextCh1, EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwLoadString( &_Const0011 ), EwNewStringInt( _this->ChannelPanel1.Frequency, 
  0, 10 )), EwLoadString( &_Const0012 )), EwNewStringInt( _this->ChannelPanel1.Amplitude, 
  0, 10 )), EwLoadString( &_Const0013 )));

  if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeSinus )
    ViewsText_OnSetString( &_this->TextCh1, EwConcatString( _this->TextCh1.String, 
    EwLoadString( &_Const0014 )));
  else
    if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeSquare )
      ViewsText_OnSetString( &_this->TextCh1, EwConcatString( _this->TextCh1.String, 
      EwLoadString( &_Const0015 )));
    else
      if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeRamp )
        ViewsText_OnSetString( &_this->TextCh1, EwConcatString( _this->TextCh1.String, 
        EwLoadString( &_Const0016 )));

  ViewsText_OnSetString( &_this->TextCh2, EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwLoadString( &_Const0017 ), EwNewStringInt( _this->ChannelPanel2.Frequency, 
  0, 10 )), EwLoadString( &_Const0012 )), EwNewStringInt( _this->ChannelPanel2.Amplitude, 
  0, 10 )), EwLoadString( &_Const0013 )));

  if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeSinus )
    ViewsText_OnSetString( &_this->TextCh2, EwConcatString( _this->TextCh2.String, 
    EwLoadString( &_Const0014 )));
  else
    if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeSquare )
      ViewsText_OnSetString( &_this->TextCh2, EwConcatString( _this->TextCh2.String, 
      EwLoadString( &_Const0015 )));
    else
      if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeRamp )
        ViewsText_OnSetString( &_this->TextCh2, EwConcatString( _this->TextCh2.String, 
        EwLoadString( &_Const0016 )));

  CoreTimer_OnSetEnabled( &_this->RecalcTimer, (XBool)(( _this->ChannelPanel1.Waveform 
  == WaveformWaveformTypeNoise ) || ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeNoise 
  )));
}

/* The method 'CalculateCoords' contains all the mathematics to calculate all graph 
   coordinates according the current waveform generator settings. */
void WaveformWaveform_CalculateCoords( WaveformWaveform _this )
{
  XFloat f1 = (XFloat)_this->ChannelPanel1.Frequency;
  XFloat a1 = (XFloat)_this->ChannelPanel1.Amplitude / 20.000000f;
  XFloat f2 = (XFloat)_this->ChannelPanel2.Frequency;
  XFloat a2 = (XFloat)_this->ChannelPanel2.Amplitude / 20.000000f;
  XFloat r1 = 0.000000f;
  XFloat r2 = 0.000000f;
  XFloat x = 0.000000f;

  ChartsCoordList_ClearList( &_this->CoordList );

  while ( x < 4.000000f )
  {
    if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeSinus )
      r1 = EwMathSin((( f1 * x ) * 360.000000f ) / 100.000000f ) * a1;
    else
      if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeSquare )
        r1 = (((XFloat)((XInt32)((( f1 * x ) * 2.000000f ) / 100.000000f ) & 1 ) 
        * 2.000000f ) - 1.000000f ) * a1;
      else
        if ( _this->ChannelPanel1.Waveform == WaveformWaveformTypeRamp )
          r1 = ((((XFloat)((XInt32)(( f1 * x ) * 1.000000f ) % 100 ) / 100.000000f 
          ) * -2.000000f ) + 1.000000f ) * a1;
        else
          r1 = ((XFloat)EwMathRandInt32( -100, 100 ) * a1 ) / 100.000000f;

    if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeSinus )
      r2 = EwMathSin((( f2 * x ) * 360.000000f ) / 100.000000f ) * a2;
    else
      if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeSquare )
        r2 = (((XFloat)((XInt32)((( f2 * x ) * 2.000000f ) / 100.000000f ) & 1 ) 
        * 2.000000f ) - 1.000000f ) * a2;
      else
        if ( _this->ChannelPanel2.Waveform == WaveformWaveformTypeRamp )
          r2 = ((((XFloat)((XInt32)(( f2 * x ) * 1.000000f ) % 100 ) / 100.000000f 
          ) * -2.000000f ) + 1.000000f ) * a2;
        else
          r2 = ((XFloat)EwMathRandInt32( -100, 100 ) * a2 ) / 100.000000f;

    ChartsCoordList_AddCoord( &_this->CoordList, x, r1 + r2 );
    x = x + 0.050000f;
  }

  ChartsGraph_OnSetCoordinates( &_this->Graph, &_this->CoordList );
}

/* Slot method to force the recalculation of coordinates in case of a noise waveform. */
void WaveformWaveform_TimerSlot( WaveformWaveform _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WaveformWaveform_CalculateCoords( _this );
}

/* This is a slot method. */
void WaveformWaveform_AnimateFrequency( WaveformWaveform _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyRefObservers( EwNewRef( &_this->ChannelPanel1, WaveformChannelPanel_OnGetFrequency, 
    WaveformChannelPanel_OnSetFrequency ), 0 );
  EwPostSignal( EwNewSlot( _this, WaveformWaveform_SettingsChanged ), ((XObject)_this 
    ));
}

/* Variants derived from the class : 'Waveform::Waveform' */
EW_DEFINE_CLASS_VARIANTS( WaveformWaveform )
EW_END_OF_CLASS_VARIANTS( WaveformWaveform )

/* Virtual Method Table (VMT) for the class : 'Waveform::Waveform' */
EW_DEFINE_CLASS( WaveformWaveform, CoreGroup, "Waveform::Waveform" )
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
EW_END_OF_CLASS( WaveformWaveform )

/* Initializer for the class 'Waveform::ChannelPanel' */
void WaveformChannelPanel__Init( WaveformChannelPanel _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->SliderFrequency, &_this->_XObject, 0 );
  FlatHorzSlider__Init( &_this->SliderAmplitude, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_XObject, 0 );
  FlatToggleButton__Init( &_this->ButtonSinus, &_this->_XObject, 0 );
  FlatToggleButton__Init( &_this->ButtonSquare, &_this->_XObject, 0 );
  FlatToggleButton__Init( &_this->ButtonRamp, &_this->_XObject, 0 );
  FlatLabel__Init( &_this->CaptionText, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WaveformChannelPanel );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0018 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0019 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTheme );
  CoreRectView__OnSetBounds( &_this->SliderFrequency, _Const001A );
  FlatHorzSlider_OnSetMinValue( &_this->SliderFrequency, 10 );
  FlatHorzSlider_OnSetMaxValue( &_this->SliderFrequency, 200 );
  CoreRectView__OnSetBounds( &_this->SliderAmplitude, _Const001B );
  FlatHorzSlider_OnSetMaxValue( &_this->SliderAmplitude, 50 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const001C );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const001D ));
  ViewsText_OnSetColor( &_this->Text1, FlatColorOfTheme );
  CoreRectView__OnSetBounds( &_this->Text2, _Const001E );
  ViewsText_OnSetAlignment( &_this->Text2, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->Text2, FlatColorOfTheme );
  _this->Frequency = 100;
  _this->Amplitude = 10;
  _this->Waveform = WaveformWaveformTypeSinus;
  CoreRectView__OnSetBounds( &_this->ButtonSinus, _Const0020 );
  FlatToggleButton_OnSetActive( &_this->ButtonSinus, 1 );
  FlatToggleButton_OnSetIconIndex( &_this->ButtonSinus, 0 );
  FlatToggleButton_OnSetCaption( &_this->ButtonSinus, 0 );
  CoreRectView__OnSetBounds( &_this->ButtonSquare, _Const0021 );
  FlatToggleButton_OnSetIconIndex( &_this->ButtonSquare, 1 );
  FlatToggleButton_OnSetCaption( &_this->ButtonSquare, 0 );
  CoreRectView__OnSetBounds( &_this->ButtonRamp, _Const0022 );
  FlatToggleButton_OnSetIconIndex( &_this->ButtonRamp, 2 );
  FlatToggleButton_OnSetCaption( &_this->ButtonRamp, 0 );
  EwRetainString( &_this->Caption, EwLoadString( &_Const0023 ));
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const0024 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SliderFrequency ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SliderAmplitude ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonSinus ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonSquare ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ButtonRamp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionText ), 0 );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &WaveformPanelBorder, ResourcesBitmap 
  ));
  FlatHorzSlider_OnSetOutlet( &_this->SliderFrequency, EwNewRef( _this, WaveformChannelPanel_OnGetFrequency, 
  WaveformChannelPanel_OnSetFrequency ));
  _this->SliderFrequency.OnChange = EwNewSlot( _this, WaveformChannelPanel_OnSlider 
  );
  FlatHorzSlider_OnSetOutlet( &_this->SliderAmplitude, EwNewRef( _this, WaveformChannelPanel_OnGetAmplitude, 
  WaveformChannelPanel_OnSetAmplitude ));
  _this->SliderAmplitude.OnChange = EwNewSlot( _this, WaveformChannelPanel_OnSlider 
  );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &FlatFontS, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &FlatFontS, ResourcesFont 
  ));
  _this->ButtonSinus.OnChange = EwNewSlot( _this, WaveformChannelPanel_OnSinus );
  FlatToggleButton_OnSetIcon( &_this->ButtonSinus, EwLoadResource( &WaveformWaveformIcons, 
  ResourcesBitmap ));
  _this->ButtonSquare.OnChange = EwNewSlot( _this, WaveformChannelPanel_OnSquare 
  );
  FlatToggleButton_OnSetIcon( &_this->ButtonSquare, EwLoadResource( &WaveformWaveformIcons, 
  ResourcesBitmap ));
  _this->ButtonRamp.OnChange = EwNewSlot( _this, WaveformChannelPanel_OnRamp );
  FlatToggleButton_OnSetIcon( &_this->ButtonRamp, EwLoadResource( &WaveformWaveformIcons, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Waveform::ChannelPanel' */
void WaveformChannelPanel__ReInit( WaveformChannelPanel _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsFrame__ReInit( &_this->Frame );
  FlatHorzSlider__ReInit( &_this->SliderFrequency );
  FlatHorzSlider__ReInit( &_this->SliderAmplitude );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  FlatToggleButton__ReInit( &_this->ButtonSinus );
  FlatToggleButton__ReInit( &_this->ButtonSquare );
  FlatToggleButton__ReInit( &_this->ButtonRamp );
  FlatLabel__ReInit( &_this->CaptionText );
}

/* Finalizer method for the class 'Waveform::ChannelPanel' */
void WaveformChannelPanel__Done( WaveformChannelPanel _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( WaveformChannelPanel );

  /* Finalize all embedded objects */
  ViewsFrame__Done( &_this->Frame );
  FlatHorzSlider__Done( &_this->SliderFrequency );
  FlatHorzSlider__Done( &_this->SliderAmplitude );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  FlatToggleButton__Done( &_this->ButtonSinus );
  FlatToggleButton__Done( &_this->ButtonSquare );
  FlatToggleButton__Done( &_this->ButtonRamp );
  FlatLabel__Done( &_this->CaptionText );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Waveform::ChannelPanel' */
void WaveformChannelPanel__Mark( WaveformChannelPanel _this )
{
  EwMarkObject( &_this->Frame );
  EwMarkObject( &_this->SliderFrequency );
  EwMarkObject( &_this->SliderAmplitude );
  EwMarkObject( &_this->Text1 );
  EwMarkObject( &_this->Text2 );
  EwMarkSlot( _this->OnChanged );
  EwMarkObject( &_this->ButtonSinus );
  EwMarkObject( &_this->ButtonSquare );
  EwMarkObject( &_this->ButtonRamp );
  EwMarkObject( &_this->CaptionText );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* Slot method, called when the user changed a slider value. */
void WaveformChannelPanel_OnSlider( WaveformChannelPanel _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnChanged, ((XObject)_this ));
}

/* Slot method, called when the user pressed the corresponding waveform selection 
   button. */
void WaveformChannelPanel_OnSinus( WaveformChannelPanel _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WaveformChannelPanel_OnSetWaveform( _this, WaveformWaveformTypeSinus );
  EwPostSignal( _this->OnChanged, ((XObject)_this ));
}

/* 'C' function for method : 'Waveform::ChannelPanel.OnSetCaption()' */
void WaveformChannelPanel_OnSetCaption( WaveformChannelPanel _this, XString value )
{
  EwRetainString( &_this->Caption, value );
  FlatLabel_OnSetString( &_this->CaptionText, value );
}

/* Slot method, called when the user pressed the corresponding waveform selection 
   button. */
void WaveformChannelPanel_OnSquare( WaveformChannelPanel _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WaveformChannelPanel_OnSetWaveform( _this, WaveformWaveformTypeSquare );
  EwPostSignal( _this->OnChanged, ((XObject)_this ));
}

/* Slot method, called when the user pressed the corresponding waveform selection 
   button. */
void WaveformChannelPanel_OnRamp( WaveformChannelPanel _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WaveformChannelPanel_OnSetWaveform( _this, WaveformWaveformTypeRamp );
  EwPostSignal( _this->OnChanged, ((XObject)_this ));
}

/* 'C' function for method : 'Waveform::ChannelPanel.OnSetWaveform()' */
void WaveformChannelPanel_OnSetWaveform( WaveformChannelPanel _this, XEnum value )
{
  _this->Waveform = value;
  FlatToggleButton_OnSetActive( &_this->ButtonSinus, (XBool)( value == WaveformWaveformTypeSinus 
  ));
  FlatToggleButton_OnSetActive( &_this->ButtonSquare, (XBool)( value == WaveformWaveformTypeSquare 
  ));
  FlatToggleButton_OnSetActive( &_this->ButtonRamp, (XBool)( value == WaveformWaveformTypeRamp 
  ));
}

/* Default onget method for the property 'Frequency' */
XInt32 WaveformChannelPanel_OnGetFrequency( WaveformChannelPanel _this )
{
  return _this->Frequency;
}

/* Default onset method for the property 'Frequency' */
void WaveformChannelPanel_OnSetFrequency( WaveformChannelPanel _this, XInt32 value )
{
  _this->Frequency = value;
}

/* Default onget method for the property 'Amplitude' */
XInt32 WaveformChannelPanel_OnGetAmplitude( WaveformChannelPanel _this )
{
  return _this->Amplitude;
}

/* Default onset method for the property 'Amplitude' */
void WaveformChannelPanel_OnSetAmplitude( WaveformChannelPanel _this, XInt32 value )
{
  _this->Amplitude = value;
}

/* Variants derived from the class : 'Waveform::ChannelPanel' */
EW_DEFINE_CLASS_VARIANTS( WaveformChannelPanel )
EW_END_OF_CLASS_VARIANTS( WaveformChannelPanel )

/* Virtual Method Table (VMT) for the class : 'Waveform::ChannelPanel' */
EW_DEFINE_CLASS( WaveformChannelPanel, CoreGroup, "Waveform::ChannelPanel" )
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
EW_END_OF_CLASS( WaveformChannelPanel )

/* Bitmap resource containing the border (frame) of all panels used within the demo. */
EW_DEFINE_BITMAP_RES( WaveformPanelBorder )
  EW_BITMAP_FRAMES( WaveformPanelBorder, Default, EW_DRIVER_VARIANT_ALPHA8, 30, 30, 0 )
    EW_BITMAP_FRAME( 28, 4, 2, 22, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( WaveformPanelBorder, Default )           /* ratio 16.00 % */
    0x70A80100, 0xC19FEF05, 0xFE130883, 0xA1B0C003, 0x14ED0DC3, 0xB0E84C4A, 0xFF558022,
    0xC8B06D6E, 0x73C563B1, 0x1C7830FF, 0xC920D1D9, 0xA24D1593, 0xE572A95C, 0x472E96C9,
    0x72598CC2, 0x36994D21, 0xE9D4D66F, 0x86CF2671, 0x08027F3E, 0x4F2893FA, 0xDE913AA3,
    0x69934A54, 0x1128A74C, 0x7528750A, 0x56AAC32A, 0x2AD54EB1, 0x914820D4, 0x23FC6D53,
    0x50A35187, 0xA1FEC00C, 0x6DB13882, 0x071B76DB, 0xF74B73CE, 0x2A573CDF, 0x00040400,
    0x00000000

  EW_BITMAPS_TABLE( WaveformPanelBorder )
    EW_BITMAP( WaveformPanelBorder, Default )
EW_END_OF_BITMAP_RES( WaveformPanelBorder )

/* Table with links to derived variants of the bitmap resource : 'Waveform::PanelBorder' */
EW_RES_WITHOUT_VARIANTS( WaveformPanelBorder )

/* Bitmap resource containing the icons for the waveform selction buttons. */
EW_DEFINE_BITMAP_RES( WaveformWaveformIcons )
  EW_BITMAP_FRAMES( WaveformWaveformIcons, Default, EW_DRIVER_VARIANT_ALPHA8, 24, 24, 0 )
    EW_BITMAP_FRAME( 1, 6, 1, 3, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 11, 2, 2, 20, 0x000000B4, 0x00000000 ),
    EW_BITMAP_FRAME( 12, 2, 1, 20, 0x00000114, 0x00000000 ),
    EW_BITMAP_FRAME( 11, 4, 2, 2, 0x000001B4, 0x00000000 ),
    EW_BITMAP_FRAME( 1, 11, 23, 2, 0x00000204, 0x00000000 )

  EW_BITMAP_PIXEL_R90( WaveformWaveformIcons, Default )         /* ratio 20.83 % */
    0x1C080100, 0x8F001048, 0xC98D087F, 0x61B050F1, 0x505704C3, 0x0FF843D9, 0x18874312,
    0xF8944205, 0x8C98DE6F, 0x40480120, 0x81939085, 0xA8A91990, 0x24EB77FB, 0xCE27874A,
    0xD2F2D3FD, 0xFF6A8561, 0x082CD49C, 0x0AB3E703, 0x081A053B, 0x2D1FEF94, 0x105B3BA0,
    0x5F8FF6C2, 0x953504A3, 0x2BA844E2, 0x14A94BC7, 0x322A65DB, 0x84562420, 0x84A2B95A,
    0xD6EB2AE1, 0x168728AE, 0x65F68B0D, 0x9F4D5A05, 0x41500506, 0x566DBFDA, 0xF42002E7,
    0x815EA7EF, 0x72E9FE78, 0x3FE637A9, 0x330B1760, 0xEFF1F8EB, 0x16CC8448, 0x38B2A5FE,
    0x1BA0E4A1, 0x9A442227, 0x00002031, 0x1C080100, 0xBFE05048, 0x16130883, 0xA130385C,
    0x170C83C3, 0x9148987A, 0x1888C422, 0x98CC5E09, 0x88C72371, 0x0C2E3F1E, 0xBFE35229,
    0xA24F2092, 0xA572A91C, 0x630F86C9, 0x4E1814C6, 0x1E844DA6, 0xA974B60C, 0x9F4BE793,
    0x2002813D, 0x4A2892B9, 0x8A9125A3, 0xE9B1583C, 0x6D499BD2, 0x00080C7E, 0xF0000100,
    0xC1A0B020, 0x2A0C062B, 0xCF10B85C, 0x230C52BF, 0xEF31842E, 0x1889241F, 0xF7C8FE05,
    0x8C464EAF, 0x03FDF854, 0x9A6251F3, 0x949CFC7F, 0x9FE8188C, 0x192B1E3D, 0xAED7FA5A,
    0x03854C45, 0x4723FD56, 0x034166F0, 0x9361FEC0, 0x8320B3E0, 0x2592FF67, 0xA9AF0828,
    0x9B50A7D3, 0x6FF7FBDA, 0x5487408C, 0xBADD6AB3, 0x7FC520B5, 0x1D881E9C, 0x58ACB64B,
    0x163B1B83, 0xE472182D, 0x5327815A, 0xF2D005BE, 0x3599DCE5, 0xD9DCE6DF, 0xA15028B3,
    0x4D1ED744, 0x062D74BA, 0x92E7556F, 0x2031F378, 0x1C080100, 0xC1A0B048, 0xFDFF0683,
    0xA0B0C843, 0x1F0786C2, 0x71286C42, 0x158245A2, 0x785C3A2F, 0x81C6A331, 0xE4523F1E,
    0xC9241228, 0xA6512692, 0x63F218B4, 0x3B2F864B, 0x2009549E, 0x3499CB26, 0xB89CDA05,
    0x974E2133, 0x0C32733F, 0x00000008, 0x1C080100, 0x3C001048, 0x2A130578, 0xDFEFF824,
    0x1B0587C2, 0x40089C42, 0x1687C522, 0xA8CC2A2F, 0x8EC3A231, 0x14823909, 0x49647228,
    0xA63B2790, 0x62F2B8D4, 0x272F8A4B, 0x133884C6, 0x0391C7E3, 0xB9D42E6B, 0x8ACE26F1,
    0x0CF2713E, 0x40613419, 0x00000000

  EW_BITMAPS_TABLE( WaveformWaveformIcons )
    EW_BITMAP( WaveformWaveformIcons, Default )
EW_END_OF_BITMAP_RES( WaveformWaveformIcons )

/* Table with links to derived variants of the bitmap resource : 'Waveform::WaveformIcons' */
EW_RES_WITHOUT_VARIANTS( WaveformWaveformIcons )

/* Embedded Wizard */
