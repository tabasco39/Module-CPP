#ifndef CAT_HPP
#define CAT_HPP

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat& obj);
        Cat& operator=(Cat& obj);
        ~Cat();
        void makeSound(void) const override;
};


#endif


