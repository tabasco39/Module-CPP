#include "Fixed.hpp"

//const int bit = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixed_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed::Fixed(const int value)
{
    std::cout << "int constructor called" << std::endl;
    fixed_value = value * (1 << bit);

}

Fixed::Fixed(const float value)
{
    std::cout << "float constructor called" << std::endl;
    fixed_value =  roundf(value * (1 << bit));
}

float Fixed::toFloat(void) const
{
    return ((float)fixed_value / (1 << bit));
}

int Fixed::toInt(void) const
{
    return (fixed_value / (1 << bit));
}


std::ostream& operator<<(std::ostream &os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_value = obj.fixed_value;
    return (*this);
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_value;
}

void    Fixed::setRawBits(int const raw)
{
    fixed_value = raw;
}

