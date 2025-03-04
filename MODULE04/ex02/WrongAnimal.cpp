#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Default constructor of WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
    *this = obj;
    std::cout << "Copied constructor of WrongAnimal called" << std::endl;

}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj)
{
    this->type = obj.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "grrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
}