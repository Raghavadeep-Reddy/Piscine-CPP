/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:52:45 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 18:52:46 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>

template<typename T>
void	easyFind(T list, int num)
{
	typename T::iterator it;

	it = std::find(list.begin(), list.end(), num);
	if (it == list.end())
		throw std::runtime_error("No occurences");
	int dist = std::distance(list.begin(), it);
	std::cout << "The first occurence of " << num << " is on the "
	<< dist + 1 << " position in the container" << std::endl;
}

#endif
