#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(float _x , float _y);
    Point(const Point& obj);
    Point& operator=(const Point& obj) = delete;
    float get_X();
    float get_Y();
    ~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);



#endif