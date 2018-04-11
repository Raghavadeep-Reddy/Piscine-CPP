/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 19:00:21 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/10 19:00:22 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() {}
OfficeBlock::~OfficeBlock() {}
OfficeBlock::OfficeBlock(OfficeBlock const & cpy) {
	(void)cpy;
}
OfficeBlock&	OfficeBlock::operator=(OfficeBlock const & cpy) {
	(void)cpy;
	return (*this);
}

void	OfficeBlock::setIntern(Intern& intern) {
	this->intern = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat& borya) {
	this->signer = &borya;
}

void	OfficeBlock::setExecutor(Bureaucrat& borya) {
	this->executor = &borya;
}

void	OfficeBlock::doBureaucracy(const std::string &name, const std::string &target)
{
	Form	*form;

	if (!signer || !executor || !intern)
	{
		std::cout << "OfficeBlock isn't full" << std::endl;
		return;
	}
	form = intern->makeForm(name, target);
	if (!form)
		return;
	std::string stat = form->getSigned() ? "Signed" : "Unsigned";
	std::cout << "Intern creates a " << name << " ( s.grade " << form->getGradeFS() << ", ex.grade " << form->getGradeEX() << ") targeted a " << target
	<< "(" << stat << ")" << std::endl;
	signer->signForm(*form);
	if (signer->getGrade() <= form->getGradeFS())
		std::cout << signer->getName() << " signs form for (" << form->getGradeFS() << ")" << " signs a " << name << "( s.grade " << form->getGradeFS()
		<< ", ex.grade " << form->getGradeEX() << ") targeted a " << target << "(" << stat << ")" << std::endl;
	executor->executeForm(*form);
	if (signer->getGrade() <= form->getGradeEX())
		std::cout << executor->getName() << " executes form for (" << form->getGradeFS() << ")" << " executes a " << name << "( s.grade " << form->getGradeFS()
		<< ", ex.grade " << form->getGradeEX() << ") targeted a " << target << "(" << stat << ")" << std::endl;
}
