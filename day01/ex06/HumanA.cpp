/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:36:23 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 17:36:24 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
		: name(name), weapon(weapon)
{

}

HumanA::~HumanA() {

}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his "<<
	this->weapon.getType() << std::endl;
}
