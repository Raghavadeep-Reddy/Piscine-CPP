/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 11:08:07 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 11:08:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	int	HP;
	int MaxHP;
	int Energy;
	int MaxEnergy;
	int Lvl;
	std::string name;
	int MeleeDamage;
	int RangedDamage;
	int DamageReduction;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &ft, const std::string &name);
	~ClapTrap();

	int			getHP();
	int			getMaxHP();
	int			getEnergy();
	int			getMaxEnergy();
	int			getLvl();
	int			getMeleeDamage();
	int			getRangedDamage();
	int			getDamageReduction();
	std::string getName();
	ClapTrap &operator=(const ClapTrap& ft);
};

#endif
