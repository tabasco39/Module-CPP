#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(void);
    Dog(Dog& obj);
    Dog& operator=(Dog& obj);
    void makeSound(void);
    ~Dog();
};
#endif