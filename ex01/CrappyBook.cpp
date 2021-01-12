/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrappyBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 06:26:17 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/12 15:38:53 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string			cmd;
	PhoneBook			PhoneBook;

	while (1)
	{
		std::cout << "Command: ";
		std::cin.clear();
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			PhoneBook.add();
		else if (cmd.compare("SEARCH") == 0)
			PhoneBook.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
		else if (std::cin.eof())
			std::cout << std::endl;
	}
}
