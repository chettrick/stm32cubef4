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
#include "_AcceleratorAccelerator.h"
#include "_AnimatedListAnimatedList.h"
#include "_ApplicationAcceleratorScreen.h"
#include "_ApplicationAnimatedListScreen.h"
#include "_ApplicationApplication.h"
#include "_ApplicationClimaticScreen.h"
#include "_ApplicationHomeScreen.h"
#include "_ApplicationWaveformScreen.h"
#include "_ClimateClimate.h"
#include "_CoreGroup.h"
#include "_CoreHorizontalList.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_MasterDemoDemoScreen.h"
#include "_MasterDemoHomeButton.h"
#include "_MasterDemoInfoScreen.h"
#include "_MasterDemoListItem.h"
#include "_MasterDemoNavigationButton.h"
#include "_MasterDemoPaginationBar.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WaveformWaveform.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "MasterDemo.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000010E, /* ratio 66.67 % */
  0xB8001D00, 0x80000452, 0x24DE0023, 0x80064004, 0x00790018, 0x82E00194, 0x088345A2,
  0x90041606, 0x00138004, 0x313C0046, 0x4683A008, 0x38DB0583, 0xE5B0C894, 0x062086C4,
  0x40034802, 0x0030800F, 0x898CB4E4, 0x00470AB0, 0x54B08931, 0xC90E70A9, 0x0C012709,
  0x2666C001, 0xE9389500, 0x14B98CB0, 0x6E9A43E7, 0x18354A58, 0x00106921, 0x05426959,
  0x5025F520, 0x1A9C4C00, 0x42C00ADD, 0x01372BD2, 0x666961D8, 0x3C954EA1, 0xA89D6659,
  0x925DAA33, 0xEC229218, 0x000E000B, 0x00C74E34, 0xABF31A30, 0x9B13C562, 0x552B8DF2,
  0x24924EA1, 0x00000203, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 320, 240 }};
