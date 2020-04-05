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

#ifndef _AcceleratorAccelerator_H
#define _AcceleratorAccelerator_H

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

#include "_AcceleratorGraphicsFactory.h"
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_FlatActionButton.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Accelerator::Accelerator */
#ifndef _AcceleratorAccelerator_
  EW_DECLARE_CLASS( AcceleratorAccelerator )
#define _AcceleratorAccelerator_
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


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( AcceleratorAccelerator, CoreGroup )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( GraphicsFactory, AcceleratorGraphicsFactory )
  EW_OBJECT  ( PerformanceTimer, CoreTimer )
  EW_OBJECT  ( Text1,           ViewsText )
  EW_OBJECT  ( FpsText,         ViewsText )
  EW_OBJECT  ( Text2,           ViewsText )
  EW_OBJECT  ( CpuText,         ViewsText )
  EW_OBJECT  ( Text3,           ViewsText )
  EW_OBJECT  ( Text4,           ViewsText )
  EW_OBJECT  ( ScenarioText,    ViewsText )
  EW_OBJECT  ( ChromArtImage,   ViewsImage )
  EW_OBJECT  ( ActionButton,    FlatActionButton )
  EW_OBJECT  ( ActionButton1,   FlatActionButton )
  EW_OBJECT  ( AutoDemoTimer,   CoreTimer )
  EW_PROPERTY( NoOfItemsRectCopy, XInt32 )
  EW_PROPERTY( NoOfItemsBmpCopy, XInt32 )
  EW_PROPERTY( NoOfItemsRectBlend, XInt32 )
  EW_PROPERTY( NoOfItemsBmpBlend, XInt32 )
  EW_PROPERTY( NoOfItemsAlpha8Blend, XInt32 )
  EW_VARIABLE( accState,        XBool )
  EW_RESERVED( 3 )
EW_END_OF_FIELDS( AcceleratorAccelerator )

/* Virtual Method Table (VMT) for the class : 'Accelerator::Accelerator' */
EW_DEFINE_METHODS( AcceleratorAccelerator, CoreGroup )
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
  EW_METHOD( UpdateLayout,      void )( AcceleratorAccelerator _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( AcceleratorAccelerator )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void AcceleratorAccelerator_UpdateLayout( AcceleratorAccelerator _this, XPoint aSize );

/* This is a slot method. */
void AcceleratorAccelerator_PerformanceSlot( AcceleratorAccelerator _this, XObject 
  sender );

/* This is a slot method. */
void AcceleratorAccelerator_NextType( AcceleratorAccelerator _this, XObject sender );

/* This is a slot method. */
void AcceleratorAccelerator_AcceleratorState( AcceleratorAccelerator _this, XObject 
  sender );

/* This is a method. */
void AcceleratorAccelerator_ChangeType( AcceleratorAccelerator _this, XEnum aType );

/* This is a method. */
void AcceleratorAccelerator_Done( AcceleratorAccelerator _this );

#ifdef __cplusplus
  }
#endif

#endif /* _AcceleratorAccelerator_H */

/* Embedded Wizard */
