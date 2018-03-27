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
	void	set_firstname( std::string );
	void	set_lastname( std::string );
	void	set_nickname( std::string );
	void	set_login( std::string );
	void	set_address( std::string );
	void	set_email( std::string );
	void	set_phone( std::string );
	void	set_birthday( std::string );
	void	set_meal( std::string );
	void	set_underwearcolor( std::string );
	void	set_secret( std::string );

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