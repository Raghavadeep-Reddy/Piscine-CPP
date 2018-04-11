/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 19:00:27 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/10 19:00:30 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

class OfficeBlock
{
private:
	OfficeBlock(OfficeBlock const & cpy);
	OfficeBlock&	operator=(OfficeBlock const & cpy);
	Intern			*intern;
	Bureaucrat		*signer;
	Bureaucrat		*executor;
public:
	OfficeBlock();
	~OfficeBlock();
	void	setIntern(Intern& intern);
	void	setSigner(Bureaucrat& borya);
	void	setExecutor(Bureaucrat& borya);
	void	doBureaucracy(const std::string &name, const std::string &target);
};

#endif
