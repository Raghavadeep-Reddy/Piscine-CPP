/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:22:36 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 16:22:37 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {

}

Brain::~Brain() {

}

std::string	Brain::identify() const {
	std::string str;
	std::stringstream ss;

	ss << this;
	str = ss.str();
	for (int i = 2; i < str.length(); ++i) {
		str[i] = toupper(str[i]);
	}
	return (str);
}
