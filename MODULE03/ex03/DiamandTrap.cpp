#include "DiamandTrap.hpp"

DiamandTrap::DiamandTrap() : ClapTrap()
{
    _name           = "Diamand";
    _hit            = 100;
    _energy         = 50;
    _attack_dammage = 30;
    std::cout << "Default constructor of DIAMANDTRAP called" << std::endl;
}

DiamandTrap::DiamandTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    _name           = name;
    _hit            = 100;
    _energy         = 50;
    _attack_dammage = 30;
    std::cout << "Constructor with parameter of DIAMANDTRAP called" << std::endl;
}

DiamandTrap DiamandTrap::operator=(DiamandTrap& obj)
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

DiamandTrap::DiamandTrap(DiamandTrap& obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    *this = obj;
    std::cout << "Copied constructor of DIAMANDTRAP called" << std::endl;
}

DiamandTrap::~DiamandTrap(void)
{
    std::cout << "Destructor of DIAMANDTRAP called" << std::endl;
}
void DiamandTrap::attack(const std::string& name)
{
    ScavTrap::attack(name);
}

void DiamandTrap::whoAmI(void)
{
    std::cout << "Diamand ==> " << _name << std::endl;
    std::cout << "Clap ==> " << ClapTrap::_name << std::endl;
}