static const XStringRes _Const0001 = { _StringsDefault0, 0x0003 };
static const XRect _Const0002 = {{ 0, 200 }, { 320, 240 }};
static const XRect _Const0003 = {{ 0, 0 }, { 320, 40 }};
static const XRect _Const0004 = {{ 25, 40 }, { 295, 200 }};
static const XPoint _Const0005 = { 90, 0 };
static const XRect _Const0006 = {{ 25, 60 }, { 295, 170 }};
static const XRect _Const0007 = {{ 0, 40 }, { 25, 180 }};
static const XRect _Const0008 = {{ 295, 40 }, { 320, 180 }};
static const XRect _Const0009 = {{ 0, 180 }, { 320, 200 }};
static const XPoint _Const000A = { 0, 200 };
static const XPoint _Const000B = { 320, 200 };
static const XPoint _Const000C = { 320, 240 };
static const XPoint _Const000D = { 0, 240 };
static const XRect _Const000E = {{ 0, 200 }, { 170, 240 }};
static const XRect _Const000F = {{ 220, 220 }, { 310, 238 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x0011 };
static const XRect _Const0011 = {{ 220, 200 }, { 310, 220 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x0019 };
static const XRect _Const0013 = {{ 440, 0 }, { 480, 40 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x0036 };
static const XStringRes _Const0015 = { _StringsDefault0, 0x0049 };
static const XStringRes _Const0016 = { _StringsDefault0, 0x005A };
static const XStringRes _Const0017 = { _StringsDefault0, 0x0070 };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ApplicationHomeScreen__Init( &_this->HomeScreen, &_this->_XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffect, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->AutoDemoTimer, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->HomeScreen, _Const0000 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffect, EffectsTimingEaseIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RectEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffect, 300 );
  CoreTimer_OnSetPeriod( &_this->AutoDemoTimer, 1000 );
  CoreTimer_OnSetBegin( &_this->AutoDemoTimer, 30000 );
  CoreTimer_OnSetEnabled( &_this->AutoDemoTimer, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->HomeScreen ), 0 );
  _this->HomeScreen.OnAcceleratorDemo = EwNewSlot( _this, ApplicationApplication_goAccelerator 
  );
  _this->HomeScreen.OnWaveformGenerator = EwNewSlot( _this, ApplicationApplication_goWaveform 
  );
  _this->HomeScreen.OnAnimatedList = EwNewSlot( _this, ApplicationApplication_goAnimatedList 
  );
  _this->HomeScreen.OnClimateCabinet = EwNewSlot( _this, ApplicationApplication_goClima 
  );
  _this->HomeScreen.OnInfo = EwNewSlot( _this, ApplicationApplication_onShowInfo 
  );
  _this->HomeScreen.OnQuit = EwNewSlot( _this, ApplicationApplication_goQuit );
  _this->AutoDemoTimer.OnTrigger = EwNewSlot( _this, ApplicationApplication_AutoDemoSlot 
  );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ApplicationHomeScreen__ReInit( &_this->HomeScreen );
  EffectsRectEffect__ReInit( &_this->RectEffect );
  CoreTimer__ReInit( &_this->AutoDemoTimer );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationApplication );

  /* Finalize all embedded objects */
  ApplicationHomeScreen__Done( &_this->HomeScreen );
  EffectsRectEffect__Done( &_this->RectEffect );
  CoreTimer__Done( &_this->AutoDemoTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Application' */
void ApplicationApplication__Mark( ApplicationApplication _this )
{
  EwMarkObject( &_this->HomeScreen );
  EwMarkObject( &_this->RectEffect );
  EwMarkObject( _this->CurrentApp );
  EwMarkObject( &_this->AutoDemoTimer );

  /* Give the super class a chance to mark its objects and references */
  CoreRoot__Mark( &_this->_Super );
}

/* The method DriveCursorHitting() exists for the integration purpose with the underlying 
   target system. You will never need to invoke this method directly from your GUI 
   application. Usually the method will be invoked in response to to touch events 
   received in the main() message loop from the target specific touch screen driver.
   The parameters passed to the method determine the event. aDown determines whether 
   the user has pressed (== 'true') or released (== 'false') his finger at the position 
   aPos relative to the top-left origin of the GUI application area. The parameter 
   aFinger specifies the finger (or mouse button) the user pressed for this operation. 
   The first finger (mouse button) has the number 0, the second 1, and so far.
   Please note, this method is limited to process a single touch (or mouse) event 
   at the same time. When integrating with a target system supporting multi-touch 
   please use the method @DriveMultiTouchHitting(). */
XBool ApplicationApplication_DriveCursorHitting( ApplicationApplication _this, XBool 
  aDown, XInt32 aFinger, XPoint aPos )
{
  EwIdleSignal( EwNewSlot( _this, ApplicationApplication_ResetAutoDemo ), ((XObject)_this 
    ));
  return CoreRoot_DriveCursorHitting((CoreRoot)_this, aDown, aFinger, aPos );
}

/* This is a slot method. */
void ApplicationApplication_onShowInfo( ApplicationApplication _this, XObject sender )
{
  MasterDemoInfoScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  demo = EwNewObject( MasterDemoInfoScreen, 0 );
  demo->OnHome = EwNewSlot( _this, ApplicationApplication_onHideInfo );
  CoreRectView__OnSetBounds( demo, EwSetRectOrigin( demo->Super2.Bounds, EwSetPointY( 
  demo->Super2.Bounds.Point1, EwGetRectH( _this->Super3.Bounds ))));
  CoreGroup__Add( _this, ((CoreView)demo ), 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 0 );
  _this->CurrentApp = ((CoreGroup)demo );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 0 );
  _this->RectEffect.Value1 = _this->CurrentApp->Super1.Bounds;
  _this->RectEffect.Value2 = _this->HomeScreen.Super2.Bounds;
  _this->RectEffect.Outlet = EwNewRef( _this->CurrentApp, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 1 );
  _this->RectEffect.Super1.OnFinished = EwNullSlot;
}

/* This is a slot method. */
void ApplicationApplication_onHideInfo( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCastObject( _this->CurrentApp, MasterDemoInfoScreen ) != 0 )
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 0 );
    _this->RectEffect.Value1 = _this->CurrentApp->Super1.Bounds;
    _this->RectEffect.Value2 = EwMoveRectPos( _this->Super3.Bounds, EwNewPoint( 
    0, EwGetRectH( _this->Super3.Bounds )));
    _this->RectEffect.Outlet = EwNewRef( _this->CurrentApp, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect, 1 );
    _this->RectEffect.Super1.OnFinished = EwNewSlot( _this, ApplicationApplication_goHome 
    );
  }
}

