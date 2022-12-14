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

#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name("none"), _apcost(0), _damage(0)
{
    return ;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
    return ;
}

AWeapon::AWeapon(const AWeapon &src)
{
    *this = src;
    return ;
}

AWeapon::~AWeapon(void)
{
    return ;
}

AWeapon	&AWeapon::operator=(const AWeapon &rhs)
{
    this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
    return (*this);
}

int					AWeapon::getAPCost(void) const
{
    return (this->_apcost);
}

int					AWeapon::getDamage(void) const
{
    return (this->_damage);
}

const std::string	AWeapon::getName() const
{
    return (this->_name);
}