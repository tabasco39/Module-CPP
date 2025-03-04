#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal& obj);
    WrongAnimal& operator=(WrongAnimal& obj);
    ~WrongAnimal();
    std::string getType(void) const;
    void makeSound(void) const;
};


#endif