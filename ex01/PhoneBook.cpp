/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:37:59 by aranaivo          #+#    #+#             */
/*   Updated: 2024/12/03 14:38:58 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <cstring>

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

void    PhoneBook::ft_display_element(char *str)
{
    int len;
    int i;

    len = strlen(str);
    str = (char *)str;
    if (len > 10)
    {
        str[9] = '.';
        for (int i = 0; str[i] != '.'; i++)
            std::cout << str[i];
        std::cout << "|"; 
    }
}

void    PhoneBook::ft_list_contacts()
{
    int             i;
    std::string     input;
	const char*		input_char;

    i = 0;
    while (!this->phone_books[i].dark_secret.empty())
    {
        std::cout << i << " | ";
        this->ft_display_element((char *)this->phone_books[i].first_name.c_str());
        std::cout << this->phone_books[i].last_name << " | ";
        std::cout << this->phone_books[i].nick_name << " | ";
        std::cout << this->phone_books[i].phone_number << std::endl;;
        i++;
    }
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