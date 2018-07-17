/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:59:54 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 15:59:55 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::exception() {

}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy) {
	(void)cpy;
}

Bureaucrat::GradeTooHighException&	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &th) {
	(void)th;
	return (*this);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::exception() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy) {
	(void)cpy;
}

Bureaucrat::GradeTooLowException&	Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &tl) {
	(void)tl;
	return (*this);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	Bureaucrat::GradeTooHighException high;
	Bureaucrat::GradeTooLowException low;

	if (this->grade < 1)
		throw high;
	else if (this->grade > 150)
		throw low;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bc) {
	*this = bc;
}

Bureaucrat&		Bureaucrat::operator=(const Bureaucrat &bc) {
	this->grade = bc.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {

}

const char*			Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The Grade is too high!");
}

const char*			Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The Grade is too low!");
}

std::string		Bureaucrat::getName() const { return (this->name); }
int				Bureaucrat::getGrade() const { return (this->grade); }

void			Bureaucrat::incrementGrade() {
	Bureaucrat::GradeTooHighException high;

	this->grade--;
	if (this->grade < 1)
		throw (high);
}

void			Bureaucrat::decrementGrade() {
	Bureaucrat::GradeTooLowException low;

	this->grade++;
	if (this->grade > 150)
		throw (low);
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& bc) {
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << std::endl;
	return (os);
}