/* Slot method to trigger the next phase of the auto demo. */
void ApplicationApplication_AutoDemoSlot( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->AutoDemoState == 0 )
  {
    EwPostSignal( EwNewSlot( _this, ApplicationApplication_goHome ), ((XObject)_this 
      ));
    EwPostSignal( EwNewSlot( &_this->HomeScreen, ApplicationHomeScreen_OnReset ), 
      ((XObject)_this ));
  }
  else
    if ( _this->AutoDemoState == 1 )
      EwPostSignal( EwNewSlot( _this, ApplicationApplication_goClima ), ((XObject)_this 
        ));
    else
      if ( _this->AutoDemoState == 31 )
        EwPostSignal( EwNewSlot( _this, ApplicationApplication_goHome ), ((XObject)_this 
          ));
      else
        if ( _this->AutoDemoState == 32 )
          EwPostSignal( EwNewSlot( &_this->HomeScreen, ApplicationHomeScreen_OnRight 
            ), ((XObject)_this ));
        else
          if ( _this->AutoDemoState == 33 )
            EwPostSignal( EwNewSlot( _this, ApplicationApplication_goAnimatedList 
              ), ((XObject)_this ));
          else
            if ( _this->AutoDemoState == 63 )
              EwPostSignal( EwNewSlot( _this, ApplicationApplication_goHome ), ((XObject)_this 
                ));
            else
              if ( _this->AutoDemoState == 64 )
                EwPostSignal( EwNewSlot( &_this->HomeScreen, ApplicationHomeScreen_OnRight 
                  ), ((XObject)_this ));
              else
                if ( _this->AutoDemoState == 65 )
                  EwPostSignal( EwNewSlot( _this, ApplicationApplication_goWaveform 
                    ), ((XObject)_this ));
                else
                  if ( _this->AutoDemoState == 85 )
                    EwPostSignal( EwNewSlot( _this, ApplicationApplication_goHome 
                      ), ((XObject)_this ));
                  else
                    if ( _this->AutoDemoState == 86 )
                      EwPostSignal( EwNewSlot( &_this->HomeScreen, ApplicationHomeScreen_OnRight 
                        ), ((XObject)_this ));
                    else
                      if ( _this->AutoDemoState == 87 )
                        EwPostSignal( EwNewSlot( _this, ApplicationApplication_goAccelerator 
                          ), ((XObject)_this ));
                      else
                        if ( _this->AutoDemoState == 117 )
                          EwPostSignal( EwNewSlot( _this, ApplicationApplication_goHome 
                            ), ((XObject)_this ));
                        else
                          if ( _this->AutoDemoState == 118 )
                            EwPostSignal( EwNewSlot( _this, ApplicationApplication_onShowInfo 
                              ), ((XObject)_this ));

  if ( _this->AutoDemoState > 124 )
    _this->AutoDemoState = -1;

  _this->AutoDemoState = _this->AutoDemoState + 1;
}

/* Slot method to reset the auto demo. */
void ApplicationApplication_ResetAutoDemo( ApplicationApplication _this, XObject 
  sender )
{
  MasterDemoDemoScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->AutoDemoState = 0;
  demo = EwCastObject( _this->CurrentApp, MasterDemoDemoScreen );

  if ( demo != 0 )
    MasterDemoDemoScreen__OnSetAutoDemo( demo, 0 );

  CoreTimer_OnSetEnabled( &_this->AutoDemoTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->AutoDemoTimer, 1 );
}

/* This is the final slot method in case the master demo should be quit. */
void ApplicationApplication_goQuit( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwTrace( "%s", EwLoadString( &_Const0001 ));
}

/* This is a slot method. */
void ApplicationApplication_goHome( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->CurrentApp != 0 )
    CoreGroup__Remove( _this, ((CoreView)_this->CurrentApp ));

  _this->CurrentApp = 0;
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeScreen, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 1 );
}

/* Slot method to launch the demo application. */
void ApplicationApplication_goClima( ApplicationApplication _this, XObject sender )
{
  ApplicationClimaticScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  demo = EwNewObject( ApplicationClimaticScreen, 0 );
  demo->Super1.OnHome = EwNewSlot( _this, ApplicationApplication_goHome );
  MasterDemoDemoScreen__OnSetAutoDemo( demo, (XBool)( _this->AutoDemoState > 0 ));
  CoreGroup__Add( _this, ((CoreView)demo ), 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeScreen, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 0 );
  _this->CurrentApp = ((CoreGroup)demo );
}

/* Slot method to launch the demo application. */
void ApplicationApplication_goAnimatedList( ApplicationApplication _this, XObject 
  sender )
{
  ApplicationAnimatedListScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  demo = EwNewObject( ApplicationAnimatedListScreen, 0 );
  demo->Super1.OnHome = EwNewSlot( _this, ApplicationApplication_goHome );
  MasterDemoDemoScreen__OnSetAutoDemo( demo, (XBool)( _this->AutoDemoState > 0 ));
  CoreGroup__Add( _this, ((CoreView)demo ), 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeScreen, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 0 );
  _this->CurrentApp = ((CoreGroup)demo );
}

