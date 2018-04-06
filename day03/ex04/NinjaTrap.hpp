/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:05:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 12:05:09 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap 
{
public:
	NinjaTrap();
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &ft, const std::string &name);
	~NinjaTrap();

	NinjaTrap &operator=(const NinjaTrap& ft);

	void	virtual rangedAttack(std::string const &target);
	void	virtual meleeAttack(std::string const &target);
	void	virtual takeDamage(unsigned int amount);
	void	virtual beRepaired(unsigned int amount);
	void	ninjaShoebox(FragTrap &ft, const std::string &action);
	void	ninjaShoebox(ScavTrap &st, const std::string &action);
	void	ninjaShoebox(NinjaTrap &nt, const std::string &action);
};

#endif
