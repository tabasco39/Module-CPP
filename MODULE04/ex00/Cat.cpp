#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Default constructor of cat called" << std::endl;
}

Cat::Cat(Cat& obj)
{
    *this = obj;
    std::cout << "Copied constructor of cat called" << std::endl;
}

Cat& Cat::operator=(Cat& obj)
{
    this->type = obj.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of cat called" << std::endl;
}

void Cat::makeSound(void)
{
    std::cout << "miaaouuuuuuuuu!!!!" << std::endl;
}