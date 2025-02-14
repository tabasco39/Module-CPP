#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "string"

class Weapon
{
    public :
        Weapon(std::string type);
        Weapon();
        ~Weapon(void);
        const std::string& getType();
        void setType(std::string _type);
    
    private :
        std::string _type;
};

#endif