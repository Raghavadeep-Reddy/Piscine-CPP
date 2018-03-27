/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:48:31 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/26 21:48:32 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

std::string get_line()
{
	std::string str;

	if (std::getline(std::cin, str))
		return (str);
	std::cout << "Error read input\n";
	std::exit(-1);
}

int			main(void)
{
	Phonebook	book;
	std::string	str;
	int			index = 0;

	while (1)
	{
		str = get_line();
		if (str == "EXIT")
			std::exit(1);
		else if (str == "ADD") {
			if (index > 7)
				std::cout << "Phonebook is full, GO AWAY!" << std::endl;
			else
				book.add_contact(index++);
		}
		else if (str == "SEARCH") {
			book.search_contact();
		}
		else {
			std::cout << "Wrong command, ";
			std::cout << "try 'ADD' | 'SEARCH' | 'EXIT'\n";
		}
	}
	return (0);
}
