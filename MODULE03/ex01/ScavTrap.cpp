#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "Constructor of SCAVTRAP called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of SCAVTRAP called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
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