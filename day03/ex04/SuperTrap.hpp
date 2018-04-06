/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:50:27 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 12:50:28 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &ft, const std::string &name);
	~SuperTrap();

	SuperTrap &operator=(const SuperTrap& ft);
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif