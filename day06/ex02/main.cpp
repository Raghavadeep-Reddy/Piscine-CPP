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

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	int index = rand() % 3;

	switch(index) {
		case 0: return (new A::A());
		case 1: return (new B::B());
		case 2: return (new C::C());
	}
	return (new Base);
}

void identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p) {
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}


int		main(void)
{
	srand(time(NULL));
	Base *base;

	base = generate();
	std::cout << "Pointer: ";
	identify_from_pointer(base);
	std::cout << "Reference: ";
	identify_from_reference(*base);
	delete base;
}
