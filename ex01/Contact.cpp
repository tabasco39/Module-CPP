/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:39:52 by aranaivo          #+#    #+#             */
/*   Updated: 2024/11/28 15:40:45 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void Contact::ft_add_firstname()
{
    std::cout << "ENTER FIRSTNAME : ";
    std::cin >> this->first_name;
}

void Contact::ft_add_lastname()
{
    std::cout << "ENTER LASTNAME : ";
    std::cin >> this->last_name;
}

void Contact::ft_add_nickname()
{
    std::cout << "ENTER NICKNAME : ";
    std::cin >> this->nick_name;
}

void Contact::ft_add_darksecret()
{
    std::cout << "ENTER DARKSECRET : ";
    std::cin >> this->dark_secret;
}

void Contact::ft_add_contact()
{
    this->ft_add_firstname();
    this->ft_add_lastname();
    this->ft_add_nickname();
    this->ft_add_darksecret();
}
