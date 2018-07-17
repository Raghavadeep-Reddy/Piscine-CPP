/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 21:26:16 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/05 21:26:17 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand (time(NULL));
	FragTrap FT("Lesha");
	ScavTrap ST("ScavTrap");

	std::cout << "==================" << std::endl;

	FT.rangedAttack("Vasya");
	FT.vaulthunter_dot_exe("Vasya");

	std::cout << "==================" << std::endl;

	ST.rangedAttack("Max");
	ST.challengeNewcomer();

	std::cout << "==================" << std::endl;

	return (0);
}
