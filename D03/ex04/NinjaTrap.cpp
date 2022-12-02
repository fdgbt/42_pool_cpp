/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 17:03:44 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, "Trap Lee", 60, 5, 0)
{
	std::cout << this->_name << " - Je m'appelle Trap, Ninja Trap, zéro zéro Trap."
		<< std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string nameSrc) : ClapTrap(60, 60, 120, 120, 1, nameSrc, 60, 5, 0)
{
	std::cout << this->_name << " - Je m'appelle Trap, Ninja Trap, zéro zéro Trap."
		<< std::endl;
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	*this = src;
	std::cout << this->_name << " - Vous avez vu ça ?" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &rhs)
{
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << this->_name << " - De mon temps..." << std::endl;
	return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_name << " - Au shaker, pas à la cuillère."
		<< std::endl;
	return;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	target.takeDamage(100);
	std::cout << this->_name << " - Je suis le feu, je suis la mort." << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	target.takeDamage(this->_rangedAttackDamage);
	std::cout << this->_name << " - En plein dans le mille, héhé." << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	target.takeDamage(this->_meleeAttackDamage);
	std::cout << this->_name << " - Les dégâts rapprochés, y'a que ça de vrai." << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	target.beRepaired(this->_energyPoints);
	std::cout << this->_name << " - Circuit de refroidissement actif." << std::endl;
}
