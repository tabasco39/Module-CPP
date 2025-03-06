/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:21:13 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 11:40:14 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character () 
{
    name = "default";
    for (int i = 0; i < 4; i++)
        stock[i] = NULL;
}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++)
        stock[i] = NULL;
    this->name = name;
}

Character::Character(Character & obj)
{
    name = obj.name;
    for (int i = 0; i < 4; i++)
        stock[i] = obj.stock[i]->clone();
}

Character &Character::operator=(Character & obj)
{
    if (this != &obj)
    {
        name = obj.name;
        for (int i = 0; i < 4; i++)
        {
            delete(stock[i]);
            stock[i] = obj.stock[i]->clone();
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if(stock[i] == NULL)
        {
            stock[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if ((idx < 0 || idx > 3) || stock[idx] == NULL)
        return;
    stock[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{

    if ((idx < 0 || idx > 3) && stock[idx])
    {
        std::cout << "No Materia available" << std::endl;
        return;
    }
    stock[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (stock[i] != NULL)
            delete(stock[i]);
    }
}
