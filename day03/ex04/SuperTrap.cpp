/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:50:21 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 12:50:22 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {
	this->HP = FragTrap::getHP();
	this->Lvl = 1;
	this->name = "Unknown";
	this->MaxHP = FragTrap::getMaxHP();
	this->Energy = NinjaTrap::getEnergy();
	this->MaxEnergy = NinjaTrap::getMaxEnergy();
	this->MeleeDamage = NinjaTrap::getMeleeDamage();
	this->RangedDamage = FragTrap::getRangedDamage();
	this->DamageReduction = FragTrap::getDamageReduction();
	std::cout << "SUP3R-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

SuperTrap::SuperTrap(const std::string &name) : FragTrap(), NinjaTrap() {
	this->HP = FragTrap::getHP();
	this->Lvl = 1;
	this->name = name;
	this->MaxHP = FragTrap::getMaxHP();
	this->Energy = NinjaTrap::getEnergy();
	this->MaxEnergy = NinjaTrap::getMaxEnergy();
	this->MeleeDamage = NinjaTrap::getMeleeDamage();
	this->RangedDamage = FragTrap::getRangedDamage();
	this->DamageReduction = FragTrap::getDamageReduction();
	std::cout << "SUP3R-TP " << this->name << " was created with HP: "
	<< this->HP << ", Energy: " << this->Energy << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &ft, const std::string &name) :
	FragTrap(), NinjaTrap()
{
	*this = ft;
	std::cout << "SUP3R-TP " << name
	<< " からのコピー " << this->name << " 〜と 健康: "
	<< this->HP << ", エネルギー: " << this->Energy << std::endl;
	this->name = name;
}

SuperTrap::~SuperTrap() {
	std::cout << "SUP3R-TP " << this->name << " 終了する!" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap& ft) {
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

void	SuperTrap::rangedAttack(std::string const &target) {
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target) {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::takeDamage(unsigned int amount) {
	FragTrap::takeDamage(amount);
}

void	SuperTrap::beRepaired(unsigned int amount) {
	FragTrap::beRepaired(amount);
}
