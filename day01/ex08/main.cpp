/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:48:07 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 20:48:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human human;

	human.action("meleeAttack", "tree");
	human.action("rangedAttack", "aim");
	human.action("intimidatingShout", "bird");
	human.action("test", "bird");
	return (0);
}
