#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#pragma once

class FragTrap :  public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(FragTrap& obj);
        FragTrap operator=(FragTrap& obj);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif