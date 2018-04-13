/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 20:32:54 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/13 20:32:54 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	typedef typename std::deque<T>::iterator		iterator;
	typedef typename std::deque<T>::const_iterator	const_iterator;
	MutantStack();
	MutantStack(const MutantStack &cpy);
	MutantStack& operator=(const MutantStack &cpy);
	~MutantStack();

	iterator		begin();
	const_iterator	begin() const;

	iterator		end();
	const_iterator	end() const;
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &cpy) {
	*this = cpy;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &cpy) {
	std::stack<T>::operator = (cpy);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::begin() { return (this->c.begin()); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const { return (this->c.begin()); }

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end() { return (this->c.end()); }

template <typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const { return (this->c.end()); }

#endif