/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:39:31 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:46:33 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
	return ;
}

C::C(const C &src)
{
	*this = src;
	return ;
}

C &C::operator=(const C &rhs)
{
	(void)rhs;
	return (*this);
}

C::~C(void)
{
	return ;
}

