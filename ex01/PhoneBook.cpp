/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:12:53 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/07 12:29:12 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void		PhoneBook::add(void)
{
	if (id >= PHONEB_MAX)
	{
		std::cout << "error: the crappy book only accepts ";
		std::cout << PHONEB_MAX << " record(s)" << std::endl;
		return ;
	}
	std::cout << "_____________________________________________";
	std::cout << std::endl;
	std::cout << "|                    NEW                    |";
	std::cout << std::endl;
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	for (int i = 0; i < FORM_SIZE && active; i++)
	{
		std::cout << pb[id].form[i] << ": ";
		std::cin.clear();
		active = std::getline(std::cin, pb[id].form_val[i]);
	}
	if (active == false)
		return ;
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	pb[id].empty = 0;
	id++;
}

void	PhoneBook::search(void)
{
	std::cout << "_____________________________________________";
	std::cout << std::endl;
	std::cout << "|     index|first name| last name|  nickname|";
	std::cout << std::endl;
	for (int i = 0; i < FORM_SIZE && pb[i].empty == 0; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << i;
		std::cout << "|";
		palign(pb[i].form_val[0], 10);
		std::cout << "|";
		palign(pb[i].form_val[1], 10);
		std::cout << "|";
		palign(pb[i].form_val[2], 10);
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	open();
}

void	PhoneBook::palign(std::string str, size_t width)
{
	if (str.size() > width)
			std::cout << str.substr(0, 9) << ".";
	else
	{
		std::cout.width(10);
		std::cout << std::right << str;
	}
}

void	PhoneBook::open(void)
{
	std::string	cmd;
	int			id;

	std::cout << "Enter the index: ";
	std::cin.clear();
	std::getline(std::cin, cmd);
	std::stringstream ss;
	ss << cmd;
	ss >> id;
	if (cmd.size() < 1 || !std::isdigit(cmd.at(0)) || pb[id].empty)
	{
		std::cout << "error: index not found." << std::endl;
		return ;
	}
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	for (int i = 0; i < FORM_SIZE; i++)
	{
		std::cout << pb[id].form[i] << ": " << pb[id].form_val[i];
		std::cout << std::endl;
	}
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
}