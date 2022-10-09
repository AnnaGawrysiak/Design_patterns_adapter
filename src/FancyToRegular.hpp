#ifndef ADAPTER
#define ADAPTER

#include "RegularRectangle.hpp"
#include "FancyRectangle.hpp"

class RectangleAdapter : public Rectangle
{
public:
    RectangleAdapter(FancyRectangle *adaptee) : adaptee_(adaptee) {};
    std::vector<Point> getCorners() const override
    {
    Point leftUpCorner(adaptee_->middle - Point{adaptee_->width/2, adaptee_->height/2});
    Point rightDownCorner(adaptee_->middle + Point{adaptee_->width/2, adaptee_->height/2});
    return { leftUpCorner, rightDownCorner };
}
private:
    FancyRectangle *adaptee_;
};

#endif