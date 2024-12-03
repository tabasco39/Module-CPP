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
		std::cin >> input;
		if (input == "ADD")
		{
			contact.ft_add_contact();
			std::cout << contact.first_name << std::endl;
			std::cout << contact.last_name << std::endl;
			std::cout << contact.nick_name << std::endl;
			std::cout << contact.dark_secret << std::endl;
		}
		else if (input == "SEARCH")
			std::cout << "SEARCH\n";
		else
			std::cout << "COMMAND NOT FOUND\n";
	}
}