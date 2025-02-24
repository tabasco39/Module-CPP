/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:19:59 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 08:20:00 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Fixed.hpp"


Fixed::Fixed(void)
{
    _fixed_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}
Fixed::Fixed(const int value)
{
    _fixed_value = value * (1 << _bit);

}

Fixed::Fixed(const float value)
{
    _fixed_value =  roundf(value * (1 << _bit));
}

float Fixed::toFloat(void) const
{
    return ((float)_fixed_value / (1 << _bit));
}

int Fixed::toInt(void) const
{
    return (_fixed_value / (1 << _bit));
}

Fixed::~Fixed(void)
{
}

void Fixed::setFixedValue(float nb)
{
    _fixed_value = nb;
}

int Fixed::getRawBits(void)const
{
    return _fixed_value;
}

void    Fixed::setRawBits(int const raw)
{
    _fixed_value = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed& Fixed::operator=(Fixed const &obj)
{
    if (this != &obj)
        this->_fixed_value = obj._fixed_value;
    return (*this);
}

bool Fixed::operator<(Fixed const &obj)
{
    return (this->_fixed_value < obj._fixed_value) ? true : false;
}

bool Fixed::operator>(Fixed const &obj)
{
    return (this->_fixed_value > obj._fixed_value) ? true : false;
}

bool Fixed::operator>=(Fixed const &obj)
{
    return (this->_fixed_value >= obj._fixed_value) ? true : false;
}

bool Fixed::operator<=(Fixed const &obj)
{
    return (this->_fixed_value <= obj._fixed_value) ? true : false;
}

bool Fixed::operator==(Fixed const &obj)
{
    return (this->_fixed_value == obj._fixed_value) ? true : false;
}

bool Fixed::operator!=(Fixed const &obj)
{
    return (this->_fixed_value != obj._fixed_value) ? true : false;
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
    ++_fixed_value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp = *this;
    ++_fixed_value;
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