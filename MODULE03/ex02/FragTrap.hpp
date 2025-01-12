#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#pragma once

class FragTrap : public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void attack(const std::string& name);
        void highFivesGuys(void);
};

#endif