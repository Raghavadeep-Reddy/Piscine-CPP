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

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand (time(NULL));
	ClapTrap CP("Parent");
	FragTrap FT("Child Lesha");
	ScavTrap ST("Child Misha");
	NinjaTrap NT("Child Naruto");

	std::cout << "==================" << std::endl;

	FT.rangedAttack("Vasya");
	FT.vaulthunter_dot_exe("Vasya");

	std::cout << "==================" << std::endl;

	ST.rangedAttack("Max");
	ST.challengeNewcomer();

	std::cout << "==================" << std::endl;

	NT.meleeAttack("Obito");
	NT.ninjaShoebox(FT, "meleeAttack");
	std::cout << "==================" << std::endl;

	return (0);
}
