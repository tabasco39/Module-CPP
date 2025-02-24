#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#pragma once

class ClapTrap
{
    protected:
        int             _energy;
        int             _hit;
        std::string     _name;
        unsigned int    _attack_dammage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& obj);
        ClapTrap operator=(ClapTrap& obj);
        ~ClapTrap();
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};



#endif