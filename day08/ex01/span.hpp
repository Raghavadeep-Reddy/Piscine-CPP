/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:46:36 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/12 19:46:36 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <numeric>

class Span
{
private:
	std::vector<int> _v;
public:
	Span();
	Span(unsigned int N);
	Span(int *num, unsigned int N);
	~Span();
	Span(const Span &cpy);
	Span &operator=(const Span &cpy);
	unsigned		shortestSpan();
	unsigned		longestSpan();
	void			addNumber(unsigned int N);
	void			generateNumbers(unsigned int N);
	int				abs_diff(int const a, int const b);
};

#endif
