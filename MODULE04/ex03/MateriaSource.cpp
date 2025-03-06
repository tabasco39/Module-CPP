/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:33:28 by aranaivo          #+#    #+#             */
/*   Updated: 2025/03/06 11:40:25 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & obj)
{
    for (int i = 0; i < 3; i++)
        materia[i] = obj.materia[i]->clone();
}

MateriaSource &MateriaSource::operator=(MateriaSource const & obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {    
            delete(materia[i]);
            materia[i] = obj.materia[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL)
            delete(materia[i]);
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (materia[i]->getType() == type)
            return materia[i]->clone();
    }
    std::cout << "Materia inconnnu" << std::endl;
    return (0);
}