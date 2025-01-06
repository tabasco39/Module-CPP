/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aranaivo <aranaivo@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:37:17 by aranaivo          #+#    #+#             */
/*   Updated: 2024/12/18 07:25:49 by aranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    int index;
    Contact phone_books[8];
    void    ft_add_contact(Contact ct);
    void    ft_display_contact();
    void    ft_list_contacts();
};

#endif