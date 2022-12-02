/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/01 01:39:40 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void		HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
