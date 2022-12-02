/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 15:56:43 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("Unknown"), _title("Dirty")
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(const std::string nameSrc, const std::string titleSrc) :
	_name(nameSrc),
	_title(titleSrc)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead."
		<< " Consequences will never be the same!" << std::endl;
	return;
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies!" << std::endl;
	return (out);
}
