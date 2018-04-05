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

void	Logger::logToConsole(const std::string &str){
	makeLogEntry(str);
}

void	Logger::logToFile(const std::string &str){
	std::ofstream ofs(this->name, std::ofstream::app);
	if (!ofs.is_open()) {
		std::cout << "Open output file error." << std::endl;
		exit(-1);
	}
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	ofs << buffer << str << std::endl;
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

	std::string command[] = {"Console", "File"};

	typedef void (Logger::*Actions)(std::string const &message);
	Actions actions[2] = {&Logger::logToConsole, &Logger::logToFile};

	for (int i = 1; i >= 0; i--)
		if (command[i] == dest) {
			(this->*(actions[i]))(message);
			break;
		}
}

Logger::Logger(std::string name) {
	this->name = name + ".log";
}

Logger::~Logger() {

}
