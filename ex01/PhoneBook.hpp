/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 06:55:48 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/12 15:55:04 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "PhoneItem.hpp"
# include <iostream>
# include <string>
# include <sstream>
# define PHONEB_MAX 8
# define FORM_SIZE 11

class PhoneBook
{
	PhoneItem	pb[PHONEB_MAX];
	int			id;

	public:
		PhoneBook(void);
		void	add(void);
		void	search(void);
	private:
		void	prompt(int id);
		void	promptGetInput(std::string &input);
		void	searchTableLines(void);
		void	tableAlign(std::string str, size_t width);
		void	open(void);
		void	openFields(int id);
};
