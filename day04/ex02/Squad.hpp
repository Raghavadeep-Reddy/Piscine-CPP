/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:11:44 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 22:11:47 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				count;
	ISpaceMarine**	container;
public:
	Squad(void);
	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine*	getUnit(int) const;
	virtual int				push(ISpaceMarine*);
};

#endif