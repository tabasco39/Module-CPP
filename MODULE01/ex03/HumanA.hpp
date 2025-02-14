#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;
    
    public:
        HumanA(std::string _name, Weapon &_weapon);
        ~HumanA(void);
        void attack();
};

#endif