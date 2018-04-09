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

int main(void)
{
	std::cout << "== decrementGrade ==" << std::endl;
	{
		try
		{
			Bureaucrat borya("Borya", 150);
			std::cout << borya;
			borya.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "== incrementGrade ==" << std::endl;
	{
		try
		{
			Bureaucrat borya("Borya", 1);
			std::cout << borya;
			borya.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout <<"== invalid constractor ==" << std::endl;
	{
		try
		{
			Bureaucrat borya("Borya", 1000);
			std::cout << borya;
			borya.incrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout <<"== normal ==" << std::endl;
	{
		try
		{
			Bureaucrat borya("Borya", 50);
			std::cout << borya;
			borya.decrementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
