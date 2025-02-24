#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit            = 100;
    _energy         = 50;
    _attack_dammage = 20;
    std::cout << "Constructor with parameter of SCAVTRAP called" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _hit            = 100;
    _energy         = 50;
    _attack_dammage = 20;
    std::cout << "Default constructor of SCAVTRAP called" << std::endl;

}

ScavTrap::ScavTrap(ScavTrap& obj) : ClapTrap(obj)
{
    *this = obj;
    std::cout << "Copied constructor of SCAVTRAP called" << std::endl;
}

ScavTrap ScavTrap::operator=(ScavTrap& obj)
{
    if (this != &obj)
    {
        _name           = obj._name;
        _hit            = obj._hit;
        _energy         = obj._energy;
        _attack_dammage = obj._attack_dammage;
    }
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
    if (_energy > 0 || _hit > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks ";
        std::cout << target << ", causing " << _attack_dammage << " points of dammage" << std::endl;
        _energy-- ;
    }
    else
    {
        std::cout << "Sorry, You have not enougth _energy to attack" << std::endl;
    }
}