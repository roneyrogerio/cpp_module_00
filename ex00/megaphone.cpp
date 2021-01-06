/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:07:21 by rde-oliv          #+#    #+#             */
/*   Updated: 2021/01/06 09:26:22 by rde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	str;
	std::string	feedback("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			str = argv[i];
			for (size_t j = 0; j < str.size(); j++)
				std::cout << (char)toupper(str.at(j));
		}
	}
	else
		std::cout << feedback;
	std::cout << std::endl;
	return (0);
}
