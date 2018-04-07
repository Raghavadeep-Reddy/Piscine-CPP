/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:26:03 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/07 17:26:04 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::~PlasmaRifle( void ) {
}

void	PlasmaRifle::attack( void ) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
