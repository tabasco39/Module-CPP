
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
    Zombie *zombies;
    int     N;

    N = 4;
    zombies = zombieHorde(N, "test");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return (EXIT_SUCCESS); 
}