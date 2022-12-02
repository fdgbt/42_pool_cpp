/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 18:56:09 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) :
	ClapTrap(100, 100, 120, 120, 1, "Super Trap", 60, 20, 5),
	FragTrap("Super Trap"),
	NinjaTrap("Super Trap")
{
	std::cout << this->_name << " - C'est un oiseau ? C'est un avion ? Non c'est SuperTrap !"
		<< std::endl;
	return;
}

SuperTrap::SuperTrap(std::string nameSrc) :
	ClapTrap(100, 100, 120, 120, 1, nameSrc, 60, 20, 5),
	FragTrap(nameSrc),
	NinjaTrap(nameSrc)
{
	std::cout << this->_name << " - C'est un oiseau ? C'est un avion ? Non c'est SuperTrap !"
		<< std::endl;
	return;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	*this = src;
	std::cout << this->_name << " - La lune, c'est pas assez." << std::endl;
	return;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &rhs)
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
	std::cout << this->_name << " - Préparez-vous." << std::endl;
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << this->_name << " - DES ESCALIERS ?! NOOOOOOOOOOOOOOOOOOOOOON !"
		<< std::endl;
	return;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
	std::cout << this->_name << " - Tchit, boum."
		<< std::endl;
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
	std::cout << this->_name << " - Brisons un peu la glace."
		<< std::endl;
}
