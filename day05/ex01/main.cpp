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
	std::cout << "============================" << std::endl;
	std::cout << "===== Can sign =============" << std::endl;
	try
	{
		Bureaucrat vasya("Vasya", 100);
		Form paper("Toilet Paper", 150, 150);

		std::cout << vasya;
		std::cout << paper;
		vasya.signForm(paper);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "==== Cant sign ==============" << std::endl;
	try
	{
		Bureaucrat	borya("Borya", 5);
		Form		law("Law", 1, 1);

		std::cout << borya;
		std::cout << law;
		borya.signForm(law);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "=== Already signed ============" << std::endl;
	try
	{
		Bureaucrat borya("Borya", 100);
		Form paper("Toilet Paper", 150, 150);

		std::cout << borya;
		std::cout << paper;
		borya.signForm(paper);
		borya.signForm(paper);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "============================" << std::endl;
	return (0);
}
