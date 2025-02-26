#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Dog *test = new Dog();
    Dog *test1;

    test1 = test;
    test->makeSound();
    delete(test);
  // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal *beta = new WrongAnimal();
    // const WrongAnimal *k = new WrongCat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << k->getType() << " " << std::endl;
    // std::cout << beta->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // beta->makeSound();
    // k->makeSound();
    return 0;
}