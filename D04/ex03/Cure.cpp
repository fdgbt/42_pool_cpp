/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	*this = src;
	return;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return (*this);
}

Cure::~Cure(void)
{
	return;
}

AMateria		*Cure::clone(void) const
{
	return (new Cure());
}

void			Cure::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
