#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain;
    type = "Dog";
    std::cout << "Default constructor of Dog called" << std::endl;
}

Dog::Dog(Dog& obj)
{
    brain = new Brain;
    brain = obj.brain;
    type = obj.type;
    std::cout << "Copied constructor of Dog called" << std::endl;

}

Dog& Dog::operator=(Dog& obj)
{
    if (this != &obj)
    {
        type = obj.type;
        delete brain;
        brain = new Brain;
        brain = obj.brain;
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Destructor of Dog called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "oufoufoufoufouff" << std::endl;
}

Brain *Dog::getBrain(void)
{
    for (int i = 0; i < 100 ; i++)
    {
        std::cout << brain.
    }
    return (brain);
}