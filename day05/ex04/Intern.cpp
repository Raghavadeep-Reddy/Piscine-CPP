/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 16:53:50 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/10 16:53:53 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern & intern) {
	(void)intern;
}

Intern& Intern::operator=(const Intern & intern) {
	(void)intern;
	return (*this);
}

Intern::~Intern() {

}

Form*	Intern::makeForm(const std::string &name, const std::string &target) {
	Form* form;

	if (name == "presidential pardon") {
		std::cout << "Intern creates a Presidential Pardon Form ";
		form = new PresidentialPardonForm(target);
	} else if (name == "robotomy request") {
		std::cout << "Intern creates a Robotomy Request Form ";
		form = new RobotomyRequestForm(target);
	} else if (name == "shrubbery creation") {
		std::cout << "Intern creates a Shrubbery Creation Form ";
		form = new ShrubberyCreationForm(target);
	} else {
		std::cout << "Intern doesn't know the " << name << " form." << std::endl;
		return NULL;
	}
	std::cout << "(s.grade " << form->getGradeFS() << ", ex.grade " << form->getGradeEX()
	<< ") targeted on " << target << " (Unsigned)" << std::endl;
	return (form);
}
