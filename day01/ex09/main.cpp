/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:27:41 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/03 21:27:42 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger l("test");

	l.log("Console", "message");
	l.log("Console", "1 more message");
	l.log("Console", "logToConsole");
	l.log("File", "logToFile");
	l.log("File", "hello world");
	l.log("File", ":)");
	l.log("cat", "nothing will happen");
	l.log("fish", "nothing will happen too");
	return (0);
}
