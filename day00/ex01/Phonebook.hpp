/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:05:11 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/27 16:05:12 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

std::string ft_put_space(const int& length);
std::string		get_line();
int				ft_strlen(const std::string& str);

class Phonebook {
private:
	Contact m_contacts[8];
	int		number_of_contacts;
public:
			Phonebook();
	void	add_contact(int index);
	void	search_contact();
};

#endif