/* Slot method to launch the demo application. */
void ApplicationApplication_goWaveform( ApplicationApplication _this, XObject sender )
{
  ApplicationWaveformScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  demo = EwNewObject( ApplicationWaveformScreen, 0 );
  demo->Super1.OnHome = EwNewSlot( _this, ApplicationApplication_goHome );
  MasterDemoDemoScreen__OnSetAutoDemo( demo, (XBool)( _this->AutoDemoState > 0 ));
  CoreGroup__Add( _this, ((CoreView)demo ), 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeScreen, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 0 );
  _this->CurrentApp = ((CoreGroup)demo );
}

/* Slot method to launch the demo application. */
void ApplicationApplication_goAccelerator( ApplicationApplication _this, XObject 
  sender )
{
  ApplicationAcceleratorScreen demo;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  demo = EwNewObject( ApplicationAcceleratorScreen, 0 );
  demo->Super1.OnHome = EwNewSlot( _this, ApplicationApplication_goHome );
  MasterDemoDemoScreen__OnSetAutoDemo( demo, (XBool)( _this->AutoDemoState > 0 ));
  CoreGroup__Add( _this, ((CoreView)demo ), 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeScreen, 0 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeScreen, 0 );
  _this->CurrentApp = ((CoreGroup)demo );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreRoot_Restack,
  CoreGroup_Remove,
  CoreRoot_Add,
  ApplicationApplication_DriveCursorHitting,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__Init( ApplicationHomeScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->RectangleBottom, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->RectangleTop, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_XObject, 0 );
  MasterDemoNavigationButton__Init( &_this->IconButtonLeft, &_this->_XObject, 0 );
  MasterDemoNavigationButton__Init( &_this->IconButtonRight, &_this->_XObject, 0 );
  MasterDemoPaginationBar__Init( &_this->Indicator, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->InfoTouchHandler, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->EmWiLogo, &_this->_XObject, 0 );
  ViewsText__Init( &_this->InfoText, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->InfoNavigation, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_XObject, 0 );
  MasterDemoHomeButton__Init( &_this->HomeButton, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationHomeScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, MasterDemoEmWiRed );
  CoreRectView__OnSetBounds( &_this->RectangleBottom, _Const0002 );
  ViewsRectangle_OnSetColor( &_this->RectangleBottom, MasterDemoEmWiGray );
  CoreRectView__OnSetBounds( &_this->RectangleTop, _Const0003 );
  ViewsRectangle_OnSetColor( &_this->RectangleTop, MasterDemoEmWiGray );
  CoreView_OnSetLayout((CoreView)&_this->SlideTouchHandler, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0004 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0005 );
  _this->SlideTouchHandler.SlideVert = 0;
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 0.500000f );
  CoreRectView__OnSetBounds( &_this->HorizontalList, _Const0006 );
  CoreHorizontalList_OnSetPaddingRight( &_this->HorizontalList, 90 );
  CoreHorizontalList_OnSetScrollOffset( &_this->HorizontalList, -90 );
  CoreHorizontalList_OnSetPaddingLeft( &_this->HorizontalList, 90 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList, 90 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 4 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList, EW_CLASS( MasterDemoListItem 
  ));
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingFastIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 200 );
  CoreRectView__OnSetBounds( &_this->IconButtonLeft, _Const0007 );
  MasterDemoNavigationButton_OnSetImageIndex( &_this->IconButtonLeft, 2 );
  CoreRectView__OnSetBounds( &_this->IconButtonRight, _Const0008 );
  MasterDemoNavigationButton_OnSetImageIndex( &_this->IconButtonRight, 3 );
  CoreRectView__OnSetBounds( &_this->Indicator, _Const0009 );
  MasterDemoPaginationBar_OnSetNoOfIndicators( &_this->Indicator, 4 );
  CoreQuadView__OnSetPoint4( &_this->InfoTouchHandler, _Const000A );
  CoreQuadView__OnSetPoint3( &_this->InfoTouchHandler, _Const000B );
  CoreQuadView__OnSetPoint2( &_this->InfoTouchHandler, _Const000C );
  CoreQuadView__OnSetPoint1( &_this->InfoTouchHandler, _Const000D );
  CoreRectView__OnSetBounds( &_this->EmWiLogo, _Const000E );
  CoreRectView__OnSetBounds( &_this->InfoText, _Const000F );
  ViewsText_OnSetString( &_this->InfoText, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->InfoNavigation, _Const0011 );
  CoreRectView__OnSetBounds( &_this->Caption, _Const0003 );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const0012 ));
  CoreView_OnSetLayout((CoreView)&_this->HomeButton, 0 );
  CoreRectView__OnSetBounds( &_this->HomeButton, _Const0013 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->HomeButton, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->HomeButton, 0 );
  MasterDemoHomeButton_OnSetImageIndex( &_this->HomeButton, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RectangleBottom ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RectangleTop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconButtonLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconButtonRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Indicator ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->EmWiLogo ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoText ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfoNavigation ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Caption ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HomeButton ), 0 );
  _this->SlideTouchHandler.OnSlide = EwNewSlot( _this, ApplicationHomeScreen_onUpdatePage 
  );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, ApplicationHomeScreen_onUpdatePage 
  );
  _this->HorizontalList.OnLoadItem = EwNewSlot( _this, ApplicationHomeScreen_OnLoadItem 
  );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList, &_this->SlideTouchHandler 
  );
  _this->Int32Effect.Super1.OnFinished = EwNewSlot( _this, ApplicationHomeScreen_onUpdatePage 
  );
  _this->Int32Effect.Outlet = EwNewRef( &_this->HorizontalList, CoreHorizontalList_OnGetScrollOffset, 
  CoreHorizontalList_OnSetScrollOffset );
  _this->IconButtonLeft.OnAction = EwNewSlot( _this, ApplicationHomeScreen_OnLeft 
  );
  _this->IconButtonRight.OnAction = EwNewSlot( _this, ApplicationHomeScreen_OnRight 
  );
  _this->InfoTouchHandler.OnPress = EwNewSlot( _this, ApplicationHomeScreen_onInfo 
  );
  ViewsImage_OnSetBitmap( &_this->EmWiLogo, EwLoadResource( &MasterDemoLogo, ResourcesBitmap 
  ));
  ViewsText_OnSetFont( &_this->InfoText, EwLoadResource( &MasterDemoDescriptionFont, 
  ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->InfoNavigation, EwLoadResource( &MasterDemoNavigation, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &MasterDemoCaptionFont, 
  ResourcesFont ));
  _this->HomeButton.OnChange = EwNewSlot( _this, ApplicationHomeScreen_onQuit );

  /* Call the user defined constructor */
  ApplicationHomeScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__ReInit( ApplicationHomeScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsRectangle__ReInit( &_this->RectangleBottom );
  ViewsRectangle__ReInit( &_this->RectangleTop );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreHorizontalList__ReInit( &_this->HorizontalList );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  MasterDemoNavigationButton__ReInit( &_this->IconButtonLeft );
  MasterDemoNavigationButton__ReInit( &_this->IconButtonRight );
  MasterDemoPaginationBar__ReInit( &_this->Indicator );
  CoreSimpleTouchHandler__ReInit( &_this->InfoTouchHandler );
  ViewsImage__ReInit( &_this->EmWiLogo );
  ViewsText__ReInit( &_this->InfoText );
  ViewsImage__ReInit( &_this->InfoNavigation );
  ViewsText__ReInit( &_this->Caption );
  MasterDemoHomeButton__ReInit( &_this->HomeButton );
}

/* Finalizer method for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__Done( ApplicationHomeScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationHomeScreen );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsRectangle__Done( &_this->RectangleBottom );
  ViewsRectangle__Done( &_this->RectangleTop );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreHorizontalList__Done( &_this->HorizontalList );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  MasterDemoNavigationButton__Done( &_this->IconButtonLeft );
  MasterDemoNavigationButton__Done( &_this->IconButtonRight );
  MasterDemoPaginationBar__Done( &_this->Indicator );
  CoreSimpleTouchHandler__Done( &_this->InfoTouchHandler );
  ViewsImage__Done( &_this->EmWiLogo );
  ViewsText__Done( &_this->InfoText );
  ViewsImage__Done( &_this->InfoNavigation );
  ViewsText__Done( &_this->Caption );
  MasterDemoHomeButton__Done( &_this->HomeButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__Mark( ApplicationHomeScreen _this )
{
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->RectangleBottom );
  EwMarkObject( &_this->RectangleTop );
  EwMarkObject( &_this->SlideTouchHandler );
  EwMarkObject( &_this->HorizontalList );
  EwMarkObject( &_this->Int32Effect );
  EwMarkObject( &_this->IconButtonLeft );
  EwMarkObject( &_this->IconButtonRight );
  EwMarkObject( &_this->Indicator );
  EwMarkObject( &_this->InfoTouchHandler );
  EwMarkObject( &_this->EmWiLogo );
  EwMarkObject( &_this->InfoText );
  EwMarkObject( &_this->InfoNavigation );
  EwMarkObject( &_this->Caption );
  EwMarkObject( &_this->HomeButton );
  EwMarkSlot( _this->OnAcceleratorDemo );
  EwMarkSlot( _this->OnWaveformGenerator );
  EwMarkSlot( _this->OnAnimatedList );
  EwMarkSlot( _this->OnClimateCabinet );
  EwMarkSlot( _this->OnInfo );
  EwMarkSlot( _this->OnQuit );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHomeScreen_Init( ApplicationHomeScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, ApplicationHomeScreen_onUpdatePage ), ((XObject)_this 
    ));
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationHomeScreen_OnLoadItem( ApplicationHomeScreen _this, XObject sender )
{
  XInt32 itemNo;
  MasterDemoListItem itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList.Item;
  itemView = EwCastObject( _this->HorizontalList.View, MasterDemoListItem );

  if ( itemView == 0 )
    return;

  switch ( itemNo )
  {
    case 0 :
    {
      MasterDemoListItem_OnSetCaption( itemView, EwLoadString( &_Const0014 ));
      MasterDemoListItem_OnSetIconIndex( itemView, 0 );
      itemView->OnAction = _this->OnClimateCabinet;
    }
    break;

    case 1 :
    {
      MasterDemoListItem_OnSetCaption( itemView, EwLoadString( &_Const0015 ));
      MasterDemoListItem_OnSetIconIndex( itemView, 6 );
      itemView->OnAction = _this->OnAnimatedList;
    }
    break;

    case 2 :
    {
      MasterDemoListItem_OnSetCaption( itemView, EwLoadString( &_Const0016 ));
      MasterDemoListItem_OnSetIconIndex( itemView, 5 );
      itemView->OnAction = _this->OnWaveformGenerator;
    }
    break;

    case 3 :
    {
      MasterDemoListItem_OnSetCaption( itemView, EwLoadString( &_Const0017 ));
      MasterDemoListItem_OnSetIconIndex( itemView, 11 );
      itemView->OnAction = _this->OnAcceleratorDemo;
    }
    break;

    default : 
      ;
  }
}

/* Slot method to handle left navigation. */
void ApplicationHomeScreen_OnLeft( ApplicationHomeScreen _this, XObject sender )
{
  XInt32 scrollPos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  scrollPos = _this->HorizontalList.ScrollOffset;
  scrollPos = scrollPos + _this->SlideTouchHandler.SnapNext.X;

  if ( scrollPos > 0 )
    scrollPos = 0;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
  _this->Int32Effect.Value1 = _this->HorizontalList.ScrollOffset;
  _this->Int32Effect.Value2 = scrollPos;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
}

/* This is a slot method. */
void ApplicationHomeScreen_onUpdatePage( ApplicationHomeScreen _this, XObject sender )
{
  XInt32 selection;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  selection = 0;

  if ( _this->SlideTouchHandler.SnapNext.X > 0 )
    selection = -_this->HorizontalList.ScrollOffset / _this->SlideTouchHandler.SnapNext.X;

  MasterDemoPaginationBar_OnSetSelection( &_this->Indicator, selection );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->IconButtonLeft, (XBool)( selection > 
  0 ));
  CoreGroup_OnSetEnabled((CoreGroup)&_this->IconButtonRight, (XBool)( selection 
  < ( _this->HorizontalList.NoOfItems - 1 )));
}

