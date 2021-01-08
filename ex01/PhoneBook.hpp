/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 06:55:48 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/08 13:44:17 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include <sstream>
# define PHONEB_MAX 8
# define FORM_SIZE 11

class PhoneItem
{
	public:
		std::string	form[FORM_SIZE];
		std::string	form_val[FORM_SIZE];
		int			empty;
		PhoneItem(void);
};

class PhoneBook
{
	PhoneItem	pb[PHONEB_MAX];
	int			id;

	public:
		bool	active;
		
		PhoneBook(void);
		void	add(void);
		void	search(void);
	private:
		void	palign(std::string str, size_t width);
		void	open(void);
};
