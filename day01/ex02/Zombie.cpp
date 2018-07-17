/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:22:21 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 14:22:22 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("unknown"), type("unknown") {

}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {

}

Zombie::~Zombie() {
}

void	Zombie::announce() const {
	std::cout << "<" << this->name << " (";
	std::cout << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
