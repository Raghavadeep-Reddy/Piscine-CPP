/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:36:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 17:36:09 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
		: type(type)
{

}

Weapon::~Weapon() {

}

void		Weapon::setType(const std::string type) {
	this->type = type;
}

const std::string &Weapon::getType() {
	return (this->type);
}
