/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 21:38:58 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("John Doe"), _type("Unknown")
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> I am comiiiing ...\n";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Aaaaaaargh ...\n";
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}
