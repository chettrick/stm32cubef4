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
#include "_ChartsCoord.h"
#include "_ChartsCoordList.h"
#include "_ChartsGraph.h"
#include "_CoreView.h"
#include "_GraphicsCanvas.h"
#include "_ResourcesBitmap.h"
#include "_ViewsRectangle.h"
#include "Charts.h"
#include "Core.h"

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 360, 240 }};
static const XRect _Const0001 = {{ 0, 0 }, { 370, 270 }};
static const XColor _Const0002 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0003 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0004 = { 10, 10 };
static const XColor _Const0005 = { 0x0C, 0x0E, 0x6E, 0xFF };
static const XPoint _Const0006 = { 80, 50 };

/* Initializer for the class 'Charts::Coord' */
void ChartsCoord__Init( ChartsCoord _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsCoord );

  /* ... and initialize objects, variables, properties, etc. */
  _this->X = 0.000000f;
  _this->Y = 0.000000f;
}

/* Re-Initializer for the class 'Charts::Coord' */
void ChartsCoord__ReInit( ChartsCoord _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Charts::Coord' */
void ChartsCoord__Done( ChartsCoord _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsCoord );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::Coord' */
void ChartsCoord__Mark( ChartsCoord _this )
{
  EwMarkObject( _this->next );

  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Charts::Coord' */
EW_DEFINE_CLASS_VARIANTS( ChartsCoord )
EW_END_OF_CLASS_VARIANTS( ChartsCoord )

/* Virtual Method Table (VMT) for the class : 'Charts::Coord' */
EW_DEFINE_CLASS( ChartsCoord, XObject, "Charts::Coord" )
EW_END_OF_CLASS( ChartsCoord )

/* Initializer for the class 'Charts::Graph' */
void ChartsGraph__Init( ChartsGraph _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsGraph );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0002 );
  _this->LineColor = _Const0003;
  _this->LineWidth = 3.000000f;
  _this->DotColor = _Const0003;
  _this->DotWidth = 0.000000f;
  _this->PixelPerUnit = _Const0004;
  _this->BackColor = _Const0002;
  _this->HorzGridColor = _Const0005;
  _this->VertGridColor = _Const0005;
  _this->GridDistance = _Const0006;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  _this->LineBitmap = EwLoadResource( &ChartsLine7x100, ResourcesBitmap );
  _this->DotBitmap = EwLoadResource( &ChartsDots8x8, ResourcesBitmap );
}

/* Re-Initializer for the class 'Charts::Graph' */
void ChartsGraph__ReInit( ChartsGraph _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
}

