#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
private:
    int fixed_value;
    static const int bit;
public:
    Fixed(void);
    Fixed(Fixed &obj);
    Fixed & operator=(Fixed const &obj);
    ~Fixed(void);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};


#endif