#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamandTrap.hpp"


int main() {
    ClapTrap clap("CLAP1");
    DiamandTrap dmd("DMD1");

    dmd.whoAmI();
    dmd.attack("TEST1");
    clap.attack("TEST2");


    return 0;
}