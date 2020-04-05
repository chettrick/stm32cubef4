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

#ifndef _MasterDemoPaginationBar_H
#define _MasterDemoPaginationBar_H

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
#include "_ViewsImage.h"

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

/* Forward declaration of the class MasterDemo::PaginationBar */
#ifndef _MasterDemoPaginationBar_
  EW_DECLARE_CLASS( MasterDemoPaginationBar )
#define _MasterDemoPaginationBar_
#endif


/* The class 'PaginationBar' displays a horizontal row of indicators. */
EW_DEFINE_FIELDS( MasterDemoPaginationBar, CoreGroup )
  EW_OBJECT  ( PageInx0,        ViewsImage )
  EW_OBJECT  ( PageInx1,        ViewsImage )
  EW_OBJECT  ( PageInx2,        ViewsImage )
  EW_OBJECT  ( PageInx3,        ViewsImage )
  EW_OBJECT  ( PageInx4,        ViewsImage )
  EW_OBJECT  ( PageInx5,        ViewsImage )
  EW_OBJECT  ( PageInx6,        ViewsImage )
  EW_PROPERTY( NoOfIndicators,  XInt32 )
  EW_OBJECT  ( PageInx7,        ViewsImage )
  EW_OBJECT  ( PageInx8,        ViewsImage )
  EW_OBJECT  ( PageInx9,        ViewsImage )
  EW_OBJECT  ( PageInx10,       ViewsImage )
  EW_OBJECT  ( PageInx11,       ViewsImage )
  EW_OBJECT  ( PageInx12,       ViewsImage )
  EW_OBJECT  ( PageInx13,       ViewsImage )
  EW_OBJECT  ( PageInx14,       ViewsImage )
  EW_PROPERTY( Selection,       XInt32 )
EW_END_OF_FIELDS( MasterDemoPaginationBar )

/* Virtual Method Table (VMT) for the class : 'MasterDemo::PaginationBar' */
EW_DEFINE_METHODS( MasterDemoPaginationBar, CoreGroup )
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
  EW_METHOD( UpdateViewState,   void )( MasterDemoPaginationBar _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( MasterDemoPaginationBar )

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
void MasterDemoPaginationBar_UpdateViewState( MasterDemoPaginationBar _this, XSet 
  aState );

/* 'C' function for method : 'MasterDemo::PaginationBar.OnSetNoOfIndicators()' */
void MasterDemoPaginationBar_OnSetNoOfIndicators( MasterDemoPaginationBar _this, 
  XInt32 value );

/* 'C' function for method : 'MasterDemo::PaginationBar.OnSetSelection()' */
void MasterDemoPaginationBar_OnSetSelection( MasterDemoPaginationBar _this, XInt32 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _MasterDemoPaginationBar_H */

/* Embedded Wizard */
