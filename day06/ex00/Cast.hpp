/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:13:50 by omiroshn          #+#    #+#             */
/*   Updated: 2018/04/11 19:13:52 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>
#include <climits>
#include <cmath>
#include <cstdlib>

class Cast
{
private:

public:
	Cast();
	Cast(const Cast &cpy);
	Cast& operator=(const Cast &cpy);
	~Cast();
	void	dostuff(const double& temp);
};

#endif
