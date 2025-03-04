#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     const WrongAnimal *beta = new WrongAnimal();
//     const WrongAnimal *k = new WrongCat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     std::cout << k->getType() << " " << std::endl;
//     std::cout << beta->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     beta->makeSound();
//     k->makeSound();
//     delete i;
//     return 0;
// }

int main()
{
  // const Animal *j = new Dog();
  // const Animal *i = new Cat();

  // delete i;
  // delete j;

  // std::cout << "==========================" << std::endl;
  // Animal *t[10];
  // for (int i = 0; i < 5; i++)
  //   t[i] = new Dog;
  // for (int i = 5; i < 10; i++)
  //   t[i] = new Cat;

  // for (int i = 0; i < 10; i++)
  //   delete t[i];

  std::cout << "======= Deep cpy test======" << std::endl;

  Animal *u = new Dog();
  Animal *v = new Dog();

  u = v;
  delete u;
  std::cout << "nieeeeeeeeeeeeeeeeeeeeeeeeeeee\n";
  v->makeSound();
  return 0;
}