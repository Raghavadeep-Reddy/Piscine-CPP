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
#include "ZombieHorde.hpp"

int main()
{
	srand((long)time(NULL));
	ZombieHorde *horde = new ZombieHorde(7);
	horde->announce();
	delete horde;
	return (0);
}
