/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:39:18 by aranaivo          #+#    #+#             */
/*   Updated: 2024/12/03 13:48:04 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "string"
#include <limits>
#include "iostream"

class Contact
{
	public:
		Contact(/* args */);
		~Contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	dark_secret;
		int			phone_number;
		void ft_add_firstname();
		void ft_add_lastname();
		void ft_add_nickname();
		void ft_add_darksecret();
		void ft_add_phone_number();
		void ft_add_contact();
		int  ft_check_error();
};

#endif
