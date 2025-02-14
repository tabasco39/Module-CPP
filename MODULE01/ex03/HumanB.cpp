/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 07:30:08 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/14 10:21:43 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name) : 
        _name(name)
{
    _weapon = NULL;
}

HumanB::~HumanB(void){}

void HumanB::attack()
{
    if (_weapon == NULL)
    {
        std::cout << "He can't attack, he is not armed" << std::endl;
        return;
    }
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}