/* Slot method to handle touch event on info bar. */
void ApplicationHomeScreen_onInfo( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnInfo, ((XObject)_this ));
}

/* Slot method to be called when the user presses the home button. */
void ApplicationHomeScreen_onQuit( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnQuit, ((XObject)_this ));
}

/* Slot method to handle right navigation. */
void ApplicationHomeScreen_OnRight( ApplicationHomeScreen _this, XObject sender )
{
  XInt32 scrollPos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  scrollPos = _this->HorizontalList.ScrollOffset;
  scrollPos = scrollPos - _this->SlideTouchHandler.SnapNext.X;

  if ( scrollPos < (( -_this->HorizontalList.NoOfItems + 1 ) * _this->SlideTouchHandler.SnapNext.X 
      ))
    scrollPos = ( -_this->HorizontalList.NoOfItems + 1 ) * _this->SlideTouchHandler.SnapNext.X;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
  _this->Int32Effect.Value1 = _this->HorizontalList.ScrollOffset;
  _this->Int32Effect.Value2 = scrollPos;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
}

/* Slot method to navigate to the left most item. */
void ApplicationHomeScreen_OnReset( ApplicationHomeScreen _this, XObject sender )
{
  XInt32 scrollPos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  scrollPos = 0;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
  _this->Int32Effect.Value1 = _this->HorizontalList.ScrollOffset;
  _this->Int32Effect.Value2 = scrollPos;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
}

