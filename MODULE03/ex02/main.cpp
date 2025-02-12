#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() {
    ClapTrap clap("CLAP1");
    ScavTrap scav("SCAV");
    FragTrap frag("FRAG");

    for (int i = 0; i < 30; i++)
    {
        std::cout << "==========================" << std::endl;

        clap.attack("CLAP2");
        clap.takeDamage(5);
        clap.beRepaired(3);
        
        std::cout << "==========================" << std::endl;

        scav.attack("CLAP2");
        scav.takeDamage(5);
        scav.beRepaired(3);
        scav.guardGate();

        std::cout << "==========================" << std::endl;

        frag.attack("CLAP2");
        frag.takeDamage(5);
        frag.beRepaired(3);
        frag.highFivesGuys();

        std::cout << "==========================" << std::endl;
    }


    return 0;
}