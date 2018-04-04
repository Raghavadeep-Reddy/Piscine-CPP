/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:58:21 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/30 17:58:23 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *pony = new Pony();

	pony->pony_run();
	pony->pony_train();
	pony->pony_grow();
	delete pony;
}

void	ponyOnTheStack()
{
	Pony pony;

	pony.pony_fly();
	pony.pony_train();
	pony.pony_grow();
}

int	main(void)
{
	ponyOnTheHeap();
	std::cout << "==================" << std::endl;
	ponyOnTheStack();
	return (0);
}
