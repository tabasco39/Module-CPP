/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 06:51:12 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/14 09:25:42 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main (void)
{
    Zombie zmb("test");
    zmb.announce();

    Zombie *new_zmb = newZombie("new zombie"); 
    new_zmb->announce();

    randomChump("random chump");
    delete(new_zmb);
    return (0);
}