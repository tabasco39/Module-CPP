#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal(void);
    Animal(Animal& obj);
    Animal& operator=(Animal& obj);
    std::string getType(void) const;
    virtual ~Animal();
    virtual void makeSound(void) const = 0;
};


#endif