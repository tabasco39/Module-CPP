#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#pragma once

class ClapTrap
{
    private:
        int             energy;
        int             hit;
        std::string     name;
        unsigned int    attack_dammage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        std::string get_name(void);
        int         get_energy(void);
        int         get_hit(void);
        int         get_attack_damage(void);
        void        set_energy(int energy);
        void        set_hit(int hit);
        void        set_attack_damage(unsigned int attack_dammage);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};



#endif