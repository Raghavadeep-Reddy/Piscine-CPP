/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:38:26 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 16:38:26 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: ./a.out [number]" << std::endl;
		return (-1);
	}
	Cast cast;
	try
	{
		double temp = std::stod(argv[1]);
		cast.dostuff(temp);
	}
	catch (std::exception &e)
	{
		std::string str = argv[1];
		if (str.length() > 1)
		{
			std::cout << e.what() << std::endl;
			return (-1);
		}
		else
			cast.dostuff(static_cast<double>(str[0]));
	}
	return (0);
}
