/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:39:31 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:46:09 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
	return ;
}

A::A(const A &src)
{
	*this = src;
	return ;
}

A &A::operator=(const A &rhs)
{
	(void)rhs;
	return (*this);
}

A::~A(void)
{
	return ;
}
