/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:11:56 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 22:11:57 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE
#define TACTICALMARINE

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	virtual ~TacticalMarine(void);
	virtual ISpaceMarine* clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;

	TacticalMarine&		operator=(const TacticalMarine &arg);
};

#endif
