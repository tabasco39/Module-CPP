#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if (_energy > 0 || _hit > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks ";
        std::cout << target << ", causing " << _attack_dammage << " points of dammage" << std::endl;
        _energy-- ;
    }
    else
    {
        std::cout << "Sorry, You have not enougth energy to attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Booommmm (%#*) !!!!";
    std::cout << " You loose " << amount << " hit point" << std::endl;
    _hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy > 0 || _hit > 0)
    {
        _energy--;
        std::cout << "Gooodddd!!!  You got " << amount << " energy" << std::endl;
        _hit += amount;
    }
     else
    {
        std::cout << "Sorry, You have not enougth energy to be repaired" << std::endl;
    }
}

ClapTrap::ClapTrap()
{
    _name = "foo";
    _hit = 10;
    _energy = 10;
    _attack_dammage = 0;
    std::cout << "Default constructor of CLAPTRAP called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
    _name(name)
{
    _hit = 10;
    _energy = 10;
    _attack_dammage = 0;
    std::cout << "Constructor with parameter of CLAPTRAP called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    *this = obj;
    std::cout << "Copied Constructor of CLAPTRAP called " << std::endl; 
}

ClapTrap ClapTrap::operator=(ClapTrap& obj)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor CLAPTRAP called" << std::endl;
}