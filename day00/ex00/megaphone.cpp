/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:35:06 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/26 20:35:07 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*to_upper(char *str)
{
	int i = -1;
	char *temp;

	temp = (char*)str;
	while (temp[++i])
	{
		if (temp[i] >= 97 && temp[i] <= 122)
			temp[i] -= 32;
	}
	return (temp);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argc != 1)
		{
			std::cout << to_upper(argv[++i]);
			argc--;
		}
		std::cout << "\n";
	}	
	return (0);
}
