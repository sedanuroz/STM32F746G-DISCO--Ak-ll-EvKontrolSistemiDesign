#ifndef SETTING_SECREENVIEW_HPP
#define SETTING_SECREENVIEW_HPP

#include <gui_generated/setting_secreen_screen/setting_secreenViewBase.hpp>
#include <gui/setting_secreen_screen/setting_secreenPresenter.hpp>

class setting_secreenView : public setting_secreenViewBase
{
public:
    setting_secreenView();
    virtual ~setting_secreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETTING_SECREENVIEW_HPP
