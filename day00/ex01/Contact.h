/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:54:57 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/27 15:54:58 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iomanip>
# include <iostream>

class Contact {
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string address;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string meal;
	std::string underwearcolor;
	std::string secret;
public:
	void	set_firstname( const std::string& str );
	void	set_lastname( const std::string& str );
	void	set_nickname( const std::string& str );
	void	set_login( const std::string& str );
	void	set_address( const std::string& str );
	void	set_email( const std::string& str );
	void	set_phone( const std::string& str );
	void	set_birthday( const std::string& str );
	void	set_meal( const std::string& str );
	void	set_underwearcolor( const std::string& str );
	void	set_secret( const std::string& str );

	std::string	get_firstname();
	std::string	get_lastname();
	std::string	get_nickname();
	std::string	get_login();
	std::string	get_address();
	std::string	get_email();
	std::string	get_phone();
	std::string	get_birthday();
	std::string	get_meal();
	std::string	get_underwearcolor();
	std::string	get_secret();
};

#endif