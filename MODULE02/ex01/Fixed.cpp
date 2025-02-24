/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:45:43 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/17 09:39:23 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_value = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed::Fixed(const int value)
{
    std::cout << "int constructor called" << std::endl;
    _fixed_value = value * (1 << _bit);
}

Fixed::Fixed(const float value)
{
    std::cout << "float constructor called" << std::endl;
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
    if (this != &obj)
        this->_fixed_value = obj.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    _fixed_value = raw;
}

