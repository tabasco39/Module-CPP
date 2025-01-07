#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixed_value;
    static const int    bit = 8;
public:
    Fixed(void);
    Fixed(const Fixed& obj);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();
    float   toFloat(void) const;
    int     toInt(void) const;
    Fixed & operator=(Fixed const &obj);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};
std::ostream&   operator<<(std::ostream& os, Fixed const &obj);

#endif