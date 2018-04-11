/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:11:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 20:11:09 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			gradeSingIn;
	const int			gradeExecute;
public:
	class			GradeTooHighException : public std::exception {
		public:
			GradeTooHighException();
			GradeTooHighException(const Form::GradeTooHighException &cpy);
			GradeTooHighException&	operator=(Form::GradeTooHighException const &th);
			~GradeTooHighException() throw();
			virtual const char *what() const throw();
	};
	class			GradeTooLowException : public std::exception {
		public:
			GradeTooLowException();
			GradeTooLowException(const Form::GradeTooLowException &cpy);
			GradeTooLowException&	operator=(Form::GradeTooLowException const &tl);
			~GradeTooLowException() throw();
			virtual const char *what() const throw();
	};
	class			AlreadySigned : public std::exception {
		public:
			AlreadySigned();
			AlreadySigned(const Form::AlreadySigned &cpy);
			AlreadySigned&	operator=(Form::AlreadySigned const &tl);
			~AlreadySigned() throw();
			virtual const char *what() const throw();
	};
					Form(std::string name, int gradeS, int gradeEx);
	virtual			~Form();
					Form(const Form &form);
	Form&			operator=(const Form &from);
	std::string		getName() const;
	bool			getSigned() const;
	int				getGradeFS() const;
	int				getGradeEX() const;
	void			beSigned(const Bureaucrat& bc);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
