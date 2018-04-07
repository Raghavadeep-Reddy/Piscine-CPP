/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:12:14 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 22:12:14 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back ..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone(void) const {
	return (new AssaultTerminator());
}

void	AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator &arg) {
	return (*this);
	(void)arg;
}
