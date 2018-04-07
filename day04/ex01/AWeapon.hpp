/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:25:55 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 17:25:56 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		std::string		name;
		int				APCost;
		int				damage;
		std::string		outputAttack;

		AWeapon	( void );

	public:
		AWeapon	( std::string const & name, int apcost, int damage );
		AWeapon	( AWeapon const & cpy );
		virtual ~AWeapon( void );

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual			void attack() const = 0;
		AWeapon&		operator=( AWeapon const & arg );
};

std::ostream &operator<<(std::ostream& flux, const AWeapon& arg);

#endif
