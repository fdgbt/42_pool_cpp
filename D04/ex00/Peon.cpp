/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 21:12:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("Celestin")
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(const std::string nameSrc) : Victim(nameSrc)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(const Peon &src)
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon	&Peon::operator=(const Peon &rhs)
{
	this->_name = rhs._name;
	return (*this);
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

void		Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

