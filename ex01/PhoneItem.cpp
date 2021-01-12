/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneItem.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 21:24:42 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/12 15:34:10 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneItem.hpp"

PhoneItem::PhoneItem(void)
{
	first_name      = "";
	last_name       = "";
	nickname        = "";
	login           = "";
	postal_address  = "";
	email_address   = "";
	phone_number    = "";
	birthday_date   = "";
	favorite_meal   = "";
	underwear_color = "";
	darkest_secret  = "";
	empty           = true;
}

void		PhoneItem::setFirstName(std::string var)
{
	first_name = var;
}

void		PhoneItem::setLastName(std::string var)
{
	last_name = var;
}

void		PhoneItem::setNickname(std::string var)
{
	nickname = var;
}

void		PhoneItem::setLogin(std::string var)
{
	login = var;
}

void		PhoneItem::setPostalAddress(std::string var)
{
	postal_address = var;
}

void		PhoneItem::setEmailAddress(std::string var)
{
	email_address = var;
}

void		PhoneItem::setPhoneNumber(std::string var)
{
	phone_number = var;
}

void		PhoneItem::setBirthdayDate(std::string var)
{
	birthday_date = var;
}

void		PhoneItem::setFavoriteMeal(std::string var)
{
	favorite_meal = var;
}

void		PhoneItem::setUnderwearColor(std::string var)
{
	underwear_color = var;
}

void		PhoneItem::setDarkestSecret(std::string var)
{
	darkest_secret = var;
}

void        PhoneItem::setEmpty(bool var)
{
	empty = var;
}

std::string	PhoneItem::getFirstName(void)
{
	return first_name;
}

std::string	PhoneItem::getLastName(void)
{
	return last_name;
}

std::string	PhoneItem::getNickname(void)
{
	return nickname;
}

std::string	PhoneItem::getLogin(void)
{
	return login;
}

std::string	PhoneItem::getPostalAddress(void)
{
	return postal_address;
}

std::string	PhoneItem::getEmailAddress(void)
{
	return email_address;
}

std::string	PhoneItem::getPhoneNumber(void)
{
	return phone_number;
}

std::string	PhoneItem::getBirthdayDate(void)
{
	return birthday_date;
}

std::string	PhoneItem::getFavoriteMeal(void)
{
	return favorite_meal;
}

std::string	PhoneItem::getUnderwearColor(void)
{
	return underwear_color;
}

std::string	PhoneItem::getDarkestSecret(void)
{
	return darkest_secret;
}

bool        PhoneItem::getEmpty(void)
{
	return empty;
}
