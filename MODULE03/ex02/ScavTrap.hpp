#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap : public ClapTrap
{
    private:
        /* data */
    public:
        ScavTrap(std::string _name);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};



#endif

