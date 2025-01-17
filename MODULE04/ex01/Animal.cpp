#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Default constructor of Animal called" << std::endl;
}

Animal::Animal(Animal& obj)
{
    *this = obj;
    std::cout << "Copied constructor of Animal called" << std::endl;

}

Animal& Animal::operator=(Animal& obj)
{
    this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "shhhhshhhhshhh" << std::endl;
}