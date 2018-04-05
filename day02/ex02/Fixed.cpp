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

const int Fixed::fractinalBits = 8;

Fixed::Fixed() : rawBits(0) {
}

Fixed::Fixed(const int& num) {
	rawBits = num * (1 << fractinalBits);
}

Fixed::Fixed(const float& num) {
	rawBits = roundf(num * (1 << fractinalBits));
}

Fixed::Fixed(const Fixed& fixedCopy) {
	rawBits = fixedCopy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& f) {
	// if (&f == this)
	// 	return (*this);
	this->rawBits = f.getRawBits();
	return (*this);
}

Fixed& Fixed::operator+(const Fixed& f) {
	Fixed *temp = new Fixed(*this);
	this->rawBits += f.getRawBits();
	return (*temp);
}

Fixed& Fixed::operator-(const Fixed& f) {
	Fixed *temp = new Fixed(*this);
	this->rawBits -= f.getRawBits();
	return (*temp);
}

Fixed& Fixed::operator*(const Fixed& f) {
	Fixed *temp = new Fixed(this->toFloat() * f.toFloat());
	return (*temp);
}

Fixed& Fixed::operator/(const Fixed& f) {
	Fixed *temp = new Fixed(*this);
	this->rawBits /= f.getRawBits();
	return (*temp);
}

Fixed Fixed::operator++(int) {
	Fixed ret(*this);
	rawBits++;
	return (ret);
}

Fixed Fixed::operator--(int) {
	Fixed ret(*this);
	rawBits--;
	return (ret);
}

Fixed& Fixed::operator++(void) {
	++ rawBits;
	return (*this);
}

Fixed& Fixed::operator--(void) {
	-- rawBits;
	return (*this);
}

bool Fixed::operator < (const Fixed &f) {
	return (this->rawBits < f.getRawBits());
}

bool Fixed::operator > (const Fixed &f) {
	return (this->rawBits > f.getRawBits());
}

bool Fixed::operator == (const Fixed &f) {
	if (this->rawBits == f.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator != (const Fixed &f) {
	if (!(this->rawBits == f.getRawBits()))
		return (true);
	return (false);
}

Fixed&	Fixed::max(Fixed const & f1, Fixed const & f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return((Fixed&)f1);
	else
		return((Fixed&)f2);
}

Fixed&	Fixed::min(Fixed const & f1, Fixed const & f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return((Fixed&)f2);
	else
		return((Fixed&)f1);
}

Fixed::~Fixed() {
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
