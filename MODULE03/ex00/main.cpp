#include "ClapTrap.hpp"


int main() {
    ClapTrap clap("CLAP1");

    clap.attack("CLAP2");
    clap.takeDamage(5);
    clap.beRepaired(3);


    clap.attack("CLAP3");
    clap.takeDamage(10);
    clap.beRepaired(5);

    return 0;
}