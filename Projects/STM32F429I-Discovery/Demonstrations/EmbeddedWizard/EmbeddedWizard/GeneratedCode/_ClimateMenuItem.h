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

#ifndef _ClimateMenuItem_H
#define _ClimateMenuItem_H

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
#include "_CoreSimpleTouchHandler.h"
#include "_ViewsBorder.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Climate::DataItem */
#ifndef _ClimateDataItem_
  EW_DECLARE_CLASS( ClimateDataItem )
#define _ClimateDataItem_
#endif

/* Forward declaration of the class Climate::MenuItem */
#ifndef _ClimateMenuItem_
  EW_DECLARE_CLASS( ClimateMenuItem )
#define _ClimateMenuItem_
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
EW_DEFINE_FIELDS( ClimateMenuItem, CoreGroup )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( TouchHandler,    CoreSimpleTouchHandler )
  EW_OBJECT  ( Border,          ViewsBorder )
  EW_OBJECT  ( Text,            ViewsText )
  EW_PROPERTY( OnChange,        XSlot )
  EW_PROPERTY( Caption,         XString )
  EW_PROPERTY( NextMenuItem,    ClimateMenuItem )
  EW_PROPERTY( DataItem,        ClimateDataItem )
  EW_PROPERTY( Type,            XEnum )
EW_END_OF_FIELDS( ClimateMenuItem )

/* Virtual Method Table (VMT) for the class : 'Climate::MenuItem' */
EW_DEFINE_METHODS( ClimateMenuItem, CoreGroup )
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
  EW_METHOD( OnSetBounds,       void )( ClimateMenuItem _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( ClimateMenuItem _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ClimateMenuItem _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ClimateMenuItem )

/* 'C' function for method : 'Climate::MenuItem.OnSetBounds()' */
void ClimateMenuItem_OnSetBounds( ClimateMenuItem _this, XRect value );

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateMenuItem_UpdateLayout( ClimateMenuItem _this, XPoint aSize );

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
void ClimateMenuItem_UpdateViewState( ClimateMenuItem _this, XSet aState );

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateMenuItem_enterLeaveSlot( ClimateMenuItem _this, XObject sender );

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ClimateMenuItem_pressReleaseSlot( ClimateMenuItem _this, XObject sender );

/* 'C' function for method : 'Climate::MenuItem.OnSetCaption()' */
void ClimateMenuItem_OnSetCaption( ClimateMenuItem _this, XString value );

/* This is an onset method. */
void ClimateMenuItem_OnSetDataItem( ClimateMenuItem _this, ClimateDataItem value );

/* Slot method to trigger the next phase of the auto demo. */
void ClimateMenuItem_AutoDemo( ClimateMenuItem _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ClimateMenuItem_H */

/* Embedded Wizard */
