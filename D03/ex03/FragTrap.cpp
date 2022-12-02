/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 16:59:38 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static const int			spAttackDamage[5] = {5, 10, 20, 40, 80};

static const std::string	spNames[5] = {"Canard en plastique", "Mécromagicien",
	"Défunrailleur", "Enfer laser","Monocycle en jambonneau"};

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, "John Doe", 30, 20, 5)
{
	std::cout << this->_name << " - Séquence d'initiation terminée. Bonjour, je suis \
votre nouveau robot multifonction." << std::endl;
	return;
}

FragTrap::FragTrap(std::string nameSrc) : ClapTrap(100, 100, 100, 100, 1, nameSrc, 30, 20, 5)
{
	std::cout << nameSrc << " - Séquence d'initiation terminée. Bonjour, je suis \
votre nouveau robot multifonction." << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << this->_name << " - Agent doublé ! Digiclone créé." << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
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
	std::cout << this->_name << " - Super Brutal ! Métamorphose effectuée." << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " - Je suis mort comme j'ai vécu, en me vidant par tous les trous."
		<< std::endl;
	return;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		attackNumber;

	srand(time(NULL));
	attackNumber = rand() % 5;

	this->_spAttack[0] = &FragTrap::rubberDucky;
	this->_spAttack[1] = &FragTrap::mechromagician;
	this->_spAttack[2] = &FragTrap::funzerker;
	this->_spAttack[3] = &FragTrap::laserInferno;
	this->_spAttack[4] = &FragTrap::meatUnicycle;

	if (this->_energyPoints >= 25)
	{
		std::cout << "[FR4G-TP] | " << this->_name << " utilise l'attaque spéciale "
			<< spNames[attackNumber] << " sur " << target << ", causant "
			<< spAttackDamage[attackNumber] << " points de dégât !" << std::endl;

		this->_energyPoints -= 25;
		(this->*(_spAttack[attackNumber]))(target);
		std::cout << this->_name << " - La chance, c'est encore mieux que le talent."
			<< std::endl;
	}
	else
	{
		std::cout << this->_name << " - Dans ces moments là il m'arrive de me poser des \
questions sur le sens de la vie et quelque chose me distrait et... hé c'est quoi ça... \
cool !" << std::endl;
	}
}

void		FragTrap::rubberDucky(std::string const &target)
{
	std::cout << target << " rigole.";
	std::cout << this->_name << " - Généralement quand je marche dans la merde, \
je frotte un peu et ça part, mais toi, toi tu t'accroches vraiment bien."
	<< std::endl;
}

void		FragTrap::mechromagician(std::string const &target)
{
	std::cout << target << " se contracte de douleurs.";
	std::cout << this->_name << " - Un café noir, bien noir, comme mon âme."
		<< std::endl;
}

void		FragTrap::funzerker(std::string const &target)
{
	std::cout << target << " tombe à la renverse.";
	std::cout << this->_name << " - Je suis une tempête de mort et de balles."
		<< std::endl;
}

void		FragTrap::laserInferno(std::string const &target)
{
	std::cout << target << " est dans le mal.";
	std::cout << this->_name << " - Je vais être franc, ça va picoter un peu."
		<< std::endl;
}

void		FragTrap::meatUnicycle(std::string const &target)
{
	std::cout << target << " a perdu connaissance.";
	std::cout << this->_name << " - Qu'as tu fait, sbire ?! C'était des êtres humains, \
avec des familles et... Non, c'est pour rire, allez, ON S'EN FOUT !" << std::endl;
}

