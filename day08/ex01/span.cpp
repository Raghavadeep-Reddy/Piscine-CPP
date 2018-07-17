/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:46:27 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 19:46:28 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {
	_v.reserve(0);
}

Span::Span(unsigned int N) {
	_v.reserve(N);
}

Span::Span(int *num, unsigned int N) {
	_v.reserve(N);

	for (unsigned int i = 0; i < N; ++i)
		_v.push_back(num[i]);
}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span &Span::operator=(const Span &cpy) {
	this->_v = cpy._v;
	return (*this);
}

Span::~Span() {

}

void	displayInt(int i) {
	std::cout << i << std::endl;
}

void	Span::generateNumbers(unsigned int N) {
	for (unsigned int i = 0; i < N; i++){
        int b = rand() % INT_MAX;
        _v.push_back(b);
    }
}

int		Span::abs_diff(int const a, int const b) {
	int		result;

	result = b - a;
	return ( result < 0 ? -result : result );
}

unsigned	Span::shortestSpan() {
	if (_v.size() < 2)
		throw std::exception();

	std::vector<int> temp = _v;
	std::sort(temp.begin(), temp.end());
	int min = abs_diff(temp[0], temp[1]);
	for (unsigned int i = 1; i < temp.size(); i++)
	{
		if (abs_diff(temp[i - 1], temp[i]) < min)
			min = abs_diff(temp[i - 1], temp[i]);
	}
	return (min);
}

unsigned	Span::longestSpan() {
	if (_v.size() < 2)
		throw std::exception();
	std::sort(_v.begin(), _v.end());
	return (static_cast<unsigned>(*std::max_element(_v.begin(), _v.end()) -
		*std::min_element(_v.begin(), _v.end())));
}

void	Span::addNumber(unsigned int N) {
	if (_v.size() < _v.capacity())
		_v.push_back(N);
	else
		throw std::overflow_error("Error : container is full.");
}
