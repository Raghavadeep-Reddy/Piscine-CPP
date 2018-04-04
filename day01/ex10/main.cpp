/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:01:19 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/04 15:01:20 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <sys/stat.h>

void	printFile(std::string name, char *namestat)
{
	std::stringstream	buff_s;
	std::string			str;
	struct stat			buff;

	if (stat(namestat, &buff) == -1) {
		std::cout << "cato9tails: " << name
		<< ": No such file or directory" << std::endl;
		exit(-1);
	}
	switch (buff.st_mode & S_IFMT)
	{
		case S_IFBLK: {
			std::cout << "cato9tails: " << name
			<< ": Is a block device" << std::endl;
			exit(-1);
		}
		case S_IFCHR: {
			std::cout << "cato9tails: " << name
			<< ": Is a character device" << std::endl;
			exit(-1);
		}
		case S_IFDIR: {
			std::cout << "cato9tails: " << name
			<< ": Is directory" << std::endl;
			exit(-1);
		}
		case S_IFLNK: {
			std::cout << "cato9tails: " << name
			<< ": Is a symlink" << std::endl;
			exit(-1);
		}
		default: break;
	}
	std::ifstream ifs(name);
	if (ifs.fail()) {
		std::cout << "cato9tails: " << name
		<< ": Permission denied" << std::endl;
		exit(-1);
	}
	if (!ifs.is_open()) {
		ifs.close();
		std::cout << "cato9tails: " << name
		<< ": No such file or directory" << std::endl;
		exit(-1);
	}
	buff_s << ifs.rdbuf();
	std::cout << buff_s.str();
	ifs.close();
}

int main(int argc, char **argv)
{
	std::string str;

	if (argc == 1) {
		std::cout << std::cin.rdbuf() << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if ((std::string)argv[i] == "-") {
				std::cout << std::cin.rdbuf() << std::endl;
				continue ;
			}
			printFile(argv[i], argv[i]);
		}
	}
	return (0);
}