/* Variants derived from the class : 'Application::HomeScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHomeScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationHomeScreen )

/* Virtual Method Table (VMT) for the class : 'Application::HomeScreen' */
EW_DEFINE_CLASS( ApplicationHomeScreen, CoreGroup, "Application::HomeScreen" )
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
EW_END_OF_CLASS( ApplicationHomeScreen )

/* Initializer for the class 'Application::ClimaticScreen' */
void ApplicationClimaticScreen__Init( ApplicationClimaticScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  MasterDemoDemoScreen__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ClimateClimate__Init( &_this->Climate, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationClimaticScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Climate, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Climate ), -1 );
}

/* Re-Initializer for the class 'Application::ClimaticScreen' */
void ApplicationClimaticScreen__ReInit( ApplicationClimaticScreen _this )
{
  /* At first re-initialize the super class ... */
  MasterDemoDemoScreen__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ClimateClimate__ReInit( &_this->Climate );
}

/* Finalizer method for the class 'Application::ClimaticScreen' */
void ApplicationClimaticScreen__Done( ApplicationClimaticScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationClimaticScreen );

  /* Finalize all embedded objects */
  ClimateClimate__Done( &_this->Climate );

  /* Don't forget to deinitialize the super class ... */
  MasterDemoDemoScreen__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ClimaticScreen' */
