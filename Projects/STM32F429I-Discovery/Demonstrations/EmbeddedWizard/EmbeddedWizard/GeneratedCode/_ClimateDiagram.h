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

#ifndef _ClimateDiagram_H
#define _ClimateDiagram_H

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

#include "_ChartsGraph.h"
#include "_CoreGroup.h"
#include "_CorePropertyObserver.h"
#include "_CoreSimpleTouchHandler.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWallpaper.h"

/* Forward declaration of the class Climate::Diagram */
#ifndef _ClimateDiagram_
  EW_DECLARE_CLASS( ClimateDiagram )
#define _ClimateDiagram_
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
EW_DEFINE_FIELDS( ClimateDiagram, CoreGroup )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( WallpaperTop,    ViewsWallpaper )
  EW_OBJECT  ( WallpaperBottom, ViewsWallpaper )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Graph,           ChartsGraph )
  EW_OBJECT  ( T1,              ViewsText )
  EW_OBJECT  ( T2,              ViewsText )
  EW_OBJECT  ( T3,              ViewsText )
  EW_OBJECT  ( T4,              ViewsText )
  EW_OBJECT  ( UnitT,           ViewsText )
  EW_OBJECT  ( C1,              ViewsText )
  EW_OBJECT  ( C2,              ViewsText )
  EW_OBJECT  ( C3,              ViewsText )
  EW_OBJECT  ( C4,              ViewsText )
  EW_OBJECT  ( UnitC,           ViewsText )
  EW_OBJECT  ( HumidityBar,     ViewsRectangle )
  EW_OBJECT  ( HumidText,       ViewsText )
  EW_OBJECT  ( DwellText,       ViewsText )
  EW_OBJECT  ( TempText,        ViewsText )
  EW_OBJECT  ( HeatLine,        ViewsImage )
  EW_OBJECT  ( CoolLine,        ViewsImage )
  EW_OBJECT  ( DwellLine,       ViewsImage )
  EW_OBJECT  ( RunningBar,      ViewsRectangle )
  EW_OBJECT  ( DwellTimeObserver, CorePropertyObserver )
  EW_OBJECT  ( HeatTimeObserver, CorePropertyObserver )
  EW_OBJECT  ( CoolTimeObserver, CorePropertyObserver )
  EW_OBJECT  ( NominalTempObserver, CorePropertyObserver )
  EW_OBJECT  ( HumidityObserver, CorePropertyObserver )
  EW_OBJECT  ( ActualTempObserver, CorePropertyObserver )
  EW_OBJECT  ( RemainingTimeObserver, CorePropertyObserver )
  EW_OBJECT  ( RunningObserver, CorePropertyObserver )
EW_END_OF_FIELDS( ClimateDiagram )

/* Virtual Method Table (VMT) for the class : 'Climate::Diagram' */
EW_DEFINE_METHODS( ClimateDiagram, CoreGroup )
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
  EW_METHOD( UpdateLayout,      void )( ClimateDiagram _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( ClimateDiagram _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ClimateDiagram )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ClimateDiagram_UpdateLayout( ClimateDiagram _this, XPoint aSize );

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
void ClimateDiagram_UpdateViewState( ClimateDiagram _this, XSet aState );

/* Slot method to update the display value. */
void ClimateDiagram_onUpdate( ClimateDiagram _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ClimateDiagram_H */

/* Embedded Wizard */
