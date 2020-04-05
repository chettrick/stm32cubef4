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

#ifndef _ClimateClimate_H
#define _ClimateClimate_H

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

#include "_ClimateDiagram.h"
#include "_ClimateStartButton.h"
#include "_ClimateStatusBar.h"
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsRectEffect.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Climate::Climate */
#ifndef _ClimateClimate_
  EW_DECLARE_CLASS( ClimateClimate )
#define _ClimateClimate_
#endif

/* Forward declaration of the class Climate::DataItem */
#ifndef _ClimateDataItem_
  EW_DECLARE_CLASS( ClimateDataItem )
#define _ClimateDataItem_
#endif

/* Forward declaration of the class Climate::DeviceClass */
#ifndef _ClimateDeviceClass_
  EW_DECLARE_CLASS( ClimateDeviceClass )
#define _ClimateDeviceClass_
#endif

/* Forward declaration of the class Climate::MenuItem */
#ifndef _ClimateMenuItem_
  EW_DECLARE_CLASS( ClimateMenuItem )
#define _ClimateMenuItem_
#endif

/* Forward declaration of the class Climate::SliderItem */
#ifndef _ClimateSliderItem_
  EW_DECLARE_CLASS( ClimateSliderItem )
#define _ClimateSliderItem_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* This is a GUI component. */
EW_DEFINE_FIELDS( ClimateClimate, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_VARIABLE( FirstMenuItem,   ClimateMenuItem )
  EW_VARIABLE( LastMenuItem,    ClimateMenuItem )
  EW_OBJECT  ( MoveMenuEffect,  EffectsInt32Effect )
  EW_VARIABLE( Device,          ClimateDeviceClass )
  EW_OBJECT  ( StatusBar,       ClimateStatusBar )
  EW_OBJECT  ( Diagram,         ClimateDiagram )
  EW_OBJECT  ( StartButton,     ClimateStartButton )
  EW_OBJECT  ( RectEffect,      EffectsRectEffect )
  EW_OBJECT  ( MoveSliderEffect, EffectsInt32Effect )
  EW_VARIABLE( slider,          ClimateSliderItem )
  EW_VARIABLE( dataItem,        ClimateDataItem )
  EW_VARIABLE( dataItemOriginX, XInt32 )
  EW_VARIABLE( AutoState,       XInt32 )
  EW_OBJECT  ( AutoDemoTimer,   CoreTimer )
EW_END_OF_FIELDS( ClimateClimate )

/* Virtual Method Table (VMT) for the class : 'Climate::Climate' */
EW_DEFINE_METHODS( ClimateClimate, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ClimateClimate )

/* Slot method to perform the menu move animation. */
void ClimateClimate_onAnimateSlider( ClimateClimate _this, XObject sender );

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ClimateClimate_Init( ClimateClimate _this, XHandle aArg );

/* The method 'AppendMenuItem' adds the menu item to the end of the chained list 
   of menu items. */
void ClimateClimate_AppendMenuItem( ClimateClimate _this, ClimateMenuItem aItem );

/* This slot method is called from the menu items when the user has clicked on it. */
void ClimateClimate_MenuItemSelected( ClimateClimate _this, XObject sender );

/* Slot method to perform the menu move animation. */
void ClimateClimate_onAnimateMenu( ClimateClimate _this, XObject sender );

/* Slot method to rearrange the menu structure after the menu move animation. */
void ClimateClimate_onFinishedMenu( ClimateClimate _this, XObject sender );

/* This is a slot method. */
void ClimateClimate_onStartStop( ClimateClimate _this, XObject sender );

/* This is a slot method. */
void ClimateClimate_ShowSlider( ClimateClimate _this, XObject sender );

/* This is a slot method. */
void ClimateClimate_HideSlider( ClimateClimate _this, XObject sender );

/* Slot method to rearrange the menu structure after the menu move animation. */
void ClimateClimate_onFinishedSlider( ClimateClimate _this, XObject sender );

/* Slot method to trigger the next phase of the auto demo. */
void ClimateClimate_AutoDemoSlot( ClimateClimate _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ClimateClimate_H */

/* Embedded Wizard */
