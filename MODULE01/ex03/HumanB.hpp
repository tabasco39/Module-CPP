/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 07:26:08 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/14 10:20:03 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#pragma once
#include <iostream>
#include <string>
#include "./Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon &weapon);
};

#endif