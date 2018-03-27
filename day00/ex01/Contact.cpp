/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:52:06 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/27 15:52:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

void	Contact::set_firstname( std::string str)
{
	this->firstname = str;
}

void	Contact::set_lastname( std::string str)
{
	this->lastname = str;
}

void	Contact::set_nickname( std::string str)
{
	this->nickname = str;
}

void	Contact::set_login( std::string str)
{
	this->login = str;
}

void	Contact::set_address( std::string str)
{
	this->address = str;
}

void	Contact::set_email( std::string str)
{
	this->email = str;
}

void	Contact::set_phone( std::string str)
{
	this->phone = str;
}

void	Contact::set_birthday( std::string str)
{
	this->birthday = str;
}

void	Contact::set_meal( std::string str)
{
	this->meal = str;
}

void	Contact::set_underwearcolor( std::string str)
{
	this->underwearcolor = str;
}

void	Contact::set_secret( std::string str)
{
	this->secret = str;
}

std::string	Contact::get_firstname()
{
	return (this->firstname);
}

std::string	Contact::get_lastname()
{
	return (this->lastname);
}

std::string	Contact::get_nickname()
{
	return (this->nickname);
}

std::string	Contact::get_login()
{
	return (this->login);
}

std::string	Contact::get_address()
{
	return (this->address);
}

std::string	Contact::get_email()
{
	return (this->email);
}

std::string	Contact::get_phone()
{
	return (this->phone);
}

std::string	Contact::get_birthday()
{
	return (this->birthday);
}

std::string	Contact::get_meal()
{
	return (this->meal);
}

std::string	Contact::get_underwearcolor()
{
	return (this->underwearcolor);
}

std::string	Contact::get_secret()
{
	return (this->secret);
}
