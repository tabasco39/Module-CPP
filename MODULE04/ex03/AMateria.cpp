/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 07:36:35 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 07:48:10 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "default";
}

AMateria::AMateria(std::string const & _type)
{
  type = _type;
}

AMateria::AMateria(AMateria const & obj)
{
    *this = obj;
}

AMateria & AMateria::operator=(AMateria const & obj)
{
    if (this != &obj)
        type = obj.type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}
