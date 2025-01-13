#include "DiamandTrap.hpp"

DiamandTrap::DiamandTrap()
{
    name           = "Diamand";
    hit            = 100;
    energy         = 50;
    attack_dammage = 30;
    std::cout << "Default constructor of DIAMANDTRAP called" << std::endl;
}

DiamandTrap::DiamandTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
    name           = _name;
    hit            = 100;
    energy         = 50;
    attack_dammage = 30;
    std::cout << "Constructor with parameter of DIAMANDTRAP called" << std::endl;
}

DiamandTrap DiamandTrap::operator=(DiamandTrap& obj)
{
    this->name           = obj.name;
    this->hit            = obj.hit;
    this->energy         = obj.energy;
    this->attack_dammage = obj.attack_dammage;
    return (*this);
}

DiamandTrap::DiamandTrap(DiamandTrap& obj)
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
    std::cout << "Diamand ==> " << name << std::endl;
    std::cout << "Clap ==> " << ClapTrap::name << std::endl;
}
