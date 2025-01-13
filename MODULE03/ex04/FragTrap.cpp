#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    hit            = 100;
    energy         = 100;
    attack_dammage = 30;
    std::cout << "Default constructor of Fragtrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hit            = 100;
    energy         = 100;
    attack_dammage = 30;
    std::cout << "Constructor with parameter of Fragtrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap& obj)
{
    *this = obj;
    std::cout << "Copied constructor of Fragtrap called" << std::endl;
}

FragTrap FragTrap::operator=(FragTrap& obj)
{
    this->name           = obj.name;
    this->hit            = obj.hit;
    this->energy         = obj.energy;
    this->attack_dammage = obj.attack_dammage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of Fragtrap called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (energy > 0 || hit > 0)
    {
        std::cout << "ScavTrap " << name << " attacks ";
        std::cout << target << ", causing " << attack_dammage << " points of dammage" << std::endl;
        energy-- ;
    }
    else
    {
        std::cout << "Sorry, You have not enougth energy to attack" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << " requests a positive high five! ✋😄" << std::endl;
}