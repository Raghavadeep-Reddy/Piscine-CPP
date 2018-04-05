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

int main()
{
	srand (time(NULL));
	FragTrap FT;
	FragTrap FT2(" Misha");
	FragTrap FT3(FT, "  Kesha");

	std::cout << "==================" << std::endl;

	FT.rangedAttack("Vasya"); 
	FT.vaulthunter_dot_exe("Vasya");
	FT2.rangedAttack("Max");
	FT2.vaulthunter_dot_exe("Max");
	FT3.rangedAttack("Petya");
	FT3.vaulthunter_dot_exe("Petya");

	std::cout << "==================" << std::endl;

	FragTrap FT4("Robot");
	FT4.vaulthunter_dot_exe("Serena");
	FT4.vaulthunter_dot_exe("Serena");
	FT4.vaulthunter_dot_exe("Serena");
	FT4.vaulthunter_dot_exe("Serena");

	std::cout << "==================" << std::endl;

	return (0);
}
