#ifndef DIAMAND_TRAP
#define DIAMAND_TRAP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamandTrap : public ScavTrap , public FragTrap
{
    private:
        std::string _name;
    public:
        DiamandTrap(void);
        DiamandTrap(std::string name);
        DiamandTrap(DiamandTrap& obj);
        DiamandTrap operator=(DiamandTrap& obj);
        ~DiamandTrap();
        void attack(const std::string& name);
        void whoAmI();
};


#endif

