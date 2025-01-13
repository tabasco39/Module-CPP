#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    hit            = 100;
    energy         = 50;
    attack_dammage = 20;
    std::cout << "Constructor with parameter of SCAVTRAP called" << std::endl;
}

ScavTrap::ScavTrap(void)
{
    hit            = 100;
    energy         = 50;
    attack_dammage = 20;
    std::cout << "Default constructor of SCAVTRAP called" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap& obj)
{
    *this = obj;
    std::cout << "Copied constructor of SCAVTRAP called" << std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap& obj)
{
    this->name           = obj.name;
    this->hit            = obj.hit;
    this->energy         = obj.energy;
    this->attack_dammage = obj.attack_dammage;
    return (*this);
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