/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:10:09 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 20:10:10 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::m_fractinalBits = 8;

Fixed::Fixed() : m_fixedValue (0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixedCopy) {
	std::cout << "Copy constructor called" << std::endl;
	operator=(fixedCopy);
}

Fixed &Fixed::operator=(const Fixed& f) {
	std::cout << "Assignation operator called" << std::endl;
	this->m_fixedValue = f.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_fixedValue);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->m_fixedValue = raw;
}