void ApplicationClimaticScreen__Mark( ApplicationClimaticScreen _this )
{
  EwMarkObject( &_this->Climate );

  /* Give the super class a chance to mark its objects and references */
  MasterDemoDemoScreen__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::ClimaticScreen.OnSetAutoDemo()' */
void ApplicationClimaticScreen_OnSetAutoDemo( ApplicationClimaticScreen _this, XBool 
  value )
{
  if ( value == _this->Super1.AutoDemo )
    return;

  _this->Super1.AutoDemo = value;
  CoreTimer_OnSetEnabled( &_this->Climate.AutoDemoTimer, value );
}

/* Variants derived from the class : 'Application::ClimaticScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationClimaticScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationClimaticScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ClimaticScreen' */
EW_DEFINE_CLASS( ApplicationClimaticScreen, MasterDemoDemoScreen, "Application::ClimaticScreen" )
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
  ApplicationClimaticScreen_OnSetAutoDemo,
EW_END_OF_CLASS( ApplicationClimaticScreen )

/* Initializer for the class 'Application::AnimatedListScreen' */
void ApplicationAnimatedListScreen__Init( ApplicationAnimatedListScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  MasterDemoDemoScreen__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  AnimatedListAnimatedList__Init( &_this->AnimatedList, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationAnimatedListScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->AnimatedList, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->AnimatedList ), -1 );
}

/* Re-Initializer for the class 'Application::AnimatedListScreen' */
void ApplicationAnimatedListScreen__ReInit( ApplicationAnimatedListScreen _this )
{
  /* At first re-initialize the super class ... */
  MasterDemoDemoScreen__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  AnimatedListAnimatedList__ReInit( &_this->AnimatedList );
}

/* Finalizer method for the class 'Application::AnimatedListScreen' */
void ApplicationAnimatedListScreen__Done( ApplicationAnimatedListScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationAnimatedListScreen );

  /* Finalize all embedded objects */
  AnimatedListAnimatedList__Done( &_this->AnimatedList );

  /* Don't forget to deinitialize the super class ... */
  MasterDemoDemoScreen__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::AnimatedListScreen' */
void ApplicationAnimatedListScreen__Mark( ApplicationAnimatedListScreen _this )
{
  EwMarkObject( &_this->AnimatedList );

  /* Give the super class a chance to mark its objects and references */
  MasterDemoDemoScreen__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::AnimatedListScreen.OnSetAutoDemo()' */
void ApplicationAnimatedListScreen_OnSetAutoDemo( ApplicationAnimatedListScreen _this, 
  XBool value )
{
  if ( value == _this->Super1.AutoDemo )
    return;

  _this->Super1.AutoDemo = value;
  CoreTimer_OnSetEnabled( &_this->AnimatedList.AutoDemoTimer, value );
}

/* Variants derived from the class : 'Application::AnimatedListScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAnimatedListScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationAnimatedListScreen )

/* Virtual Method Table (VMT) for the class : 'Application::AnimatedListScreen' */
EW_DEFINE_CLASS( ApplicationAnimatedListScreen, MasterDemoDemoScreen, "Application::AnimatedListScreen" )
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
  ApplicationAnimatedListScreen_OnSetAutoDemo,
EW_END_OF_CLASS( ApplicationAnimatedListScreen )

/* Initializer for the class 'Application::WaveformScreen' */
void ApplicationWaveformScreen__Init( ApplicationWaveformScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  MasterDemoDemoScreen__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  WaveformWaveform__Init( &_this->Waveform, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationWaveformScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Waveform, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Waveform ), -1 );
}

