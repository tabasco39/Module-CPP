#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::_debug(void)
{
    std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int         start_level;

    start_level = -1;

    t_level tab_level[4] = {
        { "DEBUG" , &Harl::_debug },
        { "INFO" , &Harl::_info },
        { "WARNING" , &Harl::_warning },
        { "ERROR" , &Harl::_error },
    };
    for (int i = 0; i <= 3; i++)
    {
        if (level == tab_level[i].level)
        {
            start_level = i;
            break;
        }
    }
    switch (start_level)
    {
    case 0:
        for (int i = 0; i <= 3; i++)
        {
            (this->*tab_level[i].function)();
            std::cout << std::endl;
        }
        break;
    case 1:
        for (int i = 1; i <= 3; i++)
        {
            (this->*tab_level[i].function)();
            std::cout << std::endl;
        }
        break;
    case 2:
        for (int i = 2; i <= 3; i++)
        {
            (this->*tab_level[i].function)();
            std::cout << std::endl;
        }
        break;
    case 3:
        for (int i = 3; i <= 3; i++)
        {
            (this->*tab_level[i].function)();    
            std::cout << std::endl;
        }
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}