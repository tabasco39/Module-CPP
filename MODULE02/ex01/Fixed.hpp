/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:55:18 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 08:55:20 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _fixed_value;
    static const int    _bit = 8;
public:
    Fixed(void);
    Fixed(const Fixed& obj);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();
    float   toFloat(void) const;
    int     toInt(void) const;
    Fixed   &operator=(Fixed const &obj);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};
std::ostream&   operator<<(std::ostream& os, Fixed const &obj);

#endif