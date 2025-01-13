#include "Point.hpp"

float det_calcul(Point A, Point B, Point C)
{
    float det;

    det = (A.get_X() * (B.get_Y() - C.get_Y())) + (B.get_X() * (C.get_Y() - A.get_Y())) + (C.get_X() * (A.get_Y() - B.get_Y()));
    return (det);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float summit1;
    float summit2;
    float summit3;

    summit1 = det_calcul(point, b, c);
    summit2 = det_calcul(point, c, a);
    summit3 = det_calcul(point, a, b);

    std::cout << summit1 << std::endl;
    std::cout << summit2 << std::endl;
    std::cout << summit3 << std::endl;

    if ((summit1 > 0 && summit2 > 0 && summit3 > 0) || (summit1 < 0 && summit2 < 0 && summit3 < 0))
        return (true);
    return (false);
}