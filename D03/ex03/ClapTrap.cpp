/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 02:06:08 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(0),
	_name("CL4P-TP"),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	std::cout << this->_name << " - Hahaha, hahaha, je ressuscite." << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string nameSrc) :
	_hitPoints(0),
	_maxHitPoints(0),
	_energyPoints(0),
	_maxEnergyPoints(0),
	_level(0),
	_name(nameSrc),
	_meleeAttackDamage(0),
	_rangedAttackDamage(0),
	_armorDamageReduction(0)
{
	std::cout << this->_name << " - Hahaha, hahaha, je ressuscite." << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << this->_name << " - J'espère que tu ne tiens pas trop à ton espace personnel."
		<< std::endl;
	return;
}

ClapTrap::ClapTrap(int hp, int hpMax, int ep, int epMax, int lvl, std::string name, int melee, int ranged, int armor) :
	_hitPoints(hp),
	_maxHitPoints(hpMax),
	_energyPoints(ep),
	_maxEnergyPoints(epMax),
	_level(lvl),
	_name(name),
	_meleeAttackDamage(melee),
	_rangedAttackDamage(ranged),
	_armorDamageReduction(armor)
{
	std::cout << this->_name << " - Activez la clé, appuyez sur le bouton et voilà."
		<< std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
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
	std::cout << this->_name << " - C'est l'heure de la mise au point." << std::endl;
	return (*this);
}


ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " - Au moins, j'ai encore toute mes dents." << std::endl;
	return;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "| " << this->_name << " reçoit " << amount
		<< " points de dégât ! |" << std::endl;

	this->_hitPoints -= (amount - this->_armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - Deux boulons avec un grand verre d'eau et ça ira mieux."
		<< std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "| " << this->_name << " récupère " << amount
		<< " points de vie ! |" << std::endl;

	this->_hitPoints += amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - De la santé ! Le rouge, c'est quel goût déjà ?"
		<< std::endl;
}


void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "| " << this->_name << " attaque " << target
		<< " au corps à corps, causant " << this->_meleeAttackDamage
		<< " points de dégât ! |" << std::endl;

	std::cout << this->_name << " - Prends ça, et ça... et puis ça aussi !" << std::endl;
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "| " << this->_name << " attaque " << target
		<< " à distance, causant " << this->_rangedAttackDamage
		<< " points de dégât ! |" << std::endl;

	std::cout << this->_name <<  " - C'est juste une histoire de lasers et de gros flingues..." << std::endl;
}

int			ClapTrap::getHp(void)
{
	return (this->_hitPoints);
}

int			ClapTrap::getEp(void)
{
	return (this->_energyPoints);
}