/* Re-Initializer for the class 'Application::WaveformScreen' */
void ApplicationWaveformScreen__ReInit( ApplicationWaveformScreen _this )
{
  /* At first re-initialize the super class ... */
  MasterDemoDemoScreen__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  WaveformWaveform__ReInit( &_this->Waveform );
}

/* Finalizer method for the class 'Application::WaveformScreen' */
void ApplicationWaveformScreen__Done( ApplicationWaveformScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationWaveformScreen );

  /* Finalize all embedded objects */
  WaveformWaveform__Done( &_this->Waveform );

  /* Don't forget to deinitialize the super class ... */
  MasterDemoDemoScreen__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::WaveformScreen' */
void ApplicationWaveformScreen__Mark( ApplicationWaveformScreen _this )
{
  EwMarkObject( &_this->Waveform );

  /* Give the super class a chance to mark its objects and references */
  MasterDemoDemoScreen__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::WaveformScreen.OnSetAutoDemo()' */
void ApplicationWaveformScreen_OnSetAutoDemo( ApplicationWaveformScreen _this, XBool 
  value )
{
  if ( value == _this->Super1.AutoDemo )
    return;

  _this->Super1.AutoDemo = value;
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Waveform.AutoDemoTimer, value 
  );
}

/* Variants derived from the class : 'Application::WaveformScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWaveformScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationWaveformScreen )

/* Virtual Method Table (VMT) for the class : 'Application::WaveformScreen' */
EW_DEFINE_CLASS( ApplicationWaveformScreen, MasterDemoDemoScreen, "Application::WaveformScreen" )
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
  ApplicationWaveformScreen_OnSetAutoDemo,
EW_END_OF_CLASS( ApplicationWaveformScreen )

/* Initializer for the class 'Application::AcceleratorScreen' */
void ApplicationAcceleratorScreen__Init( ApplicationAcceleratorScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  MasterDemoDemoScreen__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  AcceleratorAccelerator__Init( &_this->Accelerator, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationAcceleratorScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Accelerator, _Const0000 );
  _this->Accelerator.NoOfItemsRectCopy = 16;
  _this->Accelerator.NoOfItemsBmpCopy = 8;
  _this->Accelerator.NoOfItemsRectBlend = 6;
  _this->Accelerator.NoOfItemsBmpBlend = 6;
  _this->Accelerator.NoOfItemsAlpha8Blend = 6;
  CoreGroup__Add( _this, ((CoreView)&_this->Accelerator ), -1 );
}

/* Re-Initializer for the class 'Application::AcceleratorScreen' */
void ApplicationAcceleratorScreen__ReInit( ApplicationAcceleratorScreen _this )
{
  /* At first re-initialize the super class ... */
  MasterDemoDemoScreen__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  AcceleratorAccelerator__ReInit( &_this->Accelerator );
}

/* Finalizer method for the class 'Application::AcceleratorScreen' */
void ApplicationAcceleratorScreen__Done( ApplicationAcceleratorScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationAcceleratorScreen );

  /* Finalize all embedded objects */
  AcceleratorAccelerator__Done( &_this->Accelerator );

  /* Don't forget to deinitialize the super class ... */
  MasterDemoDemoScreen__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::AcceleratorScreen' */
void ApplicationAcceleratorScreen__Mark( ApplicationAcceleratorScreen _this )
{
  EwMarkObject( &_this->Accelerator );

  /* Give the super class a chance to mark its objects and references */
  MasterDemoDemoScreen__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::AcceleratorScreen.OnSetAutoDemo()' */
void ApplicationAcceleratorScreen_OnSetAutoDemo( ApplicationAcceleratorScreen _this, 
  XBool value )
{
  if ( value == _this->Super1.AutoDemo )
    return;

  _this->Super1.AutoDemo = value;
  CoreTimer_OnSetEnabled( &_this->Accelerator.AutoDemoTimer, value );
}

/* Variants derived from the class : 'Application::AcceleratorScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAcceleratorScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationAcceleratorScreen )

/* Virtual Method Table (VMT) for the class : 'Application::AcceleratorScreen' */
EW_DEFINE_CLASS( ApplicationAcceleratorScreen, MasterDemoDemoScreen, "Application::AcceleratorScreen" )
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
  ApplicationAcceleratorScreen_OnSetAutoDemo,
EW_END_OF_CLASS( ApplicationAcceleratorScreen )

/* Embedded Wizard */
