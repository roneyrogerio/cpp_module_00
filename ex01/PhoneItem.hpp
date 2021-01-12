/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneItem.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 21:16:03 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/12 10:26:12 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>

class PhoneItem
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	bool		empty;

	public:
		PhoneItem(void);
		void		setFirstName(std::string var);
		void		setLastName(std::string var);
		void		setNickname(std::string var);
		void		setLogin(std::string var);
		void		setPostalAddress(std::string var);
		void		setEmailAddress(std::string var);
		void		setPhoneNumber(std::string var);
		void		setBirthdayDate(std::string var);
		void		setFavoriteMeal(std::string var);
		void		setUnderwearColor(std::string var);
		void		setDarkestSecret(std::string var);
		void		setEmpty(bool var);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string getNickname(void);
		std::string getLogin(void);
		std::string getPostalAddress(void);
		std::string getEmailAddress(void);
		std::string getPhoneNumber(void);
		std::string getBirthdayDate(void);
		std::string getFavoriteMeal(void);
		std::string getUnderwearColor(void);
		std::string getDarkestSecret(void);
		bool		getEmpty(void);
};
