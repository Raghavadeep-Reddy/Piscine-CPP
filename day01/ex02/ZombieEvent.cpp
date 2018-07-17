/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:22:33 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 14:22:34 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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

ZombieEvent::ZombieEvent() : type("unknown") {

}

ZombieEvent::~ZombieEvent() {

}

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) const {
	return (new Zombie (name, type));
}

void	ZombieEvent::randomChump()
{
	char PlayerName[21];

	PlayerName[0] = 0;
	strcat(PlayerName, NamePrefix[(rand() % 7)]);
	strcat(PlayerName, NameStems[(rand() % 20)]);
	strcat(PlayerName, NameSuffix[(rand() % 16)]);
	PlayerName[0] = toupper(PlayerName[0]);
	Zombie zombie(PlayerName, this->type);
	zombie.announce();
}
