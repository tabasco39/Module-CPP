#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::_debug(void)
{
    std::cout << "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[INFO] : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ERROR] : This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    t_level tab[4] = {
        {"debug", &Harl::_debug},
        {"info", &Harl::_info},
        {"warning", &Harl::_warning},
        {"error", &Harl::_error}
    };
    for (int i = 0; i < 4; i++)
    {
        if (level == tab[i].level)
        {
            (this->*tab[i].function)();
            return;
        }
    }
    std::cout << "UNKNOWN LEVEL" << std::endl;
}   