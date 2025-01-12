#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {
    ClapTrap clap("CLAP1");
    ScavTrap scav("SCAV");


    clap.attack("CLAP2");
    clap.takeDamage(5);
    std::cout << "CLAP HIT ==> " << clap.get_hit() << std::endl;
    std::cout << "SCAV HIT ==> " << scav.get_hit() << std::endl;
    clap.beRepaired(3);
    scav.attack("CLAP2");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.guardGate();

    clap.attack("CLAP3");
    clap.takeDamage(10);
    clap.beRepaired(5);
    scav.attack("CLAP3");
    scav.takeDamage(10);
    scav.beRepaired(5);

    return 0;
}