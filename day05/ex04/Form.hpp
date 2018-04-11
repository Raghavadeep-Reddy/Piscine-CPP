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
			virtual ~GradeTooHighException() throw();
			virtual const char *what() const throw();
	};
	class			GradeTooLowException : public std::exception {
		public:
			GradeTooLowException();
			GradeTooLowException(const Form::GradeTooLowException &cpy);
			GradeTooLowException&	operator=(Form::GradeTooLowException const &tl);
			virtual ~GradeTooLowException() throw();
			virtual const char *what() const throw();
	};
	class			notSigned : public std::exception {
		public:
			notSigned();
			notSigned(const Form::notSigned &cpy);
			notSigned&	operator=(Form::notSigned const &tl);
			virtual ~notSigned() throw();
			virtual const char *what() const throw();
	};



	virtual std::string	getTarget( void ) const = 0;
	virtual void		execute(Bureaucrat const &executor) const = 0;
						Form(std::string name, int gradeS, int gradeEx);
	virtual				~Form();
						Form(const Form &form);
	Form&				operator=(const Form &from);
	std::string			getName() const;
	bool				getSigned() const;
	int					getGradeFS() const;
	int					getGradeEX() const;
	void				beSigned(const Bureaucrat& bc);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
