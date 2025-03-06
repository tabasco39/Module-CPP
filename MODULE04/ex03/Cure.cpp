/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:18:51 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 11:02:56 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(Cure const & obj)
{
    *this = obj;
}

Cure & Cure::operator=(Cure const & obj)
{
    if (this != &obj)
        type = obj.type;
    return (*this);
}

Cure::~Cure(){}

AMateria * Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}