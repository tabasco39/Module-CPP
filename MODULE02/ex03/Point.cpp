#include "Point.hpp"

Point::Point(): x(0) , y(0){}

Point::Point(float _x , float _y): x(_x) , y(_y){}

Point::Point(const Point& obj) : x(obj.x), y(obj.y) {}

float Point::get_X()
{
    return x.toFloat();
}

float Point::get_Y()
{
    return y.toFloat();
}

Point::~Point()
{
}