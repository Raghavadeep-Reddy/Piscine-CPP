/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:26:32 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 17:26:33 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int				hp ;
		std::string		type;

		Enemy	( void );

	public:
		Enemy( int hp, std::string const & type );
		Enemy	( Enemy const & cpy );
		virtual ~Enemy( void );

		std::string		getType() const;
		int				getHP() const;
		virtual void	takeDamage( int );
		Enemy&			operator=( Enemy const & arg );
};

std::ostream &operator<<(std::ostream& flux, const Enemy& arg);

#endif