/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 21:54:40 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 21:54:40 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5), target("Nobody")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : 
	Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & pres) :
	Form("PresidentialPardonForm", 25, 5), target(pres.getTarget())
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & pres) {
	this->target = pres.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

std::string		PresidentialPardonForm::getTarget() const {
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;
	Form::notSigned nots;

	if (this->getSigned() == false)
		throw nots;
	if (executor.getGrade() > this->getGradeFS())
		throw low;
	if (executor.getGrade() > this->getGradeEX())
		throw low;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
