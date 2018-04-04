/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:27:34 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 21:27:35 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

class Logger
{
private:
	std::string name;

	void	logToConsole(std::string str);
	void	logToFile(std::string str);
	void	makeLogEntry(std::string msg);
public:
	Logger(std::string name);
	~Logger();

	void log(std::string const &dest, std::string const &message);
};

#endif
