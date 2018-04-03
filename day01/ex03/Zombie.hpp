/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:15:46 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 15:15:46 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string		type;
	std::string		name;
public:

	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce() const;
	void	setRandomName();
	void	setZombieType();
};

#endif
