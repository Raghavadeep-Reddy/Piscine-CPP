/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:44:31 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 20:44:34 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int		m_fixedValue;
	static const int m_fractinalBits;
public:
	Fixed();
	Fixed(const Fixed& fixedCopy);
	Fixed &operator=(const Fixed& f);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
