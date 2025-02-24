/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:56:05 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 08:56:06 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(float _x , float _y);
    Point(const Point& obj);
    Point& operator=(const Point& obj);
    float get_X();
    float get_Y();
    ~Point();
};
bool bsp( Point const a, Point const b, Point const c, Point const point);



#endif