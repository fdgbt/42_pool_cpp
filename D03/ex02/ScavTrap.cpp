/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 02:05:22 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static const std::string	challenges[5] = {"Gagner le Corewar Championship.", "Acheter une TIG à son voisin de droite ou de gauche.", "Faire le tour de l'E3 en trottinette électrique.", "Ramener une bouteille de vin, minimum 4 ans d'âge, de la cantina.","Faire exploser simultanément 3 pétards dans le bocal."};

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, "Unknown", 20, 15, 3)
{
	std::cout << this->_name << " - Je me présente: je suis un robot multi-fonction, SC4V-TP, \
mais mes amis m'appellent ScavTrap... Enfin, m'appelleraient, si j'en avais." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string nameSrc) : ClapTrap(100, 100, 50, 50, 1, nameSrc, 20, 15, 3)
{
	std::cout << this->_name << " - Je me présente: je suis un robot multi-fonction, SC4V-TP, \
mais mes amis m'appellent ScavTrap... Enfin, m'appelleraient, si j'en avais." << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << this->_name << " - Je ferais n'importe quoi pour une femme armée."
		<< std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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
	std::cout << this->_name << " - Je suis le derrière d'une pandocorne." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " - Ne vous en faites pas ! Je reviendrais toujours à la vie... \
Sauf si je meurs dans une cinématique." << std::endl;
	return;
}

void		ScavTrap::challengeNewcomer(std::string const &target)
{
	int		challNumber;

	srand(time(NULL));
	challNumber = rand() % 5;

	std::cout << this->_name << " - Saloperie de porte verrouillée ! Ohhh... \
je sais ! " << target << ", remporte ce challenge : " << challenges[challNumber] << std::endl;
}

