#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  delete i;
  delete j;

  std::cout << "==========================" << std::endl;
  Animal *t[10];
  for (int i = 0; i < 5; i++)
    t[i] = new Dog;
  for (int i = 5; i < 10; i++)
    t[i] = new Cat;

  for (int i = 0; i < 10; i++)
    delete t[i];

  std::cout << "======= Deep cpy test======" << std::endl;

  Dog *u = new Dog();
  Dog *v = new Dog();
  Dog *w = new Dog(*v);

  *u = *v;
  delete u;
  std::cout << " ***** V brain **** " << std::endl;
  v->showBrain();
  delete v;
  std::cout << " ***** W brain **** " << std::endl;
  w->showBrain();
  delete w;
  return 0;
}