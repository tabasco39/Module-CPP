#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

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
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif