#include "Point.hpp"

int main(void)
{
    Point a(0.0f, 0.0f);
    Point b(0.0f, 5.0f);
    Point c(5.0f, 0.0f);
    Point p(1.0f , -1.0f);



    if (bsp(a, b , c , p) == true)
        std::cout << "P appartient au triangle" << std::endl;
    else
        std::cout << "P n'appartient pas au triangle" << std::endl;
    return (0);
}