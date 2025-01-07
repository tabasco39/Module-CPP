
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *all_zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
        all_zombie[i].set_name(name);
    return (all_zombie);
}