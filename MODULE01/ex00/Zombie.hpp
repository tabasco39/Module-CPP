/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 06:47:49 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/14 09:20:47 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#pragma once
#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name = "");
    Zombie();
    ~Zombie();
    void announce(void);
};
void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif