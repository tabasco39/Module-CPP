#include "Fixed.hpp"

//const int bit = 8;

Fixed::Fixed(void)
{
    fixed_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}
Fixed::Fixed(const int value)
{
    fixed_value = value * (1 << bit);

}

Fixed::Fixed(const float value)
{
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

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void)const
{
    return fixed_value;
}

void    Fixed::setRawBits(int const raw)
{
    fixed_value = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed& Fixed::operator=(Fixed const &obj)
{
    this->fixed_value = obj.fixed_value;
    return (*this);
}

bool Fixed::operator<(Fixed const &obj)
{
    return (this->fixed_value < obj.fixed_value) ? true : false;
}

bool Fixed::operator>(Fixed const &obj)
{
    return (this->fixed_value > obj.fixed_value) ? true : false;
}

bool Fixed::operator>=(Fixed const &obj)
{
    return (this->fixed_value >= obj.fixed_value) ? true : false;
}

bool Fixed::operator<=(Fixed const &obj)
{
    return (this->fixed_value <= obj.fixed_value) ? true : false;
}

bool Fixed::operator==(Fixed const &obj)
{
    return (this->fixed_value == obj.fixed_value) ? true : false;
}

bool Fixed::operator!=(Fixed const &obj)
{
    return (this->fixed_value != obj.fixed_value) ? true : false;
}

Fixed Fixed::operator+(Fixed const &obj)
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj)
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj)
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj)
{
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++()
{
    ++fixed_value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp = *this;
    ++fixed_value;
    return (tmp);
}

Fixed&  Fixed::min(Fixed &a, Fixed& b)
{
    return (a < b) ? a : b;
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed&  b)
{
    return ((Fixed)a < b) ? a : b;
}

Fixed&  Fixed::max(Fixed &a, Fixed& b)
{
    return (a > b) ? a : b;
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed&  b)
{
    return ((Fixed)a > b) ? a : b;
}