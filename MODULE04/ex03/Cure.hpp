/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:26:16 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 11:01:53 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
    public:
        Cure(/* args */);
        Cure(Cure const &obj);
        Cure & operator=(Cure const &obj);
        AMateria *clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif