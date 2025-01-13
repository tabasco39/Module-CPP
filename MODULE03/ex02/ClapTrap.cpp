#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    if (energy > 0 || hit > 0)
    {
        std::cout << "ClapTrap " << name << " attacks ";
        std::cout << target << ", causing " << attack_dammage << " points of dammage" << std::endl;
        energy-- ;
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
    hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy > 0 || hit > 0)
    {
        energy--;
        std::cout << "Gooodddd!!!  You got " << amount << " energy" << std::endl;
        hit += amount;
    }
     else
    {
        std::cout << "Sorry, You have not enougth energy to be repaired" << std::endl;
    }
}

ClapTrap::ClapTrap()
{
    hit = 10;
    energy = 10;
    attack_dammage = 0;
    std::cout << "Default constructor of CLAPTRAP called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : 
    name(_name)
{
    hit = 10;
    energy = 10;
    attack_dammage = 0;
    std::cout << "Constructor with parameter of CLAPTRAP called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
    *this = obj;
    std::cout << "Copied Constructor of CLAPTRAP called " << std::endl; 
}

ClapTrap ClapTrap::operator=(ClapTrap& obj)
{
    this->name           = obj.name;
    this->hit            = obj.hit;
    this->energy         = obj.energy;
    this->attack_dammage = obj.attack_dammage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}