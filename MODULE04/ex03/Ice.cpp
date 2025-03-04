/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:29:43 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 10:59:08 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(Ice const & obj)
{
    *this = obj; 
}

Ice & Ice::operator=(Ice const &obj)
{
    if (this != &obj)
        type = obj.getType();
    return (*this);
}

Ice::~Ice(){}


AMateria * Ice::clone() const
{
    return (new Ice());
}