/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 20:34:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/13 20:34:09 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(5);
	mstack.push(17);
	mstack.push(34);

	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top element: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(68);
	mstack.push(136);
	mstack.push(272);
	mstack.push(544);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "Stack content:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	mstack.push(11);
	mstack.push(131116);
	mstack.push(2125);
	mstack.push(5154);

	MutantStack<int>::iterator ot = mstack.begin();
	ite = mstack.end();

	std::cout << "Stack content:" << std::endl;
	while (ot != ite)
	{
		std::cout << *ot << std::endl;
		++ot;
	}
	std::stack<int> s(mstack);
	return 0;
}
