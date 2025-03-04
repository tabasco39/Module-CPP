#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat& obj);
        WrongCat& operator=(WrongCat& obj);
        ~WrongCat();
        void makeSound(void) const;
};


#endif


