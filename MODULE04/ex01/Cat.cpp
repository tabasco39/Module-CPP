#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain;
    type = "Cat";
    std::cout << "Default constructor of cat called" << std::endl;
}

Cat::Cat(Cat& obj)
{
    brain = new Brain;
    brain = obj.brain;
    type = obj.type;
    std::cout << "Copied constructor of cat called" << std::endl;
}

Cat& Cat::operator=(Cat& obj)
{
    if (this != &obj)
    {
        delete brain;
        brain = new Brain;
        brain = obj.brain;
        type = obj.type;
    }
    return(*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Destructor of cat called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "miaaouuuuuuuuu!!!!" << std::endl;
}