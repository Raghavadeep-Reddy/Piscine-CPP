/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:58:05 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/30 17:58:06 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {
private:

	int		m_age;
	int		m_speed;
	int		m_rainbow_power;

public:

	Pony();
	~Pony();

	void	pony_run();
	void	pony_fly();
	void	pony_train();
	void	pony_grow();
};

#endif