/* Finalizer method for the class 'Charts::Graph' */
void ChartsGraph__Done( ChartsGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsGraph );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::Graph' */
void ChartsGraph__Mark( ChartsGraph _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( _this->Coordinates );
  EwMarkObject( _this->LineBitmap );
  EwMarkObject( _this->DotBitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ChartsGraph_Draw( ChartsGraph _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XFloat p1X = 0.000000f;
  XFloat p1Y = 0.000000f;
  XFloat p2X = 0.000000f;
  XFloat p2Y = 0.000000f;
  XInt32 dx = _this->Super2.Bounds.Point1.X + aOffset.X;
  XInt32 dy = _this->Super2.Bounds.Point1.Y + aOffset.Y;
  XColor dotCol = _this->DotColor;
  XColor linCol = _this->LineColor;
  XColor hrzCol = _this->HorzGridColor;
  XColor vrtCol = _this->VertGridColor;
  XFloat lw = _this->LineWidth / 2.000000f;
  XFloat dw = _this->DotWidth / 2.000000f;
  XInt32 opacity = ((( aOpacity + 1 ) * _this->Super1.Opacity ) >> 8 ) + 1;
  ChartsCoord coord;

  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    dotCol.Alpha = (XUInt8)(( dotCol.Alpha * opacity ) >> 8 );
    linCol.Alpha = (XUInt8)(( linCol.Alpha * opacity ) >> 8 );
    hrzCol.Alpha = (XUInt8)(( hrzCol.Alpha * opacity ) >> 8 );
    vrtCol.Alpha = (XUInt8)(( vrtCol.Alpha * opacity ) >> 8 );
  }

  CoreGroup_Draw((CoreGroup)_this, aCanvas, aClip, aOffset, aOpacity, aBlend );

  if ( _this->HorzGridColor.Alpha > 0 )
  {
    XInt32 y;

    for ( y = _this->CoordOrigin.Y + dy; y >= dy; y = y - _this->GridDistance.Y )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( dx, y ), EwNewPoint( 
      dx + EwGetRectW( _this->Super2.Bounds ), y ), hrzCol, hrzCol, aBlend );

    for ( y = ( _this->CoordOrigin.Y + dy ) + _this->GridDistance.Y; y < ( dy + 
         EwGetRectH( _this->Super2.Bounds )); y = y + _this->GridDistance.Y )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( dx, y ), EwNewPoint( 
      dx + EwGetRectW( _this->Super2.Bounds ), y ), hrzCol, hrzCol, aBlend );
  }

  if ( _this->VertGridColor.Alpha > 0 )
  {
    XInt32 x;

    for ( x = _this->CoordOrigin.X + dx; x >= dx; x = x - _this->GridDistance.X )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( x, dy ), EwNewPoint( 
      x, dy + EwGetRectH( _this->Super2.Bounds )), vrtCol, vrtCol, aBlend );

    for ( x = ( _this->CoordOrigin.X + dx ) + _this->GridDistance.X; x < ( dx + 
         EwGetRectW( _this->Super2.Bounds )); x = x + _this->GridDistance.X )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( x, dy ), EwNewPoint( 
      x, dy + EwGetRectH( _this->Super2.Bounds )), vrtCol, vrtCol, aBlend );
  }

  if ( _this->Coordinates == 0 )
    return;

  coord = _this->Coordinates->firstCoord;

  if ( coord != 0 )
  {
    p1X = (XFloat)( dx + _this->CoordOrigin.X ) + ( coord->X * (XFloat)_this->PixelPerUnit.X 
    );
    p1Y = (XFloat)( dy + _this->CoordOrigin.Y ) + ( coord->Y * (XFloat)_this->PixelPerUnit.Y 
    );
    coord = coord->next;
  }

  while ( coord != 0 )
  {
    XFloat dirX;
    XFloat dirY;
    XFloat len;
    p2X = (XFloat)( dx + _this->CoordOrigin.X ) + ( coord->X * (XFloat)_this->PixelPerUnit.X 
    );
    p2Y = (XFloat)( dy + _this->CoordOrigin.Y ) + ( coord->Y * (XFloat)_this->PixelPerUnit.Y 
    );
    dirX = p2X - p1X;
    dirY = p2Y - p1Y;
    len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));

    if ( len != 0.000000f )
    {
      dirX = dirX / len;
      dirY = dirY / len;
    }

    if ( _this->LineBitmap != 0 )
      GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->LineBitmap, 0, p1X - ( dirY 
      * lw ), p1Y + ( dirX * lw ), 1.000000f, p1X + ( dirY * lw ), p1Y - ( dirX 
      * lw ), 1.000000f, p2X + ( dirY * lw ), p2Y - ( dirX * lw ), 1.000000f, p2X 
      - ( dirY * lw ), p2Y + ( dirX * lw ), 1.000000f, EwNewRect( 0, 0, _this->LineBitmap->FrameSize.X, 
      _this->LineBitmap->FrameSize.Y ), linCol, linCol, linCol, linCol, aBlend, 
      1 );

    if (( _this->DotWidth > 0.000000f ) && ( _this->DotBitmap != 0 ))
    {
      GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->DotBitmap, _this->DotBitmapIndex, 
      p1X - dw, p1Y - dw, 1.000000f, p1X + dw, p1Y - dw, 1.000000f, p1X + dw, p1Y 
      + dw, 1.000000f, p1X - dw, p1Y + dw, 1.000000f, EwNewRect( 0, 0, _this->DotBitmap->FrameSize.X, 
      _this->DotBitmap->FrameSize.Y ), dotCol, dotCol, dotCol, dotCol, aBlend, 1 
      );
    }

    p1X = p2X;
    p1Y = p2Y;
    coord = coord->next;
  }

  if (( _this->DotWidth > 0.000000f ) && ( _this->DotBitmap != 0 ))
  {
    GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->DotBitmap, _this->DotBitmapIndex, 
    p1X - dw, p1Y - dw, 1.000000f, p1X + dw, p1Y - dw, 1.000000f, p1X + dw, p1Y 
    + dw, 1.000000f, p1X - dw, p1Y + dw, 1.000000f, EwNewRect( 0, 0, _this->DotBitmap->FrameSize.X, 
    _this->DotBitmap->FrameSize.Y ), _this->DotColor, _this->DotColor, _this->DotColor, 
    _this->DotColor, aBlend, 1 );
  }
}

