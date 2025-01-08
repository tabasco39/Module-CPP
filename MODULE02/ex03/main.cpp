#include "Point.hpp"

int main(void)
{
    Point a(0.0, 0.0);
    Point b(0.0, 5.0);
    Point c(5.0, 0.0);
    Point p(1.0 , 1.0);


    std::cout << "-->" << p.get_X() << std::endl;
    if (bsp(a, b , c , p) == true)
        std::cout << "P appartient au triangle" << std::endl;
    else
        std::cout << "P n'appartient pas au triangle" << std::endl;
    return (0);
}