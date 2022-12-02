/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:39:31 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:46:21 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
	return ;
}

B::B(const B &src)
{
	*this = src;
	return ;
}

B &B::operator=(const B &rhs)
{
	(void)rhs;
	return (*this);
}

B::~B(void)
{
	return ;
}
