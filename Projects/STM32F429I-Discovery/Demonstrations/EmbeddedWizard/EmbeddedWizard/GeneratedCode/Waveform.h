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

#ifndef Waveform_H
#define Waveform_H

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

#include "_WaveformChannelPanel.h"
#include "_WaveformWaveform.h"

/* Bitmap resource containing the border (frame) of all panels used within the demo. */
EW_DECLARE_BITMAP_RES( WaveformPanelBorder )

/* Bitmap resource containing the icons for the waveform selction buttons. */
EW_DECLARE_BITMAP_RES( WaveformWaveformIcons )

/* Enumeration definition of supported waveforms. */
enum
{
  WaveformWaveformTypeGround            = 0,
  WaveformWaveformTypeSinus             = 1,
  WaveformWaveformTypeSquare            = 2,
  WaveformWaveformTypeRamp              = 3,
  WaveformWaveformTypePulse             = 4,
  WaveformWaveformTypeNoise             = 5
};

#ifdef __cplusplus
  }
#endif

#endif /* Waveform_H */

/* Embedded Wizard */
