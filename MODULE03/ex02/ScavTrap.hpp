#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once

class ScavTrap :  public ClapTrap
{
    private:
        /* data */
    public:
        ScavTrap(void);
        ScavTrap(std::string __name);
        ScavTrap(ScavTrap& obj);
        ScavTrap operator=(ScavTrap& obj);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};



#endif

