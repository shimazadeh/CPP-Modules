/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:56:33 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:56:35 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	std::string	buff;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		buff = av[i];
		for (int j = 0; j < buff.length(); j++)
		{
			buff[j] = std::toupper(buff[j]);
			std::cout << buff[j];
		}
	}
	std::cout << std::endl;
	return (0);
}
