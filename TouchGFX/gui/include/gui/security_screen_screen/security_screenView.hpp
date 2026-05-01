#ifndef SECURITY_SCREENVIEW_HPP
#define SECURITY_SCREENVIEW_HPP

#include <gui_generated/security_screen_screen/security_screenViewBase.hpp>
#include <gui/security_screen_screen/security_screenPresenter.hpp>

class security_screenView : public security_screenViewBase
{
public:
    security_screenView();
    virtual ~security_screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SECURITY_SCREENVIEW_HPP
