/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:39:18 by aranaivo          #+#    #+#             */
/*   Updated: 2024/11/28 15:41:40 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"

class Contact
{
	public:
		Contact(/* args */);
		~Contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	dark_secret;
		void ft_add_firstname();
		void ft_add_lastname();
		void ft_add_nickname();
		void ft_add_darksecret();
		void ft_add_contact();
};
