#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl_instance;

    if (argc != 2)
    {
        std::cout << "[The number of the arguments must be one]" << std::endl;
        return (EXIT_FAILURE);
    }
    harl_instance.complain(argv[1]);
    return (EXIT_SUCCESS);
}