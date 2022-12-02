/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 15:56:43 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("John Doe"), _ap(0), _weapon(NULL)
{
	return;
}

Character::Character(const std::string &name) :  _name(name), _ap(40), _weapon(NULL)
{
	return;
}

Character::Character(const Character &src)
{
	*this = src;
	return;
}


Character		&Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
	return (*this);
}

Character::~Character(void)
{
	return;
}

void				Character::recoverAP(void)
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	int apCost;

	if (this->_weapon != NULL && enemy != NULL)
	{
		apCost = this->_weapon->getAPCost();
		if (this->_ap >= apCost)
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			this->_ap -= apCost;
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

int					Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon				*Character::getWeapon(void) const
{
	return (this->_weapon);
}

const std::string	Character::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &out, const Character &rhs)
{
	if (rhs.getWeapon() != NULL)
		out << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		out << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}
