/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	*this = src;
	return;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return (*this);
}

Ice::~Ice(void)
{
	return;
}

AMateria		*Ice::clone(void) const
{
	return (new Ice());
}

void			Ice::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
