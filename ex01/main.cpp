/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:52:21 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/18 13:52:21 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook.showInstruction();
	while (true)
	{
		std::cout << "Enter command: ";
		if (std::cin.eof() == true)
		{
			std::cout << "" << std::endl;
			std::cout << "Exiting phonebook... GOOD BYE" << std::endl;
			break ;
		}
		std::getline(std::cin, command);
		if (command == "EXIT")
		{
			std::cout << "Exiting phonebook... GOOD BYE" << std::endl;
			break ;
		}
		else if (command == "ADD")
		{
			if (!phonebook.getInfo())
				break ;
		}
		else if (command == "SEARCH")
		{
			if (!phonebook.searchEntries())
				break ;
		}
	}
	// if (command != "EXIT" && std::cin.eof() == false)
	// 	std::cout << "You pressed ^D, exiting now. Good Bye." << command << std::endl;
    return (0);
}
