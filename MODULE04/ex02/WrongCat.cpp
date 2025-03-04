#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Default constructor of Wrongcat called" << std::endl;
}

WrongCat::WrongCat(WrongCat& obj)
{
    *this = obj;
    std::cout << "Copied constructor of Wrongcat called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& obj)
{
    this->type = obj.type;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of Wrongcat called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "miaaouuuuuuuuu!!!!" << std::endl;
}