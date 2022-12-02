/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
    *this = src;
    return ;
}

SuperMutant     &SuperMutant::operator= (const SuperMutant &rhs)
{
    this->_type = rhs._type;
    this->_hp = rhs._hp;
    return (*this);
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh..." << std::endl;
    return ;
}

void            SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage >= 0)
    {
        this->_hp -= damage;
        if (this->_hp < 0)
            this->_hp = 0;
    }
}