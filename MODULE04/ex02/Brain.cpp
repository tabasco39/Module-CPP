/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:16:06 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/28 13:35:59 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = "ideas_";
    }
    std::cout << "Default constructor of brain called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "Copy constructor of brain called" << std::endl;
}

Brain& Brain::operator=(Brain const &obj)
{
    if (this != &obj)
    {   
        for (int i = 0; i < 100; i ++)
        {
            _ideas[i] = obj._ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Destructor of brain called" << std::endl;
}

std::string* Brain::get_ideas(void)
{
    return (_ideas);
}