/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : _type("Unknown"), _hp(0)
{
    return ;
}

Enemy::Enemy(int hp, const std::string &type) : _type(type), _hp(hp)
{
    return ;
}

Enemy::Enemy(const Enemy &src)
{
    *this = src;
    return ;
}

Enemy::~Enemy(void)
{
    return ;
}

Enemy				&Enemy::operator=(const Enemy &rhs)
{
	this->_type = rhs._type;
	this->_hp = rhs._hp;
    return (*this);
}

int					Enemy::getHP(void) const
{
    return (this->_hp);
}

const std::string	Enemy::getType(void) const
{
    return (this->_type);
}

void				Enemy::takeDamage(int damage)
{
    if (damage >= 0)
    {
	    this->_hp -= damage;
        if (this->_hp < 0)
		    this->_hp = 0;
    }
}