#ifndef DOOR_SCREENVIEW_HPP
#define DOOR_SCREENVIEW_HPP

#include <gui_generated/door_screen_screen/door_screenViewBase.hpp>
#include <gui/door_screen_screen/door_screenPresenter.hpp>

class door_screenView : public door_screenViewBase
{
public:
    door_screenView();
    virtual ~door_screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DOOR_SCREENVIEW_HPP
