#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Default constructor of Dog called" << std::endl;
}

Dog::Dog(Dog& obj)
{
    *this = obj;
    std::cout << "Copied constructor of Dog called" << std::endl;

}

Dog& Dog::operator=(Dog& obj)
{
    std::cout << "iciiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n";
    this->type = obj.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "oufoufoufoufouff" << std::endl;
}