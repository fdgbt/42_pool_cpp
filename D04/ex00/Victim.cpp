/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("John Doe")
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;
	return;
}

Victim::Victim(const std::string nameSrc) : _name(nameSrc)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;
	return;
}

Victim::Victim(const Victim &src)
{
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;
	return;
}

Victim	&Victim::operator=(const Victim &rhs)
{
	std::cout << "The victim " << this->_name << " run away! The new victim is "
		<< rhs._name << '.' << std::endl;
	this->_name = rhs._name;
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return;
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::string		Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, const Victim &rhs)
{
	out << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return (out);
}
