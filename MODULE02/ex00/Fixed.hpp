/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:18:40 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/17 08:28:24 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "iostream"

class Fixed
{
private:
    int                 _fixed_value;
    static const int    _bit = 8;
public:
    Fixed(void);
    Fixed(Fixed &obj);
    Fixed & operator=(Fixed const &obj);
    ~Fixed(void);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};


#endif