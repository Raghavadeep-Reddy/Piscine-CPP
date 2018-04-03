/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:15:56 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 15:15:59 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->numOfZombies = N;
	this->zombie = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		this->zombie[i].setRandomName();
		zombie[i].setZombieType();
	}
}

ZombieHorde::~ZombieHorde() {

}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->numOfZombies; ++i) {
		this->zombie[i].announce();
	}
}
