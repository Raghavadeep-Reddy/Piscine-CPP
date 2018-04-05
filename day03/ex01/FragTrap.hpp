/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 21:26:10 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/05 21:26:10 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
private:
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
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &ft, const std::string &name);
	~FragTrap();

	FragTrap &operator=(const FragTrap& ft);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);
};

#endif

