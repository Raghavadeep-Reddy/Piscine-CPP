/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 00:01:07 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 00:01:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// std::ostream& operator<< (std::ostream& os, const className& aw) {
// 	os << aw.getN();
// 	return (os);
// }

template<typename T>
void swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T a, T b) {
	return (a <= b ? a : b);
}

template<typename T>
T max(T a, T b) {
	return (a >= b ? a : b);
}

int main( void ) {
	
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	// className aw(2);
	// className aw2(3);
	// ::swap( aw, aw2 );
	// std::cout << "aw = " << aw << ", aw2 = " << aw2 << std::endl;
	// std::cout << "min( aw, aw2 ) = " << ::min( aw, aw2 ) << std::endl;
	// std::cout << "max( aw, aw2 ) = " << ::max( aw, aw2 ) << std::endl;
	return 0;
}
