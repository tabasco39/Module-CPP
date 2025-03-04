#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(Cat& obj);
        Cat& operator=(Cat& obj);
        ~Cat();
        void showBrain(void);
        virtual void makeSound(void) const;
};


#endif


