/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:21:13 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 08:46:02 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character () {}

Character::Character(Character & obj)
{
    *this = obj;
}

Character &Character::operator=(Character & obj)
{
    return (obj);
}

Character::~Character(){}
