/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:11:02 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 20:11:03 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException() : std::exception() {

}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &cpy) {
	(void)cpy;
}

Form::GradeTooHighException&	Form::GradeTooHighException::operator=(GradeTooHighException const &th) {
	(void)th;
	return (*this);
}

Form::GradeTooHighException::~GradeTooHighException() throw() {

}

Form::GradeTooLowException::GradeTooLowException() : std::exception() {

}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &cpy) {
	(void)cpy;
}

Form::GradeTooLowException&	Form::GradeTooLowException::operator=(GradeTooLowException const &tl) {
	(void)tl;
	return (*this);
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

Form::notSigned::notSigned() : std::exception() {

}

Form::notSigned::notSigned(const notSigned &cpy) {
	(void)cpy;
}

Form::notSigned&	Form::notSigned::operator=(notSigned const &th) {
	(void)th;
	return (*this);
}

Form::notSigned::~notSigned() throw() {

}

void			Form::beSigned(const Bureaucrat& bc) {
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;
	Form::notSigned notSigned;

	if (this->_signed == true)
		throw notSigned;
	if (bc.getGrade() > this->gradeSingIn)
		throw low;
	if (bc.getGrade() > this->gradeExecute)
		throw low;
	this->_signed = true;
	std::cout << bc.getName() << " succesfully signed" << std::endl;
}

Form::Form(std::string name, int gradeS, int gradeEx) :
	_name(name), _signed(false), gradeSingIn(gradeS), gradeExecute(gradeEx)
{
	Form::GradeTooHighException high;
	Form::GradeTooLowException low;

	if (this->gradeSingIn < 1 || this->gradeExecute < 1)
		throw high;
	else if (this->gradeSingIn > 150 || this->gradeExecute > 150)
		throw low;
}

const char*			Form::notSigned::what() const throw() {
	return ("The Form isnt signed!");
}

const char*			Form::GradeTooHighException::what() const throw() {
	return ("The Grade is too high!");
}

const char*			Form::GradeTooLowException::what() const throw() {
	return ("The Grade is too low!");
}

Form::Form(const Form &form) : gradeSingIn(form.gradeSingIn), gradeExecute(form.gradeExecute) {
	*this = form;
}

Form &Form::operator=(const Form &form) {
	this->_signed = form.getSigned();
	return (*this);
}

Form::~Form() {

}

std::ostream& operator<< (std::ostream& os, const Form& form) {
	os << form.getName() << ", "
	<< form.getGradeFS() << ", " << form.getGradeEX() << std::endl;
	return (os);
}

std::string		Form::getName() const { return (this->_name); }
bool			Form::getSigned() const { return (this->_signed); }
int				Form::getGradeFS() const { return (this->gradeSingIn); }
int				Form::getGradeEX() const { return (this->gradeExecute); }
