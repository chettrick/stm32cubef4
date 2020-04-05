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

#ifndef _ApplicationHomeScreen_H
#define _ApplicationHomeScreen_H

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

#include "_CoreGroup.h"
#include "_CoreHorizontalList.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_EffectsInt32Effect.h"
#include "_MasterDemoHomeButton.h"
#include "_MasterDemoNavigationButton.h"
#include "_MasterDemoPaginationBar.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::HomeScreen */
#ifndef _ApplicationHomeScreen_
  EW_DECLARE_CLASS( ApplicationHomeScreen )
#define _ApplicationHomeScreen_
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


/* The main menu of the master demo. */
EW_DEFINE_FIELDS( ApplicationHomeScreen, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( RectangleBottom, ViewsRectangle )
  EW_OBJECT  ( RectangleTop,    ViewsRectangle )
  EW_OBJECT  ( SlideTouchHandler, CoreSlideTouchHandler )
  EW_OBJECT  ( HorizontalList,  CoreHorizontalList )
  EW_OBJECT  ( Int32Effect,     EffectsInt32Effect )
  EW_OBJECT  ( IconButtonLeft,  MasterDemoNavigationButton )
  EW_OBJECT  ( IconButtonRight, MasterDemoNavigationButton )
  EW_OBJECT  ( Indicator,       MasterDemoPaginationBar )
  EW_OBJECT  ( InfoTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( EmWiLogo,        ViewsImage )
  EW_OBJECT  ( InfoText,        ViewsText )
  EW_OBJECT  ( InfoNavigation,  ViewsImage )
  EW_OBJECT  ( Caption,         ViewsText )
  EW_OBJECT  ( HomeButton,      MasterDemoHomeButton )
  EW_PROPERTY( OnAcceleratorDemo, XSlot )
  EW_PROPERTY( OnWaveformGenerator, XSlot )
  EW_PROPERTY( OnAnimatedList,  XSlot )
  EW_PROPERTY( OnClimateCabinet, XSlot )
  EW_PROPERTY( OnInfo,          XSlot )
  EW_PROPERTY( OnQuit,          XSlot )
EW_END_OF_FIELDS( ApplicationHomeScreen )

/* Virtual Method Table (VMT) for the class : 'Application::HomeScreen' */
EW_DEFINE_METHODS( ApplicationHomeScreen, CoreGroup )
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
EW_END_OF_METHODS( ApplicationHomeScreen )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHomeScreen_Init( ApplicationHomeScreen _this, XHandle aArg );

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationHomeScreen_OnLoadItem( ApplicationHomeScreen _this, XObject sender );

/* Slot method to handle left navigation. */
void ApplicationHomeScreen_OnLeft( ApplicationHomeScreen _this, XObject sender );

/* This is a slot method. */
void ApplicationHomeScreen_onUpdatePage( ApplicationHomeScreen _this, XObject sender );

/* Slot method to handle touch event on info bar. */
void ApplicationHomeScreen_onInfo( ApplicationHomeScreen _this, XObject sender );

/* Slot method to be called when the user presses the home button. */
void ApplicationHomeScreen_onQuit( ApplicationHomeScreen _this, XObject sender );

/* Slot method to handle right navigation. */
void ApplicationHomeScreen_OnRight( ApplicationHomeScreen _this, XObject sender );

/* Slot method to navigate to the left most item. */
void ApplicationHomeScreen_OnReset( ApplicationHomeScreen _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationHomeScreen_H */

/* Embedded Wizard */
