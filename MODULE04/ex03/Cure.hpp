/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:26:16 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 10:29:16 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPPP

#include "AMateria.hpp"

class Cure
{
    private:
        /* data */
    public:
        Cure(/* args */);
        Cure(Cure const &obj);
        Cure & operator=(Cure const &obj);
        AMateria *clone() const;
        ~Cure();
};

#endif