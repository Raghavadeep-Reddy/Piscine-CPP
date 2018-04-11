/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:38:26 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 16:38:26 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	Data *bytes = new Data;

	for (int i = 0; i <= 8; ++i)
	{
		bytes->s1 += alphanum[rand() % (sizeof(alphanum) - 1)];
		bytes->s2 += alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	bytes->n = rand() % INT_MAX;

	std::cout << "Before:" << std::endl << std::endl;
	std::cout << bytes->s1 << std::endl;
	std::cout << bytes->n << std::endl;
	std::cout << bytes->s2 << std::endl;

	return (reinterpret_cast<void*>(bytes));
}

Data	*deserialize(void *raw) 
{
	Data *data = reinterpret_cast<Data*>(raw);
	return (data);
}

int		main(void)
{
	srand(time(NULL));
	
	void *ptr;
	Data *data = new Data;

	ptr = serialize();
	data = deserialize(ptr);

	std::cout << std::endl;
	std::cout << "After:" << std::endl << std::endl;
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
}