/* 'C' function for method : 'Charts::Graph.OnSetCoordinates()' */
void ChartsGraph_OnSetCoordinates( ChartsGraph _this, ChartsCoordList value )
{
  _this->Coordinates = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetLineColor()' */
void ChartsGraph_OnSetLineColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->LineColor ))
    return;

  _this->LineColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetLineWidth()' */
void ChartsGraph_OnSetLineWidth( ChartsGraph _this, XFloat value )
{
  if ( value < 0.500000f )
    value = 0.500000f;

  if ( value > 10.000000f )
    value = 10.000000f;

  _this->LineWidth = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetDotColor()' */
void ChartsGraph_OnSetDotColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->DotColor ))
    return;

  _this->DotColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetDotWidth()' */
void ChartsGraph_OnSetDotWidth( ChartsGraph _this, XFloat value )
{
  if ( value < 1.000000f )
    value = 0.000000f;

  if ( value > 25.000000f )
    value = 25.000000f;

  _this->DotWidth = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetCoordOrigin()' */
void ChartsGraph_OnSetCoordOrigin( ChartsGraph _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->CoordOrigin ))
    return;

  _this->CoordOrigin = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetPixelPerUnit()' */
void ChartsGraph_OnSetPixelPerUnit( ChartsGraph _this, XPoint value )
{
  if ( value.X == 0 )
    value.X = 1;

  if ( value.Y == 0 )
    value.Y = 1;

  if ( !EwCompPoint( value, _this->PixelPerUnit ))
    return;

  _this->PixelPerUnit = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetBackColor()' */
void ChartsGraph_OnSetBackColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->BackColor ))
    return;

  _this->BackColor = value;
  ViewsRectangle_OnSetColor( &_this->Background, value );
}

/* 'C' function for method : 'Charts::Graph.OnSetHorzGridColor()' */
void ChartsGraph_OnSetHorzGridColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->HorzGridColor ))
    return;

  _this->HorzGridColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetVertGridColor()' */
void ChartsGraph_OnSetVertGridColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->VertGridColor ))
    return;

  _this->VertGridColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetGridDistance()' */
