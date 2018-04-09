/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:59:48 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 15:59:49 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string name;
	int			grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bc);
	Bureaucrat&		operator=(Bureaucrat const &bc);
	std::string		getName() const;
	int				getGrade() const;
	void			incrementGrade();
	void			decrementGrade();
	~Bureaucrat();
	class			GradeTooHighException : public std::exception {
		public:
			GradeTooHighException();
			GradeTooHighException(const Bureaucrat::GradeTooHighException &cpy);
			GradeTooHighException&	operator=(Bureaucrat::GradeTooHighException const &th);
			~GradeTooHighException() throw();
			virtual const char *what() const throw();
	};
	class			GradeTooLowException : public std::exception {
		public:
			GradeTooLowException();
			GradeTooLowException(const Bureaucrat::GradeTooLowException &cpy);
			GradeTooLowException&	operator=(Bureaucrat::GradeTooLowException const &tl);
			~GradeTooLowException() throw();
			virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bc);

#endif
