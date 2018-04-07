/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 23:17:17 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 23:17:18 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) : count(0), container(0) {
}

Squad::~Squad( void ) {
	int			i = 0;

	while (i < count)
		delete container[i++];
	count = 0;
}

int				Squad::getCount( void ) const {
	return (count);
}

int				Squad::push( ISpaceMarine* marine ) {
	ISpaceMarine**		containing = new ISpaceMarine*[count + 1];
	int					len = 0;

	while (len < count) {
		containing[len] = container[len];
		++len;
	}
	if (container)
		delete [] container;
	containing[len] = marine;
	container = containing;
	return (count++);
}

ISpaceMarine*	Squad::getUnit( int arg ) const {
	if (arg < 0 || arg >= count)
		return (0);
	return (container[arg]);
}
