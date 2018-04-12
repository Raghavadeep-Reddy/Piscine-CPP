/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 00:23:08 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 00:23:09 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template< typename T >
class Array
{
private:
	T				*array;
	unsigned int	_length;
public:
	Array<T>();
	Array<T>(unsigned int length);
	Array<T>(T value, unsigned int length);
	Array<T>(const Array &cpy);
	virtual ~Array<T>();

	Array<T>&			operator=(const Array &cpy);
	T&			operator[](unsigned int i);
	unsigned int			size() const;
};

template <typename T>
Array<T>::Array() : array(0), _length(0) {

}

template <typename T>
Array<T>::Array(T value, unsigned int length) : _length(length) {
	for (unsigned int i = 0; i < _length; ++i)
		value[i] = value;
}

template <typename T>
Array<T>::Array(unsigned int length) : _length(length) {
	this->array = new T[static_cast<unsigned int>(length)];
}

template <typename T>
Array<T>::~Array() {
	delete[] array;
	array = 0;
	_length = 0;
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i < _length)
		return (array[i]);
	else
		throw std::exception();
}

template <typename T>
Array<T>::Array(const Array &cpy) {
	*this = cpy;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &cpy) {
	this->_length = cpy.size();
	if (array)
		delete[] array;
	array = new T[_length]();
	for (unsigned int i = 0; i < _length; ++i)
		array[i] = cpy.array[i];
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (static_cast<unsigned int>(_length));
}

#endif
