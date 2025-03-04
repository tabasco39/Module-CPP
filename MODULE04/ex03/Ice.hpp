/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:21:59 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 10:57:19 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : AMateria
{
    public:
        Ice();
        Ice(Ice const & obj);
        Ice & operator=(Ice const &obj);
        AMateria *clone() const;
        ~Ice();
};

#endif