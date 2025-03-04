#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain;
    type = "Cat";
    std::cout << "Default constructor of cat called" << std::endl;
}

Cat::Cat(Cat& obj)
{
    std::cout << "Copied constructor of cat called" << std::endl;
    type = obj.type;
    brain = new Brain;
    for(int i = 0; i < 100; i++)
        brain->get_ideas()[i] = obj.brain->get_ideas()[i];
}

Cat& Cat::operator=(Cat& obj)
{
    if (this != &obj)
    {
        type = obj.type;
        for(int i = 0; i < 100; i++)
            brain->get_ideas()[i] = obj.brain->get_ideas()[i];
    }
    return(*this);
}

Cat::~Cat()
{
    delete brain;
    brain = NULL;
    std::cout << "Destructor of cat called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "miaaouuuuuuuuu!!!!" << std::endl;
}

void Cat::showBrain(void)
{
    for (int i = 0; i < 5; i++)
        std::cout << brain->get_ideas()[i] << std::endl;
}