/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/05 21:49:56 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static const std::string	challenges[5] = {"Gagner le Corewar Championship.", "Acheter une TIG à son voisin de droite ou de gauche.", "Faire le tour de l'E3 en trottinette électrique.", "Ramener une bouteille de vin, minimum 4 ans d'âge, de la cantina.","Faire exploser simultanément 3 pétards dans le bocal."};

ScavTrap::ScavTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name("Unknown"),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << this->_name << " - Je me présente: je suis un robot multi-fonction, SC4V-TP, \
mais mes amis m'appellent ScavTrap... Enfin, m'appelleraient, si j'en avais." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string nameSrc) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name(nameSrc),
	_meleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3)
{
	std::cout << this->_name << " - Je me présente: je suis un robot multi-fonction, SC4V-TP, \
mais mes amis m'appellent ScavTrap... Enfin, m'appelleraient, si j'en avais." << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << this->_name << " - Je ferais n'importe quoi pour une femme armée."
		<< std::endl;
	*this = src;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << this->_name << " - Je suis le derrière d'une pandocorne." << std::endl;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " - Ne vous en faites pas ! Je reviendrais toujours à la vie... \
Sauf si je meurs dans une cinématique." << std::endl;
	return;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "[SC4V-TP] | " << this->_name << " reçoit " << amount
		<< " points de dégât !" << std::endl;

	this->_hitPoints -= (amount - this->_armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - Ça plait aux gonzesses les costauds."
		<< std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "[SC4V-TP] | " << this->_name << " récupère " << amount
		<< " points de vie !" << std::endl;

	this->_hitPoints += amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - Ah, c'est beaucoup mieux."
		<< std::endl;
}


void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "[SC4V-TP] | " << this->_name << " attaque " << target
		<< " au corps à corps, causant " << this->_meleeAttackDamage
		<< " points de dégât !" << std::endl;

	std::cout << this->_name << " - Ah Ya !" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "[SC4V-TP] | " << this->_name << " attaque " << target
		<< " à distance, causant " << this->_rangedAttackDamage
		<< " points de dégât !" << std::endl;

	std::cout << this->_name <<  " - Et pan !" << std::endl;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	int		challNumber;

	srand(time(NULL));
	challNumber = rand() % 5;

	std::cout << this->_name << " - Saloperie de porte verrouillée ! Ohhh... \
je sais ! " << target << ", remporte ce challenge : " << challenges[challNumber] << std::endl;
}

int			ScavTrap::getHp(void)
{
	return (this->_hitPoints);
}

int			ScavTrap::getEp(void)
{
	return (this->_energyPoints);
}
