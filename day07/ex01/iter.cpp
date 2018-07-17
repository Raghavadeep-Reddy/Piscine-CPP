/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 00:17:03 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 00:17:04 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T* array, const unsigned int& length, void (*f)(T const &ref)) {
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}

template< typename T >
void	print(T var) {
	std::cout << var << std::endl;
}

int	main( void )
{
	int foo[] = { 16, 2, 77, 40, 12071 };
	std::string fuu[] = { "lol", "swag", "yolo" };

	::iter(foo, 5, ::print);
	::iter(fuu, 3, ::print);
	return (0);
}
