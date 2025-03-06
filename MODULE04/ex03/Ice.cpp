/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:29:43 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 11:05:56 by aranaivo         ###   ########.fr       */
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

void Ice::use(ICharacter& target)
{
    std::cout << "* shot an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria * Ice::clone() const
{
    return (new Ice());
}
