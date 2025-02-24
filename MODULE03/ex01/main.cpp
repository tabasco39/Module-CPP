#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {
    ClapTrap clap("CLAP1");
    ScavTrap scav;

    clap.attack("CLAP2");
    clap.takeDamage(5);
    clap.beRepaired(3);
    
    scav.attack("CLAP2");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.guardGate();


    return 0;
}