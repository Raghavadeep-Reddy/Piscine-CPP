/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:12:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 22:12:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR
#define ASSAULTTERMINATOR

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	virtual ~AssaultTerminator(void);
	virtual ISpaceMarine* clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;

	AssaultTerminator& operator=(const AssaultTerminator &arg);
};

#endif
