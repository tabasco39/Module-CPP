#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain;
    type = "Dog";
    std::cout << "Default constructor of Dog called" << std::endl;
}

Dog::Dog(Dog& obj)
{
    std::cout << "Copied constructor of Dog called" << std::endl;
    type = obj.type;
    brain = new Brain;
    for (int i = 0; i < 100; i++)
        brain->get_ideas()[i] = obj.brain->get_ideas()[i];
}

Dog& Dog::operator=(Dog& obj)
{
    std::cout << "Assignement operator of Dog called" << std::endl;
    if (this != &obj)
    {
        type = obj.type;
        for (int i = 0; i < 100; i++)
            brain->get_ideas()[i] = obj.brain->get_ideas()[i];
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    brain = NULL;
    std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound(void) const
{
    for (int i = 0; i < 10; i++)
        std::cout << brain->get_ideas()[i] << std::endl;
    std::cout << "oufoufoufoufouff" << std::endl;
}

void Dog::showBrain(void)
{
    for (int i = 0; i < 5; i++)
        std::cout << brain->get_ideas()[i] << std::endl;
}