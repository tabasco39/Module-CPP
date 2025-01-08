#include "Point.hpp"

Point::Point(): x(0) , y(0){}

Point::Point(float _x , float _y): x(_x) , y(_y){}

Point::Point(const Point& obj)
{
    (*this) = obj;
}

float Point::get_X()
{
    return x.toFloat();
}

float Point::get_Y()
{
    return y.toFloat();
}
Point& Point::operator=(const Point& obj)
{
    (Fixed)this->x = obj.x;
    (Fixed)this->y = obj.y;
    return (*this);
}


Point::~Point()
{
}