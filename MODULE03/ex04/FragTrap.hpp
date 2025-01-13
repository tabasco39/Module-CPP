#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#pragma once

class FragTrap : virtual public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap& obj);
        FragTrap operator=(FragTrap& obj);
        ~FragTrap();
        void attack(const std::string& name);
        void highFivesGuys(void);
};

#endif