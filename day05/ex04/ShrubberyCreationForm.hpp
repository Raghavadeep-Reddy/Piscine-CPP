/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 21:54:13 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 21:54:13 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
	ShrubberyCreationForm();
public:
	std::string			getTarget() const;
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm & shr);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm & shr);
	virtual			~ShrubberyCreationForm();
	virtual void	execute(Bureaucrat const & executor) const;
};

#endif
