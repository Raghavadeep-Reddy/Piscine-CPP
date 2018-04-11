/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 21:54:16 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/09 21:54:17 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define TREE \
"            .        +          .      .          .\n"\
"     .            _        .                    .\n"\
"  ,              /;-._,-.____        ,-----.__\n"\
" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"\
"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"\
"                      ,    `./  \\:. `.   )==-'  .\n"\
"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"\
".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"\
"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"\
"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"\
"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"\
"              \\:  `  X` _| _,\\/'   .-'\n"\
".               \":._:`\\____  /:'  /      .           .\n"\
"                    \\::.  :\\/:'  /              +\n"\
"   .                 `.:.  /:'  }      .\n"\
"           .           ):_(:;   \\           .\n"\
"                      /:. _/ ,  |\n"\
"                   . (|::.     ,`                  .\n"\
"     .                |::.    {\\\n"\
"                      |::.\\  \\ `.\n"\
"                      |:::(\\    |\n"\
"              O       |:::/{ }  |                  (o\n"\
"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"\
"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"\
"      ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form( "ShrubberyCreationForm", 145, 137 ), target("Nobody")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : 
	Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & shr) :
	Form("ShrubberyCreationForm", 145, 137), target(shr.getTarget())
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & shr) {
	this->target = shr.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

std::string		ShrubberyCreationForm::getTarget() const {
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::GradeTooLowException low;
	Form::GradeTooHighException high;
	Form::notSigned nots;

	if (this->getSigned() == false)
		throw nots;
	if (executor.getGrade() > this->getGradeFS())
		throw low;
	if (executor.getGrade() > this->getGradeEX())
		throw low;
	std::ofstream	outputFile(this->target + "_shrubbery");
	outputFile << TREE << std::endl;
}
