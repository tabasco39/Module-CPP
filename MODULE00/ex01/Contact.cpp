/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:39:52 by aranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 07:51:12 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
    this->first_name = "";
    this->last_name = "";
    this->nick_name = "";
    this->dark_secret = ""; 
}

Contact::~Contact()
{
}

void Contact::ft_add_firstname()
{
    std::cout << "ENTER FIRSTNAME : ";
    std::getline(std::cin, this->first_name);
    if (!std::getline(std::cin, this->first_name))
	    exit(EXIT_FAILURE);
}

void Contact::ft_add_lastname()
{
    std::cout << "ENTER LASTNAME : ";
    std::getline(std::cin, this->last_name);
    if (!std::getline(std::cin, this->last_name))
	    exit(EXIT_FAILURE);
}

void Contact::ft_add_nickname()
{
    std::cout << "ENTER NICKNAME : ";
    std::getline(std::cin, this->nick_name);
    if (!std::getline(std::cin, this->nick_name))
	    exit(EXIT_FAILURE);
}

void Contact::ft_add_phone_number()
{
    std::string input;
    const char  *str;

    std::cout << "ENTER PHONE NUMBER : ";
    std::getline(std::cin, input);
    if (!std::getline(std::cin, input))
	    exit(EXIT_FAILURE);
    str = input.c_str();
    this->phone_number = input;
    for (int i = 0; str[i]; i++)
    {
        if(!std::isdigit(str[i]))
        {
            std::cout << "\033[31m!!!PHONE NUMBER MUST BE A DIGIT .\033[0m" << std::endl;
            this->ft_add_phone_number();
            break;
        }
    }
}

void Contact::ft_add_darksecret()
{
    std::cout << "ENTER DARKSECRET : ";
    std::getline(std::cin, this->dark_secret);
    if (!std::getline(std::cin, this->dark_secret))
	    exit(EXIT_FAILURE);
}

int Contact::ft_check_error()
{
    if (this->first_name.empty() || this->last_name.empty()
        || this->nick_name.empty() || this->dark_secret.empty())
    {
        std::cout << "\033[31m!!!ALL FIELDS MUST BE FILLED IN .\033[0m" << std::endl;
        return (false);
    }
    return (true);
}

void Contact::ft_add_contact()
{
    this->ft_add_firstname();
    this->ft_add_lastname();
    this->ft_add_nickname();
    this->ft_add_darksecret();
    this->ft_add_phone_number();
}
