/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:57:43 by aranaivo          #+#    #+#             */
/*   Updated: 2025/02/13 07:41:39 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

int main(void)
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;

    std::cout << "address of the string variable : " << &str << std::endl;
    std::cout << "address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "address held by stringREF : " << &stringREF << std::endl;
    std::cout << "******************************************" << std::endl;
    std::cout << "value of the string variable : " << str << std::endl;
    std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value pointed by stringREF : " << stringREF << std::endl;

    return (0);
}