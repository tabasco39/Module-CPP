#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl_instance;

    if (argc != 2)
    {
        std::cout << "[The number of the arguments must be one]" << std::endl;
        return (1);
    }
    harl_instance.complain(argv[1]);
    return (0);
}