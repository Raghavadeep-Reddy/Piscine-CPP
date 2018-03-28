/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:05:11 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/27 16:05:12 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.h"

std::string		ft_cut_str(const std::string& str);
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