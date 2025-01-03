/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:37:59 by aranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 07:48:59 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <string>

PhoneBook::PhoneBook(/* args */)
{
    this->index = 0;
    return;
}

PhoneBook::~PhoneBook()
{
    return;
}

void    PhoneBook::ft_add_contact(Contact ct)
{
    if (this->index >= 8)
        this->index = 0;
    this->phone_books[this->index] = ct;
    this->index++;
}

std::string truncate_value(int len, std::string value)
{
    std::string result;

    if (value.length() > len)
    {
        result = value.substr(0, len - 2);
        result += ".";
    }
    else
    {
        result = value.length() > len ? value.substr(0, len - 2) : value;
    }
    return (result);
}

void    PhoneBook::ft_display_contact()
{
	const char*		input_char;
    std::string     input;

    std::cout << "\033[33mCHOOSE INDEX PLEASE: \033[0m";
    std::getline(std::cin, input);
	input_char = input.c_str();
    if (input.empty())
		std::cout << "\033[31m!!!PLEASE, TYPE INDEX .\033[0m" << std::endl;
    else if (this->phone_books[std::atoi(input_char)].first_name.empty())
		std::cout << "\033[31m!!!INDEX NOT VALID .\033[0m" << std::endl;
	else
	{
		std::cout << "\033[32mFIRSTNAME : \033[0m" << this->phone_books[std::atoi(input_char)].first_name << std::endl;
		std::cout << "\033[32mLASTNAME : \033[0m" << this->phone_books[std::atoi(input_char)].last_name << std::endl;
		std::cout << "\033[32mNICKNAME : \033[0m" << this->phone_books[std::atoi(input_char)].nick_name << std::endl;
		std::cout << "\033[32mPHONE NUMBER : \033[0m" << this->phone_books[std::atoi(input_char)].phone_number << std::endl;
	}
}

void    PhoneBook::ft_list_contacts()
{
    int             i;
    int             len;
    std::string     first_name;
    std::string     last_name;
    std::string     nick_name;
    std::string     phone_number;

    i = 0;
    len = 10;
    if (this->phone_books[0].first_name.empty())
		std::cout << "\033[31m!!!NO PHONEBOOKS FOUND, PLEASE ADD.\033[0m" << std::endl;
    else
    {
        while (!this->phone_books[i].dark_secret.empty())
        {
            first_name = truncate_value(len, this->phone_books[i].first_name);
            last_name = truncate_value(len, this->phone_books[i].last_name);
            nick_name = truncate_value(len, this->phone_books[i].nick_name);
            phone_number = truncate_value(len, this->phone_books[i].phone_number);
            std::cout << std::setw(len) << i << "|";
            std::cout << std::setw(len) << first_name << "|";
            std::cout << std::setw(len) << last_name << "|";
            std::cout << std::setw(len) << nick_name << "|";
            std::cout << std::setw(len) << phone_number << std::endl;
            i++;
        }
        this->ft_display_contact();
    }
}