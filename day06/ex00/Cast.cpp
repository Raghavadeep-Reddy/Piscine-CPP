/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:13:42 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 19:13:43 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

Cast::Cast() {

}

Cast::Cast(const Cast &cpy) {
	(void)cpy;
}

Cast& Cast::operator=(const Cast &cpy) {
	(void)cpy;
	return (*this);
}

Cast::~Cast() {

}

void	Cast::dostuff(const double& temp) {
	float	fnum = static_cast<float>(temp);
	int		inum = static_cast<int>(temp);
	char	cnum = static_cast<char>(inum);

	double trash;
	if (temp < SCHAR_MIN || temp > SCHAR_MAX || isnan(temp) || std::isinf(temp))
		std::cout << "char: inpossible" << std::endl;
	else if (!isprint(cnum))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << cnum << std::endl;
	if (temp < INT_MIN || temp > INT_MAX || isnan(temp) || std::isinf(temp))
		std::cout << "char: inpossible" << std::endl;
	else
		std::cout << "int: " << inum << std::endl;
	if (modf(temp, &trash) != 0 || std::isinf(temp))
		std::cout << "float: " << fnum << "f" << std::endl;
	else
		std::cout << "float: " << fnum << ".0f" << std::endl;
	if (modf(temp, &trash) != 0 || std::isinf(temp))
		std::cout << "double: " << temp << std::endl;
	else
		std::cout << "double: " << fnum << ".0" << std::endl;
}

