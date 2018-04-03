/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:22:47 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 14:22:49 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	srand((long)time(NULL));
	ZombieEvent event;

	event.setZombieType("Killer");
	for (int i = 0; i < 20; ++i) {
		event.randomChump();
	}
	return (0);
}
