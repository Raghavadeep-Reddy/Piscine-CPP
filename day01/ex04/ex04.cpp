/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:42:50 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 15:42:51 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string a = "HI THIS IS BRAIN";
	std::string &b = a;
	std::string *c = &b;

	std::cout << "pointer: " << *c << std::endl;
	std::cout << "reference: " << b << std::endl;
	return (0);
}
