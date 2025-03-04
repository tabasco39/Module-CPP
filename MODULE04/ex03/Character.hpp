/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:20:54 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 08:42:54 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(Character & obj);
        Character & operator=(Character & obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx) = 0;
        void use(int idx, ICharacter& target);
        ~Character(void);

};

#endif