/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 21:54:26 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 21:54:27 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form( "RobotomyRequestForm", 72, 45 ), target("Nobody")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : 
	Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rbt) :
	Form("RobotomyRequestForm", 72, 45), target(rbt.getTarget())
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & rbt) {
	this->target = rbt.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

std::string		RobotomyRequestForm::getTarget() const {
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;
	Form::notSigned nots;

	if (this->getSigned() == false)
		throw nots;
	if (executor.getGrade() > this->getGradeFS())
		throw low;
	if (executor.getGrade() > this->getGradeEX())
		throw low;
	std::cout << "D-z-z-z * Drilling noises *, D-z-z-z" << std::endl;
	if (rand() % 2)
		std::cout << target << " was created successfully!" << std::endl;
	else
		std::cout << "Something went wrong :C" << std::endl;
}
