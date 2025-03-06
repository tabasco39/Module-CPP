/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:36:44 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 09:57:32 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#pragma once

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(AMateria const & obj);
        virtual ~AMateria(){};
        AMateria & operator=(AMateria const & obj);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif