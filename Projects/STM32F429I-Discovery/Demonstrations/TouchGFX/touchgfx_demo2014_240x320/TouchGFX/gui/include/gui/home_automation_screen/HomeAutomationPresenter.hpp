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
#ifndef HOME_AUTOMATION_PRESENTER_HPP
#define HOME_AUTOMATION_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class HomeAutomationView;

class HomeAutomationPresenter : public Presenter, public ModelListener
{
public:
    HomeAutomationPresenter(HomeAutomationView& v);
    virtual ~HomeAutomationPresenter();

    virtual void activate();
    virtual void deactivate();

    void roomSelected(uint8_t roomId);
    void newRoomTemperature(int16_t temperature);

    virtual void roomUpdated(RoomTemperatureInfo& room);
    void newScheduleAccepted();
    void getNewSchedule(RoomTemperatureInfo& room);
    void exitScreen();

    RoomTemperatureInfo& getSelectedRoom();

private:
    HomeAutomationPresenter();

    HomeAutomationView& view;
};

#endif // HOME_AUTOMATION_PRESENTER_HPP
