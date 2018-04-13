/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:52:51 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 18:52:52 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main( void )
{
	{
		std::list<int> lst1;

		lst1.push_back(1);
		lst1.push_back(17);
		lst1.push_back(42);

		try {
			easyFind(lst1, 42);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::list<int> lst1;

		lst1.push_back(1);
		lst1.push_back(17);
		lst1.push_back(42);
		lst1.push_back(2);
		lst1.push_back(12);
		lst1.push_back(45);
		lst1.push_back(6);
		lst1.push_back(7);
		lst1.push_back(9);

		try {
			easyFind(lst1, 45);
			easyFind(lst1, 0);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
