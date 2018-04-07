/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:26:16 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 17:26:17 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist( void ) {
}

void	PowerFist::attack( void ) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}