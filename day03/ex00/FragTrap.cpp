/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 21:26:00 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/05 21:26:01 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
	HP(10), MaxHP(100), Energy(30), MaxEnergy(100),
	Lvl(1), name("Unknown"), MeleeDamage(30), RangedDamage(20),
	DamageReduction(5) {
	std::cout << "FR4G-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

FragTrap::FragTrap(const std::string &name) :
	HP(100), MaxHP(100), Energy(100), MaxEnergy(100),
	Lvl(1), name(name), MeleeDamage(30), RangedDamage(20),
	DamageReduction(5) {
	std::cout << "FR4G-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft, const std::string &name) {
	*this = ft;
	std::cout << "FR4G-TP " << name
	<< " was copied from " << this->name << " with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
	this->name = name;
}

FragTrap &FragTrap::operator=(const FragTrap& ft) {
	this->HP = ft.HP;
	this->Lvl = ft.Lvl;
	this->name = ft.name;
	this->MaxHP = ft.MaxHP;
	this->Energy = ft.Energy;
	this->MaxEnergy = ft.MaxEnergy;
	this->MeleeDamage = ft.MeleeDamage;
	this->RangedDamage = ft.RangedDamage;
	this->DamageReduction = ft.DamageReduction;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->name << " was destroyed!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->name
	<< " attacks FR4G-TP " << target << " at range, causing "
	<< this->RangedDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP " << this->name
	<< " attacks FR4G-TP " << target << " in melee, causing "
	<< this->MeleeDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	this->HP -= amount;
	this->HP += this->DamageReduction;
	std::cout << "FR4G-TP " << this->name << " takes "
	<< amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	this->HP += amount;
	std::cout << "FR4G-TP " << this->name << " repairs "
	<< amount << " points of health!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target) {
	std::string attacks[] = {
		"Basic attack", "Power Attack",
		"Magic attack", "Ravage Attack",
		"Bite Attack"
	};
	if (this->HP <= 0) {
		std::cout << "FR4G-TP " << this->name
		<< " is dead!" << std::endl;
		return ;
	}
	if (this->Energy < 25) {
		std::cout << "FR4G-TP " << this->name
		<< " doesnt have enought energy!" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->name
	<< " used a " << attacks[rand() % 5] << " on " << target << std::endl;
	this->Energy -= 25;
	takeDamage(rand() % 100);
	beRepaired(rand() % 100);
	if (this->HP >= this->MaxHP) {
		this->HP = this->MaxHP;
	} else if (this->HP <= 0) {
		this->HP = 0;
		std::cout << "FR4G-TP " << this->name
		<< " killed himself!" << std::endl;
	}
	std::cout << "HP: " << this->HP << ", Energy: " << this->Energy << std::endl;
}
