#ifndef SETTING_SECREENPRESENTER_HPP
#define SETTING_SECREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class setting_secreenView;

class setting_secreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    setting_secreenPresenter(setting_secreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~setting_secreenPresenter() {}

private:
    setting_secreenPresenter();

    setting_secreenView& view;
};

#endif // SETTING_SECREENPRESENTER_HPP
