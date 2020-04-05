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

#ifndef _ClimateSliderItem_H
#define _ClimateSliderItem_H

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
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_ViewsBorder.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsWarpImage.h"

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


/* Slider item to change a temperature or time value. */
EW_DEFINE_FIELDS( ClimateSliderItem, CoreGroup )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( Border,          ViewsBorder )
  EW_OBJECT  ( ButtonUp,        ClimateButton )
  EW_OBJECT  ( ButtonDown,      ClimateButton )
  EW_OBJECT  ( ButtonOk,        ClimateButton )
  EW_OBJECT  ( SliderArea,      ViewsRectangle )
  EW_OBJECT  ( Line0,           ViewsLine )
  EW_OBJECT  ( Line1,           ViewsLine )
  EW_OBJECT  ( Line2,           ViewsLine )
  EW_OBJECT  ( Line3,           ViewsLine )
  EW_OBJECT  ( Line4,           ViewsLine )
  EW_OBJECT  ( Line5,           ViewsLine )
  EW_OBJECT  ( Line6,           ViewsLine )
  EW_OBJECT  ( Line7,           ViewsLine )
  EW_OBJECT  ( Line8,           ViewsLine )
  EW_OBJECT  ( Line9,           ViewsLine )
  EW_OBJECT  ( Line10,          ViewsLine )
  EW_OBJECT  ( Triangle,        ViewsWarpImage )
  EW_OBJECT  ( Line,            ViewsLine )
  EW_OBJECT  ( Thumb,           ViewsImage )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_PROPERTY( MinValue,        XInt32 )
  EW_PROPERTY( MaxValue,        XInt32 )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_PROPERTY( Outlet,          XRef )
  EW_PROPERTY( OnClose,         XSlot )
  EW_VARIABLE( startValue,      XInt32 )
EW_END_OF_FIELDS( ClimateSliderItem )

/* Virtual Method Table (VMT) for the class : 'Climate::SliderItem' */
EW_DEFINE_METHODS( ClimateSliderItem, CoreGroup )
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
  EW_METHOD( UpdateLayout,      void )( ClimateSliderItem _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ClimateSliderItem _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ClimateSliderItem )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateSliderItem_UpdateLayout( ClimateSliderItem _this, XPoint aSize );

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
void ClimateSliderItem_UpdateViewState( ClimateSliderItem _this, XSet aState );

/* 'C' function for method : 'Climate::SliderItem.OnSetCurrentValue()' */
void ClimateSliderItem_OnSetCurrentValue( ClimateSliderItem _this, XInt32 value );

/* 'C' function for method : 'Climate::SliderItem.OnSetMinValue()' */
void ClimateSliderItem_OnSetMinValue( ClimateSliderItem _this, XInt32 value );

/* 'C' function for method : 'Climate::SliderItem.OnSetMaxValue()' */
void ClimateSliderItem_OnSetMaxValue( ClimateSliderItem _this, XInt32 value );

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onPressSlot( ClimateSliderItem _this, XObject sender );

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onDragSlot( ClimateSliderItem _this, XObject sender );

/* This slot method will receive a signal, if the value of the property assigned 
   to @Outlet has been changed by another widget or by the application logic. In 
   response to this notification, the widget will update itself. */
void ClimateSliderItem_outletSlot( ClimateSliderItem _this, XObject sender );

/* 'C' function for method : 'Climate::SliderItem.OnSetOutlet()' */
void ClimateSliderItem_OnSetOutlet( ClimateSliderItem _this, XRef value );

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateSliderItem_onReleaseSlot( ClimateSliderItem _this, XObject sender );

/* Slot method for the PlusButton. */
void ClimateSliderItem_onIncrement( ClimateSliderItem _this, XObject sender );

/* Slot method for the MinusButton. */
void ClimateSliderItem_onDecrement( ClimateSliderItem _this, XObject sender );

/* Slot method for the OkButton. */
void ClimateSliderItem_onOk( ClimateSliderItem _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ClimateSliderItem_H */

/* Embedded Wizard */
