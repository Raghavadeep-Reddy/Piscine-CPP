/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 19:36:13 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/06 19:36:14 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
protected:
	std::string	name;
	Victim();
public:
	Victim( std::string name );
	Victim( Victim const & cpy );
	~Victim();

	std::string		getName( void ) const;
	void			setName( std::string const arg );
	
	Victim&			operator=(Victim const & arg);
	virtual void	getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &flux, const Victim &arg);

#endif