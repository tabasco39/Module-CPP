/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:56:13 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/20 08:56:34 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point(): x(0) , y(0){}

Point::Point(float _x , float _y): x(_x) , y(_y){}

Point::Point(const Point& obj) : x(obj.x), y(obj.y) {}

Point& Point::operator=(const Point& obj)
{
    (void) obj;
    return (*this);
}

float Point::get_X()
{
    return x.toFloat();
}

float Point::get_Y()
{
    return y.toFloat();
}

Point::~Point(){}