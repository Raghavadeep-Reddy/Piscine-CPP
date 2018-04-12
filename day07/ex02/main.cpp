/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 00:53:32 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 00:53:33 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int  main(void)
{
	Array<double> arr(4243);

	arr[4242] = 42;
	std::cout << "Array [" << arr.size() << "]: #4242 = " << arr[4242] << std::endl;

	try {
		arr[4243] = 21;
	}
	catch(std::exception const & e)
	{
		std::cerr << "Element out of bounds!" << std::endl;
	}

	try
	{
		Array<int> lol;

		Array<std::string> str_arr(static_cast<unsigned>(4));
		str_arr[0] = "lol";
		str_arr[1] = "kek";
		str_arr[2] = "cheburek";
		str_arr[3] = "c++";
		Array<std::string> copy(str_arr);
		copy[2] += " test";
		Array<std::string> copy2(static_cast<unsigned>(2));
		copy2 = copy;
		copy2[3] += " c--";
		std::cout << "create arr[" << str_arr.size() << "]: " << std::endl
			<< "[0]-> " << str_arr[0] << std::endl
			<< "[1]-> " << str_arr[1] << std::endl
			<< "[2]-> " << str_arr[2] << std::endl
			<< "[3]-> " << str_arr[3] << std::endl;
		std::cout << "create copy[" << str_arr.size() << "]: " << std::endl
			<< "[0]-> " << copy[0] << std::endl
			<< "[1]-> " << copy[1] << std::endl
			<< "[2]-> " << copy[2] << std::endl
			<< "[3]-> " << copy[3] << std::endl;
		std::cout << "create assign copy[" << str_arr.size() << "]: " << std::endl
			<< "[0]-> " << copy2[0] << std::endl
			<< "[1]-> " << copy2[1] << std::endl
			<< "[2]-> " << copy2[2] << std::endl
			<< "[3]-> " << copy2[3] << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cerr << "Element out of bounds!" << std::endl;
	}
	return (0);
}