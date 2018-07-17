/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:15:39 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 15:15:42 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

char NamePrefix[][5] = {
	"","bel","nar","xan","bell","natr","ev",
};

char NameSuffix[][5] = {
	"", "us", "ix", "ox", "ith",
	"ath", "um", "ator", "or", "axia",
	"imus", "ais", "itur", "orex", "o","y"
};

const char NameStems[][10] = {
	"adur", "aes", "anim", "apoll", "imac",
	"educ", "equis", "extr", "guius", "hann",
	"equi", "amora", "hum", "iace", "ille",
	"inept", "iuv", "obe", "ocul", "orbis"
};

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

void	Zombie::setRandomName() {
	char PlayerName[21];

	PlayerName[0] = 0;
	strcat(PlayerName, NamePrefix[(rand() % 7)]);
	strcat(PlayerName, NameStems[(rand() % 20)]);
	strcat(PlayerName, NameSuffix[(rand() % 16)]);
	PlayerName[0] = toupper(PlayerName[0]);
	this->name = PlayerName;
}

void	Zombie::setZombieType() {
	this->type = "Murderer";
}