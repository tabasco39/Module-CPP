/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:20:54 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/07 08:17:25 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#pragma once

class Character : public ICharacter
{
    private :
        std::string name;
        AMateria *stock[4];

    public:
        Character(void);
        Character(std::string name);
        Character(Character & obj);
        Character & operator=(Character & obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        void displayStock();
        ~Character(void);

};

#endif