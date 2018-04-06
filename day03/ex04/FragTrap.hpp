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

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &ft, const std::string &name);
	~FragTrap();

	FragTrap &operator=(const FragTrap& ft);

	void	virtual rangedAttack(std::string const &target);
	void	virtual meleeAttack(std::string const &target);
	void	virtual takeDamage(unsigned int amount);
	void	virtual beRepaired(unsigned int amount);
	
	void	vaulthunter_dot_exe(std::string const &target);
};

#endif

