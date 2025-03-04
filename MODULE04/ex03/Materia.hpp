/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:59:15 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/04 10:05:54 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"

class Materia
{
    private:
        /* data */
    public:
        Materia(/* args */);
        ~Materia();
        Materia(Materia const &obj);
        Materia &operator=(Materia const &obj);
        AMateria * clone() const;
};



#endif