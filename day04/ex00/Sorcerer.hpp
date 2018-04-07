/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:36:01 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 19:36:02 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer (void);
	std::string				name;
	std::string				title;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & cpy);
	~Sorcerer();
	
	std::string		getName(void) const;
	std::string		getTitle(void) const;
	
	void			polymorph(Victim const & v) const;
	Sorcerer&		operator=(Sorcerer const & arg );
};

std::ostream &operator<<( std::ostream &flux, const Sorcerer &arg );

#endif