#include "ClapTrap.hpp"

std::string ClapTrap::get_name(void)
{
    return (name);
}

int ClapTrap::get_energy(void)
{
    return (energy);
}

int ClapTrap::get_hit(void)
{
    return (hit);
}

int ClapTrap::get_attack_damage(void)
{
    return (attack_dammage);
}

void ClapTrap::set_energy(int _energy)
{
    energy = _energy;
}

void ClapTrap::set_hit(int _hit)
{
    hit = _hit;
}

void ClapTrap::set_attack_damage(unsigned int _attack_dammage)
{
    attack_dammage = _attack_dammage;
}

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

ClapTrap::ClapTrap(std::string _name) : 
    name(_name), hit(100), energy(50), attack_dammage(20)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}