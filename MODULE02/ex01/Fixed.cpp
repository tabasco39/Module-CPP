#include "Fixed.hpp"

//const int bit = 8;

Fixed::Fixed(void)
{
    fixed_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    fixed_value = obj.fixed_value;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    fixed_value = value << bit;
    std::cout << "int constructor called" << std::endl;

}

float Fixed::toFloat(void) const
{
    return (fixed_value / (1 << bit));
}

Fixed::Fixed(const float value)
{
    fixed_value = value * (1 << bit);
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

Fixed& Fixed::operator=(const Fixed& obj)
{
    this->fixed_value = obj.fixed_value;
    std::cout << "Copy assignment operator called" << std::endl;
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

