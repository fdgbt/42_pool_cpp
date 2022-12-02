/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknown"), _xp(0)
{
	return;
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
	return;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
	return;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	this->_xp = rhs._xp;
	return (*this);
}

AMateria::~AMateria(void)
{
	return;
}

std::string const 		&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int 			AMateria::getXP(void) const
{
	return (this->_xp);
}

void					AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}