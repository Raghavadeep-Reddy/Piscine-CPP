/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:04:56 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 12:04:57 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() { 
	this->HP = 60;
	this->Lvl = 1;
	this->name = "未知の";
	this->MaxHP = 60;
	this->Energy = 120;
	this->MaxEnergy = 120;
	this->MeleeDamage = 60;
	this->RangedDamage = 5;
	this->DamageReduction = 0;
	std::cout << "N1NJ4-TP " << this->name << " で作成された 健康: "
	<< this->HP << ", エネルギー: " << this->Energy << std::endl;
}

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
	this->HP = 60;
	this->Lvl = 1;
	this->name = name;
	this->MaxHP = 60;
	this->Energy = 120;
	this->MaxEnergy = 120;
	this->MeleeDamage = 60;
	this->RangedDamage = 5;
	this->DamageReduction = 0;
	std::cout << "N1NJ4-TP " << this->name << " で作成された 健康: "
	<< this->HP << ", エネルギー: " << this->Energy << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ft, const std::string &name) : ClapTrap(name) {
	*this = ft;
	std::cout << "N1NJ4-TP " << name
	<< " からのコピー " << this->name << " 〜と 健康: "
	<< this->HP << ", エネルギー: " << this->Energy << std::endl;
	this->name = name;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "N1NJ4-TP " << this->name << " 終了する!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& ft) {
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

void	NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "N1NJ4-TP " << this->name
	<< " 攻撃 " << target << " 範囲で、やっている "
	<< this->RangedDamage << " dmg ダメージのポイント！" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "N1NJ4-TP " << this->name
	<< " 攻撃 " << target << " 接近戦では、 "
	<< this->MeleeDamage << " dmg ダメージのポイント！" << std::endl;
}
	
void	NinjaTrap::takeDamage(unsigned int amount) {
	this->HP -= amount;
	this->HP += this->DamageReduction;
	std::cout << "N1NJ4-TP " << this->name << " テイク "
	<< amount << " ダメージのポイント！" << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount) {
	this->HP += amount;
	std::cout << "N1NJ4-TP " << this->name << " 修理 "
	<< amount << " 健康のポイント！" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &ft, const std::string &action) {
	std::string command[] = {"rangedAttack", "meleeAttack"};
	unsigned int damage[2] = {this->RangedDamage, this->MeleeDamage};

	typedef void (NinjaTrap::*Actions)(std::string const &action);
	Actions actions[2] = {&NinjaTrap::rangedAttack, &NinjaTrap::meleeAttack};

	for (int i = 0; i < 2; i++) {
		if (command[i] == action) {
			(this->*(actions[i]))(ft.getName());
			ft.takeDamage(damage[i]);
			break;
		}
	}
}

void	NinjaTrap::ninjaShoebox(ScavTrap &st, const std::string &action) {
	std::string command[] = {"rangedAttack", "meleeAttack"};
	unsigned int damage[2] = {this->RangedDamage, this->MeleeDamage};

	typedef void (NinjaTrap::*Actions)(std::string const &action);
	Actions actions[2] = {&NinjaTrap::rangedAttack, &NinjaTrap::meleeAttack};

	for (int i = 0; i < 2; i++) {
		if (command[i] == action) {
			(this->*(actions[i]))(st.getName());
			st.takeDamage(damage[i]);
			break;
		}
	}
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &nt, const std::string &action) {
	std::string command[] = {"rangedAttack", "meleeAttack"};
	unsigned int damage[2] = {this->RangedDamage, this->MeleeDamage};

	typedef void (NinjaTrap::*Actions)(std::string const &action);
	Actions actions[2] = {&NinjaTrap::rangedAttack, &NinjaTrap::meleeAttack};

	for (int i = 0; i < 2; i++) {
		if (command[i] == action) {
			(this->*(actions[i]))(nt.getName());
			nt.takeDamage(damage[i]);
			break;
		}
	}
}