void ChartsGraph_OnSetGridDistance( ChartsGraph _this, XPoint value )
{
  if ( value.X < 10 )
    value.X = 10;

  if ( value.Y < 10 )
    value.Y = 10;

  if ( !EwCompPoint( value, _this->GridDistance ))
    return;

  _this->GridDistance = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetDotBitmap()' */
void ChartsGraph_OnSetDotBitmap( ChartsGraph _this, ResourcesBitmap value )
{
  if ( value == _this->DotBitmap )
    return;

  _this->DotBitmap = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* Variants derived from the class : 'Charts::Graph' */
EW_DEFINE_CLASS_VARIANTS( ChartsGraph )
EW_END_OF_CLASS_VARIANTS( ChartsGraph )

/* Virtual Method Table (VMT) for the class : 'Charts::Graph' */
EW_DEFINE_CLASS( ChartsGraph, CoreGroup, "Charts::Graph" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ChartsGraph_Draw,
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
EW_END_OF_CLASS( ChartsGraph )

/* Initializer for the class 'Charts::CoordList' */
void ChartsCoordList__Init( ChartsCoordList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsCoordList );

  /* ... and initialize objects, variables, properties, etc. */
  _this->MaxNoOfItems = 10;
}

/* Re-Initializer for the class 'Charts::CoordList' */
void ChartsCoordList__ReInit( ChartsCoordList _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Charts::CoordList' */
void ChartsCoordList__Done( ChartsCoordList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsCoordList );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::CoordList' */
void ChartsCoordList__Mark( ChartsCoordList _this )
{
  EwMarkObject( _this->firstCoord );
  EwMarkObject( _this->lastCoord );

  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* The method ClearList is used to clear the list of coordinates. */
void ChartsCoordList_ClearList( ChartsCoordList _this )
{
  _this->firstCoord = 0;
  _this->lastCoord = 0;
  _this->NoOfItems = 0;
}

/* The method AddCoord stores the given coordinate at the end of the chained list 
   of coordinates. */
void ChartsCoordList_AddCoord( ChartsCoordList _this, XFloat aX, XFloat aY )
{
  ChartsCoord coord = 0;

  if (( _this->MaxNoOfItems > 0 ) && ( _this->NoOfItems == _this->MaxNoOfItems ))
  {
    coord = _this->firstCoord;
    _this->firstCoord = coord->next;
    coord->next = 0;
    _this->NoOfItems = _this->NoOfItems - 1;
  }
  else
  {
    coord = EwNewObject( ChartsCoord, 0 );
  }

  coord->X = aX;
  coord->Y = aY;

  if ( _this->firstCoord == 0 )
  {
    _this->firstCoord = coord;
    _this->lastCoord = coord;
    _this->NoOfItems = 1;
  }
  else
  {
    _this->lastCoord->next = coord;
    _this->lastCoord = coord;
    _this->NoOfItems = _this->NoOfItems + 1;
  }
}

/* 'C' function for method : 'Charts::CoordList.OnSetMaxNoOfItems()' */
void ChartsCoordList_OnSetMaxNoOfItems( ChartsCoordList _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  _this->MaxNoOfItems = value;
}

/* Variants derived from the class : 'Charts::CoordList' */
EW_DEFINE_CLASS_VARIANTS( ChartsCoordList )
EW_END_OF_CLASS_VARIANTS( ChartsCoordList )

/* Virtual Method Table (VMT) for the class : 'Charts::CoordList' */
EW_DEFINE_CLASS( ChartsCoordList, XObject, "Charts::CoordList" )
EW_END_OF_CLASS( ChartsCoordList )

/* Bitmap resources for a line segment of a chart curve. The image is used as alpha 
   bitmap in order to colorize the line segment dynamically during runtime. The 
   resource can be used by the @LineChart or @Graph class to draw the single line 
   pieces of the diagram. */
EW_DEFINE_BITMAP_RES( ChartsLine7x100 )
  EW_BITMAP_FRAMES( ChartsLine7x100, Default, EW_DRIVER_VARIANT_ALPHA8, 7, 100, 0 )
    EW_BITMAP_FRAME( 3, 0, 1, 100, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ChartsLine7x100, Default )               /* ratio 13.71 % */
    0x1C08EF00, 0xC1A0B048, 0x2A130883, 0x61B0C85C, 0x23106642, 0xB1489C4A, 0x188BC5A2,
    0x78DC6A33, 0x8FC79DD1, 0x1C8A4320, 0xC9A4B249, 0x96532893, 0xA5B2C7FC, 0x633097CB,
    0xB3499CCA, 0x339BCDA6, 0xC9DCEA55, 0x774FA7B3, 0x1D0A831C, 0x3328B44A, 0x2A934887,
    0x4EF4CA5D, 0x00000040, 0x00000000

  EW_BITMAPS_TABLE( ChartsLine7x100 )
    EW_BITMAP( ChartsLine7x100, Default )
EW_END_OF_BITMAP_RES( ChartsLine7x100 )

/* Table with links to derived variants of the bitmap resource : 'Charts::Line7x100' */
EW_RES_WITHOUT_VARIANTS( ChartsLine7x100 )

/* Bitmap resources for a dot of a chart curve. The image is used as alpha bitmap 
   in order to colorize the dot dynamically during runtime. The resource can be 
   used by the @LineChart or @Graph class to draw the single dots of a diagram. 
   The image resource contains several dots that can be selected with the frame 
   number property. */
EW_DEFINE_BITMAP_RES( ChartsDots8x8 )
  EW_BITMAP_FRAMES( ChartsDots8x8, Default, EW_DRIVER_VARIANT_ALPHA8, 8, 8, 0 )
    EW_BITMAP_FRAME( 2, 2, 4, 4, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 6, 0x0000002C, 0x00000000 ),
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x0000005C, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 1, 0x00000098, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 2, 4, 4, 0x000000D4, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 4, 4, 3, 0x00000100, 0x00000000 ),
    EW_BITMAP_FRAME( 1, 0, 6, 8, 0x0000012C, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 3, 2, 2, 0x00000144, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 3, 4, 3, 0x00000178, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 6, 0x000001A8, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ChartsDots8x8, Default )                 /* ratio 73.75 % */
    0x1C080100, 0x21C0D038, 0x190EEA75, 0x9FE8D810, 0x04847FC3, 0x8FF87B9E, 0x168A449C,
    0x187C3401, 0x45018011, 0x1C121508, 0x00001019, 0x70A80100, 0xAADE0F05, 0xB4360013,
    0x5FF0C7FB, 0x1AAB0DBB, 0x4E754436, 0x15724322, 0x688B922D, 0x89429511, 0x9ABA050F,
    0x0A95CF37, 0x00010100, 0x70A80100, 0xAADE0F05, 0xB4360013, 0x5028170B, 0x561B76B8,
    0x00007B79, 0xA86F03C0, 0x58AA05CE, 0x8D391031, 0x9478011C, 0x4622D148, 0x421D0C85,
    0xDE6AE814, 0x002A573C, 0x00000404, 0x70A80100, 0xAADE0F05, 0xB4360013, 0x5FF0C7FB,
    0xFEAB0DBB, 0x0180DADD, 0xE7543FD8, 0x000061FE, 0x723FC6C0, 0xFC763719, 0xC5627118,
    0x3A1B0A8B, 0xD5D020DC, 0x54AE79BC, 0x00080800, 0x30000100, 0x00D56A80, 0xFD570381,
    0xE13067FB, 0x510685C2, 0x4A887C3D, 0xA87FC4E2, 0xD87C280C, 0x83C42350, 0x04360902,
    0x00001010, 0x49E10F00, 0xC160A000, 0x99C8FF4C, 0xE1106019, 0xA8D87FBF, 0x91487C1C,
    0x15871099, 0x26DC522F, 0x85420011, 0x240A0B0C, 0x40401068, 0x1BFD8100, 0xC1205048,
    0x2A130883, 0xA110C85C, 0x02C083C1, 0x00000002, 0x4A401F00, 0x02400000, 0xF5FF0248,
    0xD800904A, 0xFF0D46BF, 0xEFF612FD, 0x1404C116, 0x6822E9FF, 0x8BAFE330, 0x3C2A270E,
    0xC2223238, 0x4C130581, 0x0010107A, 0x1C080100, 0xC0812990, 0xC45A482E, 0xE043F7FA,
    0xFF107FA1, 0x61281211, 0xC97FC45E, 0x98BC5484, 0x43C461F1, 0x6C2E1307, 0x41607028,
    0x00010181, 0x38000100, 0x09168B41, 0xF12C1281, 0x9F2FF7FB, 0x18990925, 0x2667FC4A,
    0x168A44E2, 0x48BC5627, 0x86C2E131, 0x28AA050F, 0x40401078, 0x00000000

  EW_BITMAPS_TABLE( ChartsDots8x8 )
    EW_BITMAP( ChartsDots8x8, Default )
EW_END_OF_BITMAP_RES( ChartsDots8x8 )

/* Table with links to derived variants of the bitmap resource : 'Charts::Dots8x8' */
EW_RES_WITHOUT_VARIANTS( ChartsDots8x8 )

/* Bitmap resources for a dot of a chart curve. The image is used as alpha bitmap 
   in order to colorize the dot dynamically during runtime. The resource can be 
   used by the @LineChart or @Graph class to draw the single dots of a diagram. 
   The image resource contains several dots that can be selected with the frame 
   number property. */
EW_DEFINE_BITMAP_RES( ChartsDots12x12 )
  EW_BITMAP_FRAMES( ChartsDots12x12, Default, EW_DRIVER_VARIANT_ALPHA8, 12, 12, 0 )
    EW_BITMAP_FRAME( 4, 3, 4, 6, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 2, 8, 8, 0x00000040, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 1, 6, 1, 0x00000088, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 1, 6, 2, 0x000000F0, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 3, 6, 6, 0x00000150, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 6, 6, 5, 0x0000018C, 0x00000000 ),
    EW_BITMAP_FRAME( 1, 0, 10, 12, 0x000001D4, 0x00000000 ),
    EW_BITMAP_FRAME( 4, 4, 4, 4, 0x000001F4, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 4, 6, 6, 0x00000248, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 1, 6, 10, 0x00000294, 0x00000000 )

  EW_BITMAP_PIXEL_R90( ChartsDots12x12, Default )               /* ratio 50.83 % */
    0x1C080100, 0x41A0B048, 0xC15C2A83, 0x44EAB783, 0xFEED0DC1, 0x6ED7FC49, 0x1355C103,
    0x7822A227, 0x7244A32E, 0x03FE3D1C, 0xC7A31039, 0x6621038D, 0xE13058AC, 0x54AE79BC,
    0x73499C1C, 0x00004060, 0x30000100, 0xBE58C6F0, 0x18D8C37C, 0x83600810, 0x23107FB4,
    0xF030DB4A, 0xCF8BC461, 0xF8DC5E08, 0x8E300D8F, 0x8C823F17, 0xC9246F98, 0x01FF2661,
    0xA152937B, 0x1B198E45, 0x514894BE, 0xF3634120, 0x18142A10, 0x00000010, 0x30000100,
    0xBE58C6F0, 0x18D8C37C, 0x83600810, 0x23107FB4, 0xF030DB4A, 0x273639E1, 0xF751B04E,
    0x7FC119EF, 0x04303CF0, 0x3FDE6210, 0xC9FEC036, 0xCF702919, 0x60FF94BF, 0xE33004B0,
    0x32883E5F, 0x39B0C259, 0x999D5FEC, 0x01BD812E, 0xC9619229, 0xB22C0693, 0xA391A121,
    0x230F86C7, 0x90C89C42, 0x0879B1A0, 0x080C0A15, 0x30000100, 0xBE58C6F0, 0x18D8C37C,
    0x83600810, 0x23107FB4, 0xF030DB4A, 0xCF8BC461, 0x87CC4208, 0x3C0542A7, 0x01B220F9,
    0x430E5106, 0x92207B00, 0xE4E18884, 0x5B118D86, 0x0FF97C32, 0x2993C961, 0xB37B01FF,
    0x90478EB1, 0xBC580D22, 0xC3633108, 0x0A2912A1, 0x1E6C6824, 0x03028542, 0x00000002,
    0x04080100, 0x2C562090, 0x26130303, 0xDFEFF5B8, 0x190A842D, 0x91087436, 0x1489C4A0,
    0xF8C4622D, 0x8DC6D630, 0x8C623F06, 0xC66450B5, 0x0E1F1B92, 0x6550D944, 0x151596C4,
    0x10198C1A, 0x82DC0100, 0xC1A0A001, 0x89F8FF83, 0xE11070DA, 0x0EF97FBF, 0xE0086849,
    0x7576C5A1, 0xF8B4380C, 0x01969C30, 0x7C8A3905, 0x48A2A456, 0x8A4D248B, 0xE55208F4,
    0x0D1A8C43, 0x68A7CC5A, 0xA284C362, 0x382C503C, 0x80C16770, 0xFBF12100, 0x4120B047,
    0x2A0C8D7E, 0xA1B0C85C, 0x231087C3, 0x71489C4A, 0x0886C0A1, 0x00000203, 0xE8900100,
    0xC1A0A002, 0x92042D31, 0x20C667FB, 0xD4FF3480, 0xAFF300B5, 0x1587C362, 0x68C181FF,
    0x8BC64D91, 0x7432331C, 0xC9247218, 0x16412237, 0x24D22944, 0x210C9600, 0xE660045A,
    0x1A994163, 0x97FBA855, 0x754421C6, 0x18A8002A, 0x42001243, 0x00010100, 0x1C080100,
    0xC0CD8368, 0xD89D0283, 0xD0F075A3, 0xDE4834A1, 0xEE77FBF0, 0x187F99A0, 0x30DBFE33,
    0x8D3840D0, 0x19399F18, 0x46241178, 0x94004263, 0xA3D28934, 0x57029149, 0xD028E46A,
    0x14894421, 0xC8541E11, 0x83412750, 0x00020303, 0x04080100, 0x2D168240, 0x1A070312,
    0xDFEF9420, 0x0C7B7CBF, 0xCDB25C0C, 0xDB7FC5A1, 0xC8BC0896, 0x8EC6DFF1, 0xF4823F16,
    0x43A46008, 0x76512091, 0x63B14814, 0x1D0C8546, 0x90989442, 0x038441A0, 0x00000203,
    0x00000000

  EW_BITMAPS_TABLE( ChartsDots12x12 )
    EW_BITMAP( ChartsDots12x12, Default )
EW_END_OF_BITMAP_RES( ChartsDots12x12 )

/* Table with links to derived variants of the bitmap resource : 'Charts::Dots12x12' */
EW_RES_WITHOUT_VARIANTS( ChartsDots12x12 )

/* Embedded Wizard */
