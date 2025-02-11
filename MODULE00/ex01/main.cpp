#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "iostream"
#include "string"

int main(void)
{
	PhoneBook	repertoire;
	Contact		contact;
	std::string	input;

	std::cout << "CHOOSE BETWEEN: ADD / SEARCH / EXIT : " << std::endl;
	while (input != "EXIT")
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (!std::getline(std::cin, input))
			return (EXIT_FAILURE);
		if (input.empty())
			std::cout << "COMMAND NOT FOUND\n";
		else if (input == "ADD")
		{
			contact.ft_add_contact();
			if (contact.ft_check_error() == false)
				contact.ft_add_contact();
			repertoire.ft_add_contact(contact);
			std::cout << "\033[32mCONTACT WAS BEEN ADDED\033[0m" << std::endl;
		}
		else if (input == "SEARCH")
		{
			repertoire.ft_list_contacts();
		}
		else if (input == "EXIT")
		{
			exit(EXIT_SUCCESS);
		}
		else
			std::cout << "COMMAND NOT FOUND\n";
	}
	return (EXIT_SUCCESS);
}