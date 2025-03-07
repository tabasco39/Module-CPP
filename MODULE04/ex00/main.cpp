#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal *beta = new WrongAnimal();
    const WrongAnimal *k = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << beta->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    beta->makeSound();
    k->makeSound();
    delete i;
    delete j;
    delete meta;
    delete beta;
    delete k;
    return 0;
}
