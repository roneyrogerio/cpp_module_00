/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CrappyBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 06:26:17 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/07 10:29:33 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string			cmd;
	PhoneBook			PhoneBook;

	while (PhoneBook.active)
	{
		std::cin.clear();
		std::cout << "Command: ";
		PhoneBook.active = std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			PhoneBook.add();
		if (cmd.compare("SEARCH") == 0)
			PhoneBook.search();
		else if (cmd.compare("EXIT") == 0)
			break ;
	}
	if (PhoneBook.active == false)
		std::cout << std::endl;
}
