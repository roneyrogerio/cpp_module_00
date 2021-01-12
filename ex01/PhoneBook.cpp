/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 09:12:53 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/12 16:04:59 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	id = 0;
}

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
	prompt(id);
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	pb[id].setEmpty(false);
	id++;
}

void	PhoneBook::prompt(int id)
{
	std::string input;

	std::cout << "first name: ";
	promptGetInput(input);
	pb[id].setFirstName(input);
	std::cout << "last name: ";
	promptGetInput(input);
	pb[id].setLastName(input);
	std::cout << "nickname: ";
	promptGetInput(input);
	pb[id].setNickname(input);
	std::cout << "login: ";
	promptGetInput(input);
	pb[id].setLogin(input);
	std::cout << "postal address: ";
	promptGetInput(input);
	pb[id].setPostalAddress(input);
	std::cout << "email address: ";
	promptGetInput(input);
	pb[id].setEmailAddress(input);
	std::cout << "phone number: ";
	promptGetInput(input);
	pb[id].setPhoneNumber(input);
	std::cout << "birthday date: ";
	promptGetInput(input);
	pb[id].setBirthdayDate(input);
	std::cout << "favorite meal: ";
	promptGetInput(input);
	pb[id].setFavoriteMeal(input);
	std::cout << "underwear color: ";
	promptGetInput(input);
	pb[id].setUnderwearColor(input);
	std::cout << "darkest secret: ";
	promptGetInput(input);
	pb[id].setDarkestSecret(input);
}

void    PhoneBook::promptGetInput(std::string &input)
{
	std::cin.clear();
	std::getline(std::cin, input);	
	if (std::cin.eof())
		std::cout << std::endl;	
}

void	PhoneBook::search(void)
{
	std::cout << "_____________________________________________";
	std::cout << std::endl;
	std::cout << "|     index|first name| last name|  nickname|";
	std::cout << std::endl;
	searchTableLines();
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	open();
}

void	PhoneBook::searchTableLines(void)
{
	for (int i = 0; i < PHONEB_MAX && pb[i].getEmpty() == false; i++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << i;
		std::cout << "|";
		tableAlign(pb[i].getFirstName(), 10);
		std::cout << "|";
		tableAlign(pb[i].getLastName(), 10);
		std::cout << "|";
		tableAlign(pb[i].getNickname(), 10);
		std::cout << "|";
		std::cout << std::endl;
	}
}

void	PhoneBook::tableAlign(std::string str, size_t width)
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
	if (std::cin.eof())
		std::cout << std::endl;
	std::stringstream ss;
	ss << cmd;
	ss >> id;
	if (cmd.size() < 1 || !std::isdigit(cmd.at(0)) ||
		id >= PHONEB_MAX || pb[id].getEmpty())
	{
		std::cout << "error: index not found." << std::endl;
		return ;
	}
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
	openFields(id);
	std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯";
	std::cout << std::endl;
}

void	PhoneBook::openFields(int id)
{
	std::cout << "first name: " << pb[id].getFirstName();
	std::cout << std::endl;
	std::cout << "last name: " << pb[id].getLastName();
	std::cout << std::endl;
	std::cout << "nickname: " << pb[id].getNickname();
	std::cout << std::endl;
	std::cout << "login: " << pb[id].getLogin();
	std::cout << std::endl;
	std::cout << "postal address: " << pb[id].getPostalAddress();
	std::cout << std::endl;
	std::cout << "email address: " << pb[id].getEmailAddress();
	std::cout << std::endl;
	std::cout << "phone number: " << pb[id].getPhoneNumber();
	std::cout << std::endl;
	std::cout << "birthday date: " << pb[id].getBirthdayDate();
	std::cout << std::endl;
	std::cout << "favorite meal: " << pb[id].getFavoriteMeal();
	std::cout << std::endl;
	std::cout << "underwear color: " << pb[id].getUnderwearColor();
	std::cout << std::endl;
	std::cout << "darkest secret: " << pb[id].getDarkestSecret();
	std::cout << std::endl;
}
