#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _hit            = 100;
    _energy         = 100;
    _attack_dammage = 30;
    std::cout << "Default constructor of Fragtrap called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit            = 100;
    _energy         = 100;
    _attack_dammage = 30;
    std::cout << "Constructor with parameter of Fragtrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap& obj) : ClapTrap(obj)
{
    *this = obj;
    std::cout << "Copied constructor of Fragtrap called" << std::endl;
}

FragTrap FragTrap::operator=(FragTrap& obj)
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

FragTrap::~FragTrap()
{
    std::cout << "Destructor of Fragtrap called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << _name << " requests a positive high five! ✋😄" << std::endl;
}