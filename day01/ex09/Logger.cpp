/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:27:27 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 21:27:28 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

void	Logger::logToConsole(std::string str) {
	makeLogEntry(str);
}

void	Logger::logToFile(std::string str) {
	std::ofstream ofs(this->name);
	if (!ofs.is_open()) {
		std::cout << "Open output file error." << std::endl;
		exit(-1);
	}
	ofs << str << std::endl;
	ofs.close();
}

void	Logger::makeLogEntry(std::string msg) {
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer << msg << std::endl;
}

void	Logger::log(std::string const &dest, std::string const &message) {
	if (dest == "logToFile")
		logToFile(message);
	else if (dest == "logToConsole")
		logToConsole(message);
}

Logger::Logger(std::string name) {
	this->name = name + ".log";
}

Logger::~Logger() {

}
