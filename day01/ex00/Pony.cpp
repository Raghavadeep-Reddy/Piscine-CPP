/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:57:58 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/30 17:57:59 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() : m_age(0), m_speed(10), m_rainbow_power(10) {
	std::cout << "Pony was born :)" << std::endl;
	std::cout << "Age: " << this->m_age << std::endl;
	std::cout << "Speed: " << this->m_speed << std::endl;
	std::cout << "RainbowPower: " << this->m_rainbow_power << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony died :(" << std::endl;
	std::cout << "Age: " << this->m_age << std::endl;
	std::cout << "Speed: " << this->m_speed << std::endl;
	std::cout << "RainbowPower: " << this->m_rainbow_power << std::endl;
}

void	Pony::pony_run() {
	this->m_speed++;
	std::cout << "Pony is running" << std::endl;
}

void	Pony::pony_fly() {
	this->m_rainbow_power++;
	std::cout << "Pony is flying" << std::endl;
}

void	Pony::pony_train() {
	this->m_age++;
	this->m_speed++;
	this->m_rainbow_power++;
	std::cout << "Pony is training" << std::endl;
}

void	Pony::pony_grow() {
	this->m_age++;
	std::cout << "Pony is growing" << std::endl;
}
