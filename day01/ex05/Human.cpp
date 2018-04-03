/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:22:49 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 16:22:51 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	this->brain = Brain();
}

Human::~Human() {

}

Brain		&Human::getBrain() {
	return (this->brain);
}

std::string	Human::identify() const {
	std::string str;
	std::stringstream ss;

	ss << this;
	str = ss.str();
	for (int i = 2; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
	}
	return (str);
}
