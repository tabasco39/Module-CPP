#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor of Fragtrap called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor of Fragtrap called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (get_energy() > 0 || get_hit() > 0)
    {
        std::cout << "ScavTrap " << get_name() << " attacks ";
        std::cout << target << ", causing " << get_attack_damage() << " points of dammage" << std::endl;
        set_energy(get_energy() - 1) ;
    }
    else
    {
        std::cout << "Sorry, You have not enougth energy to attack" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << get_name() << " requests a positive high five! ✋😄" << std::endl;
}