/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:13:10 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 20:13:11 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int		m_fixedValue;
	static const int m_fractinalBits;
public:
	Fixed() : m_fixedValue (0) {
		std::cout << "Default constructor called" << std::endl;
	}

	Fixed(const Fixed& fixedCopy) {
		std::cout << "Copy constructor called" << std::endl;
		operator=(fixedCopy);
	}

	Fixed &operator=(const Fixed& f) {
		std::cout << "Assignation operator called" << std::endl;
		this->m_fixedValue = f.getRawBits();
		return (*this);
	}

	~Fixed() {
		std::cout << "Destructor called" << std::endl;
	}
	
	int getRawBits(void) const {
		std::cout << "getRawBits member function called" << std::endl;
		return (this->m_fixedValue);
	}

	void setRawBits(int const raw) {
		std::cout << "setRawBits member function called" << std::endl;
		this->m_fixedValue = raw;
	}
};

const int Fixed::m_fractinalBits = 8;

int main (void) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
