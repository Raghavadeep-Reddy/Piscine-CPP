/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:47:03 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/10 14:47:04 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;
	RobotomyRequestForm();
public:
	std::string			getTarget() const;
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm & rbt);
	RobotomyRequestForm& operator=(const RobotomyRequestForm & rbt);
	virtual			~RobotomyRequestForm();
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
