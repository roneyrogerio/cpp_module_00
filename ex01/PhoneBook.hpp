/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 06:55:48 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/07 12:41:34 by rde-oliv         ###   ########.fr       */
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

		PhoneItem()
		{
			form[0]  = "first name";
			form[1]  = "last name";
			form[2]  = "nickname";
			form[3]  = "login";
			form[4]  = "postal address";
			form[5]  = "email address";
			form[6]  = "phone number";
			form[7]  = "birthday date";
			form[8]  = "favorite meal";
			form[9]  = "underwear color";
			form[10] = "darkest secret";
			empty = 1;
		}
};

class PhoneBook
{
	PhoneItem	pb[PHONEB_MAX];
	int			id;

	public:
		bool	active;

		PhoneBook()
		{
			id     = 0;
			active = true;
		}
		void	add(void);
		void	search(void);
	private:
		void	palign(std::string str, size_t width);
		void	open(void);
};
