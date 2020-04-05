/******************************************************************************
 *
 * @brief     This file is part of the TouchGFX 4.8.0 evaluation distribution.
 *
 * @author    Draupner Graphics A/S <http://www.touchgfx.com>
 *
 ******************************************************************************
 *
 * @section Copyright
 *
 * This file is free software and is provided for example purposes. You may
 * use, copy, and modify within the terms and conditions of the license
 * agreement.
 *
 * This is licensed software for evaluation use, any use must strictly comply
 * with the evaluation license agreement provided with delivery of the
 * TouchGFX software.
 *
 * The evaluation license agreement can be seen on www.touchgfx.com
 *
 * @section Disclaimer
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Draupner Graphics A/S has
 * no obligation to support this software. Draupner Graphics A/S is providing
 * the software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Draupner Graphics A/S can not be held liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this software.
 *
 *****************************************************************************/
#include <gui/menu_screen/ChromArtTile.hpp>
#include <BitmapDatabase.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/Color.hpp>

ChromArtTile::ChromArtTile()
{
    setWidth(90);
    setHeight(70);

    tileId.setColor(Color::getColorFrom24BitRGB(0xFF, 0xFF, 0xFF));
    tileId.setTypedText(TypedText(T_CHROM_ART_TILE));
    tileId.setPosition(0, getHeight() - 22, getWidth(), 20);

    add(tileId);
}

ChromArtTile::~ChromArtTile()
{
}
