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

class Span
{
private:
	std::vector<unsigned int> _v;
public:
	Span();
	Span(int N);
	~Span();
	int			shortestSpan();
	int			longestSpan();
	void			addNumber(unsigned int N);
	void	generateNumbers(unsigned int N);
};

#endif
