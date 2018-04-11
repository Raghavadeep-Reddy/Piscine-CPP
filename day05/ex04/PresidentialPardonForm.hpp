/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:51:34 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/10 14:51:34 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target;
	PresidentialPardonForm();
public:
	std::string			getTarget() const;
	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(const PresidentialPardonForm & pres);
	PresidentialPardonForm& operator=(const PresidentialPardonForm & pres);
	virtual			~PresidentialPardonForm();
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
