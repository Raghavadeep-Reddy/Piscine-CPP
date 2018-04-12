/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:46:39 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 19:46:40 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	srand((unsigned)time(NULL));
	try
	{
		Span sp = Span(5);
		sp.addNumber(INT_MAX);
		sp.addNumber(3);
		sp.addNumber(5);
		sp.addNumber(9);
		sp.addNumber(INT_MIN);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;

		Span sp1 = Span(5);
		sp1.addNumber(5);
		sp1.addNumber(3);
		sp1.addNumber(INT_MAX);
		sp1.addNumber(9);
		sp1.addNumber(INT_MIN);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl << std::endl;

		Span sp2 = Span(1000000);
		sp2.generateNumbers(1000000);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
