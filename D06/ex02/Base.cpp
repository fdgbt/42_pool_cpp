/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:39:31 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:44:31 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{
	return ;
}

Base::Base(const Base &src)
{
	*this = src;
	return ;
}

Base &Base::operator=(const Base &rhs)
{
	(void)rhs;
	return (*this);
}

Base::~Base(void)
{
	return ;
}
