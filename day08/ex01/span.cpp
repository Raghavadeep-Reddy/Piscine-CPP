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

Span::Span(int N) {
	_v.reserve(static_cast<unsigned int>(N));
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

int	Span::shortestSpan() {
	std::sort(_v.begin(), _v.end());
	int span = _v.at(1) - _v.front();
	return (span);
}

int	Span::longestSpan() {
	std::sort(_v.begin(), _v.end());
	int span = _v.back() - _v.front();
	return (span);
}

void	Span::addNumber(unsigned int N) {
	if (_v.size() < _v.capacity())
		_v.push_back(N);
	else
		throw std::overflow_error("Error : container is full.");
}
