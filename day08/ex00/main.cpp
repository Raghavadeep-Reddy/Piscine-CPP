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
	std::list<int> lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	try {
		easyFind(lst1, 42);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
