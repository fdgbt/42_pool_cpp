/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 20:12:34 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> I am comiiiing ...\n";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> I am doooown ...\n";
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ...\n";
}
