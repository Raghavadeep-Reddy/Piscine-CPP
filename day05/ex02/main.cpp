/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:00:01 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 16:00:02 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	Bureaucrat borya("Borya", 5);
	Bureaucrat vasya("Vasya", 3);
	std::cout << borya;
	std::cout << vasya;

	std::cout << "====================" << std::endl;
	std::cout << "==== Cant sign ===" << std::endl;
	Form f1("For Borya", 1, 10);
	Form f2("For Vasya", 3, 3);

	try
	{
		std::cout << f1;
		f1.beSigned(borya);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "=== All is good ===" << std::endl;
	try
	{
		std::cout << f2;
		f2.beSigned(vasya);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "=== Already signed ===" << std::endl;
	try
	{
		std::cout << f2;
		f2.beSigned(vasya);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
