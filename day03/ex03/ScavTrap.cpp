/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 23:42:39 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/05 23:42:41 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->HP = 100;
	this->Lvl = 1;
	this->name = "Unknown";
	this->MaxHP = 100;
	this->Energy = 50;
	this->MaxEnergy = 50;
	this->MeleeDamage = 20;
	this->RangedDamage = 15;
	this->DamageReduction = 3;
	std::cout << "SC4V-TP " << this->name << " appeares with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->HP = 100;
	this->Lvl = 1;
	this->name = name;
	this->MaxHP = 100;
	this->Energy = 50;
	this->MaxEnergy = 50;
	this->MeleeDamage = 20;
	this->RangedDamage = 15;
	this->DamageReduction = 3;
	std::cout << "SC4V-TP " << this->name << " appeares with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ft, const std::string &name) : ClapTrap(name) {
	*this = ft;
	std::cout << "SC4V-TP " << name
	<< " copies from " << this->name << " with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
	this->name = name;
}

ScavTrap::~ScavTrap(){
	std::cout << "SC4V-TP " << this->name << " terminates!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& ft) {
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

void	ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name
	<< " attacks " << target << " at range, doing "
	<< this->RangedDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name
	<< " attacks " << target << " in melee, doing "
	<< this->MeleeDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	this->HP -= amount;
	this->HP += this->DamageReduction;
	std::cout << "SC4V-TP " << this->name << " takes "
	<< amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	this->HP += amount;
	std::cout << "SC4V-TP " << this->name << " repairs "
	<< amount << " points of health!" << std::endl;
}

void	ScavTrap::challengeNewcomer() {
	std::string challenges[] = {
		"ICE BUCKET CHALLENGE:\nTo do the ice bucket challenge, you will need a sizeable bucket that is full of some water and ice. Ideally, you would have at least one friend that will turn the contents of the bucket onto your head. Because it will definitely get messy, you should do this challenge outside. Your driveway or backyard are good locations for the ice bucket challenge.",
		"FOOD CHALLENGE:\nThat challenge involves taste testing and guessing what different foods are.",
		"CINNAMON CHALLENGE:\nTo successfully complete this challenge, you have to eat a tablespoon of cinnamon in a minute or less without drinking any liquids.",
		"RAW ONION CHALLENGE:\nChallenge yourself and see if you can manage to eat an entire raw onion.",
		"THE WASABI CHALLENGE:\nTry to see if you can eat a teaspoon of wasabi in less than a minute.",
		"LEMON CHALLENGE:\nThis is another extremely sour challenge. To do this, you will want to cut a bunch of lemons into wedges.",
		"CHUBBY BUNNY CHALLENGE:\nCompete with your friends to see how many marshmallows you can fit into your mouth. Each time you put a marshmallow into your mouth, you have to say chubby bunny."
	};
	std::cout << challenges[rand() % 7] << std::endl;
}
