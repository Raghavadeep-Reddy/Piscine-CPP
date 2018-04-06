/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:07:14 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 11:07:16 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	HP(10), MaxHP(100), Energy(30), MaxEnergy(100),
	Lvl(1), name("Unknown"), MeleeDamage(30), RangedDamage(20),
	DamageReduction(5) {
	std::cout << "CL4P-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	HP(100), MaxHP(100), Energy(100), MaxEnergy(100),
	Lvl(1), name(name), MeleeDamage(30), RangedDamage(20),
	DamageReduction(5) {
	std::cout << "CL4P-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ft, const std::string &name) {
	*this = ft;
	std::cout << "CL4P-TP " << name
	<< " was copied from " << this->name << " with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
	this->name = name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& ft) {
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

int	ClapTrap::getHP() {
	return (this->HP);
}

int	ClapTrap::getMaxHP() {
	return (this->MaxHP);
}

int	ClapTrap::getEnergy() {
	return (this->Energy);
}

int	ClapTrap::getMaxEnergy() {
	return (this->MaxEnergy);
}

int	ClapTrap::getLvl() {
	return (this->Lvl);
}

int	ClapTrap::getMeleeDamage() {
	return (this->MeleeDamage);
}

int	ClapTrap::getRangedDamage() {
	return (this->RangedDamage);
}

int	ClapTrap::getDamageReduction() {
	return (this->DamageReduction);
}

std::string ClapTrap::getName() {
	return (this->name);
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP " << this->name << " was wiped out!" << std::endl;
}
