#ifndef SECURITY_SCREENPRESENTER_HPP
#define SECURITY_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class security_screenView;

class security_screenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    security_screenPresenter(security_screenView& v);

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

    virtual ~security_screenPresenter() {}

private:
    security_screenPresenter();

    security_screenView& view;
};

#endif // SECURITY_SCREENPRESENTER_HPP
