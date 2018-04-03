/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:48:00 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 20:48:01 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target){
	std::cout << "Ataking with meleeAttack a " << target << std::endl;
}
void	Human::rangedAttack(std::string const &target){
	std::cout << "Ataking with rangedAttack a " << target << std::endl;
}
void	Human::intimidatingShout(std::string const &target){
	std::cout << "Shouting with intimidatingShout a " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	typedef void (Human::*Actions)(std::string const & target);
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 2; i >= 0; i--)
		if (actionsStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break;
		}
}
