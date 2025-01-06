/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:10:48 by aranaivo          #+#    #+#             */
/*   Updated: 2024/11/28 13:49:01 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "cctype"

void ft_toupper_string(std::string *str)
{
	for (int i = 0; i < (*str).length(); i++)
        (*str)[i] = toupper((*str)[i]);
}

int main(int argc, char **argv)
{
	std::string msg;
	int         size;

	msg = "* loud and unbearable feedback noise *\n";
	size = msg.length();
	if (argc <= 1)
	{
		ft_toupper_string(&msg);
		std::cout << msg;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			msg = argv[i];
			ft_toupper_string(&msg);
			std::cout << msg;
		}
		std::cout << std::endl;
	}
	return (0);
}
