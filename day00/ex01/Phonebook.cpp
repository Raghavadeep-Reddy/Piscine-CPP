/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:05:07 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/27 16:05:08 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.h"

Phonebook::Phonebook() {
	number_of_contacts = 0;
}

std::string ft_cut_str(const std::string& str)
{
	std::string temp;

	temp = str;
	if (str.length() < 10)
		return (str);
	temp[9] = '.';
	temp.erase(10);
	return (temp);
}

std::string ft_put_space(const int& length)
{
	std::string temp = "            ";
	int		len = 0;

	len = 12 - length;
	temp.erase(len);
	return (temp);
}

void	Phonebook::search_contact()
{
	int			i = 0;
	std::string fn;
	std::string ln;
	std::string	str;

	if (Phonebook::number_of_contacts == 0)
	{
		std::cout << "No data to show." << std::endl;
		return ;
	}
	std::cout << "Index     | Name      | Last name | Nickname  |" << std::endl;
	for (int j = 0; j < Phonebook::number_of_contacts; j++)
	{
		fn = ft_cut_str(m_contacts[j].get_firstname());
		ln = ft_cut_str(m_contacts[j].get_lastname());
		std::cout << j + 1 << "           ";
		std::cout << fn << ft_put_space(fn.length());
		std::cout << ln << ft_put_space(ln.length());
		std::cout << ft_cut_str(m_contacts[j].get_nickname()) << std::endl;
	}
	std::cout << "Select index:" << std::endl;
	while (1)
	{
		str = get_line();
		if (str.length() != 1)
			std::cout << "Wrong index!" << std::endl;
		else if (str[0] < '0' && str[0] > '8')
			std::cout << "Wrong index!" << std::endl;
		else if (str[0] - 48 <= 0 || str[0] - 48 > Phonebook::number_of_contacts)
			std::cout << "Wrong index!" << std::endl;
		else
		{
			i = str[0] - 48;
			break ;
		}
	}
	std::cout << "Fist name: ";
	std::cout << m_contacts[i - 1].get_firstname() << std::endl;
	std::cout << "Last name: ";
	std::cout << m_contacts[i - 1].get_lastname() << std::endl;
	std::cout << "Nickname: ";
	std::cout << m_contacts[i - 1].get_nickname() << std::endl;
	std::cout << "Login: ";
	std::cout << m_contacts[i - 1].get_login() << std::endl;
	std::cout << "Postal address: ";
	std::cout << m_contacts[i - 1].get_address() << std::endl;
	std::cout << "Email: ";
	std::cout << m_contacts[i - 1].get_email() << std::endl;
	std::cout << "Phone numer: ";
	std::cout << m_contacts[i - 1].get_phone() << std::endl;
	std::cout << "Birthday date: ";
	std::cout << m_contacts[i - 1].get_birthday() << std::endl;
	std::cout << "Favourite meal: ";
	std::cout << m_contacts[i - 1].get_meal() << std::endl;
	std::cout << "Underwear color: ";
	std::cout << m_contacts[i - 1].get_underwearcolor() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << m_contacts[i - 1].get_secret() << std::endl;
}

void	Phonebook::add_contact(int index)
{
	std::cout << "Enter your fist name:" << std::endl;
	m_contacts[index].set_firstname(get_line());
	std::cout << "Enter your last name:" << std::endl;
	m_contacts[index].set_lastname(get_line());
	std::cout << "Enter your nickname:" << std::endl;
	m_contacts[index].set_nickname(get_line());
	std::cout << "Enter your login:" << std::endl;
	m_contacts[index].set_login(get_line());
	std::cout << "Enter your postal address:" << std::endl;
	m_contacts[index].set_address(get_line());
	std::cout << "Enter your email:" << std::endl;
	m_contacts[index].set_email(get_line());
	std::cout << "Enter your phone numer:" << std::endl;
	m_contacts[index].set_phone(get_line());
	std::cout << "Enter your birthday date:" << std::endl;
	m_contacts[index].set_birthday(get_line());
	std::cout << "Enter your favourite meal:" << std::endl;
	m_contacts[index].set_meal(get_line());
	std::cout << "Enter your underwear color:" << std::endl;
	m_contacts[index].set_underwearcolor(get_line());
	std::cout << "Enter your darkest secret:" << std::endl;
	m_contacts[index].set_secret(get_line());
	Phonebook::number_of_contacts++;
}
