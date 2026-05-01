#ifndef DOOR_SCREENPRESENTER_HPP
#define DOOR_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class door_screenView;

class door_screenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    door_screenPresenter(door_screenView& v);

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

    virtual ~door_screenPresenter() {}

private:
    door_screenPresenter();

    door_screenView& view;
};

#endif // DOOR_SCREENPRESENTER_HPP
