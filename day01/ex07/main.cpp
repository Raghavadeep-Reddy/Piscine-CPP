/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:02:22 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 19:02:24 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string name, std::string s1, std::string s2)
{
	size_t pos = 0;
	std::string str;

	std::ifstream ifs(name);
	if (!ifs.is_open())
	{
		ifs.close();
		std::cout << "Open input file error." << std::endl;
  		exit(-1);
	}
	else if (!s1.length() || !s2.length()) {
		ifs.close();
		std::cout << "Input parametrs error." << std::endl;
		exit(-1);
	}
	else if (s1 == s2) {
		ifs.close();
		std::cout << "You cant replace first word with the equal one." << std::endl;
		exit(-1);
	}
	std::ofstream ofs(name + ".replace");
	if (!ofs.is_open())
	{
		ifs.close();
		std::cout << "Open output file error." << std::endl;
		exit(-1);
	}
	while (std::getline(ifs, str))
	{
		while ((pos = str.find(s1)) != std::string::npos)
			str.replace(pos, s1.length(), s2);
		ofs << str << std::endl;
	}
	ifs.close();
	ofs.close();
}

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Usage: " << argv[0] << " file s1 s2" << std::endl;
		return (0);
	}
	replace(argv[1], argv[2], argv[3]);
	return (0);
}
