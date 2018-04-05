/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:44:26 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 20:44:27 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int &num) {
	std::cout << "Int constructor called" << std::endl;
	rawBits = num * (1 << fractinalBits);
}

Fixed::Fixed(const float &num) {
	std::cout << "Float constructor called" << std::endl;
	rawBits = roundf(num * (1 << fractinalBits));
}

Fixed::Fixed(const Fixed& fixedCopy) {
	std::cout << "Copy constructor called" << std::endl;
	operator=(fixedCopy);
}

Fixed& Fixed::operator=(const Fixed& f) {
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = f.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw) {
	this->rawBits = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->rawBits / (1 << this->fractinalBits));
}

int Fixed::toInt(void) const {
	return (this->rawBits / (1 << this->fractinalBits));
}

std::ostream& operator<< (std::ostream& os, const Fixed& f) {
		os << f.toFloat();
		return (os);
}

const int Fixed::fractinalBits = 8;
