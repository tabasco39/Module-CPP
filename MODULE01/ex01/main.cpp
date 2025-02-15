/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 07:28:56 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/13 07:28:58 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    int     N;

    N = 4;
    zombies = zombieHorde(N, "test");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0); 
}