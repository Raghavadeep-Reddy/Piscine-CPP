/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 23:25:41 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 23:25:42 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {

}

Base::Base(const Base &cpy) {
	(void)cpy;
}

Base& Base::operator=(const Base &cpy) {
	(void)cpy;
	return (*this);
}

Base::~Base() {

}
