/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 02:13:40 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static const int			spAttackDamage[5] = {5, 10, 20, 40, 80};

static const std::string	spNames[5] = {"Canard en plastique", "Mécromagicien",
	"Défunrailleur", "Enfer laser","Monocycle en jambonneau"};

FragTrap::FragTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name("Unknown"),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << this->_name << " - Séquence d'initiation terminée. Bonjour, je suis \
votre nouveau robot multifonction." << std::endl;
	return;
}

FragTrap::FragTrap(std::string nameSrc) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name(nameSrc),
	_meleeAttackDamage(30),
	_rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << nameSrc << " - Séquence d'initiation terminée. Bonjour, je suis \
votre nouveau robot multifonction." << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << this->_name << " - Agent doublé ! Digiclone créé à partir de "
		<< src._name << "." << std::endl;
	*this = src;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << this->_name << " - Super Brutal ! Métamorphose effectuée à partir de "
		<< rhs._name << '.' << std::endl;
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

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " - Je suis mort comme j'ai vécu, en me vidant par tous les trous."
		<< std::endl;
	return;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "[FR4G-TP] | " << this->_name << " reçoit " << amount
		<< " points de dégât !" << std::endl;

	this->_hitPoints -= (amount - this->_armorDamageReduction);
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - Deux boulons avec un grand verre d'eau et ça ira mieux."
		<< std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "[FR4G-TP] | " << this->_name << " récupère " << amount
		<< " points de vie !" << std::endl;

	this->_hitPoints += amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	else if (_hitPoints > this->_maxHitPoints)
		_hitPoints = 100;

	std::cout << this->_name << " - De la santé ! Le rouge, c'est quel goût déjà ?"
		<< std::endl;
}


void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "[FR4G-TP] | " << this->_name << " attaque " << target
		<< " au corps à corps, causant " << this->_meleeAttackDamage
		<< " points de dégât !" << std::endl;

	std::cout << this->_name << " - Prends ça, et ça... et puis ça aussi !" << std::endl;
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "[FR4G-TP] | " << this->_name << " attaque " << target
		<< " à distance, causant " << this->_rangedAttackDamage
		<< " points de dégât !" << std::endl;

	std::cout << this->_name <<  " - C'est juste une histoire de lasers et de gros flingues..." << std::endl;
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
		std::cout << this->_name << " - La chance, c'est encore mieux que le talent." << std::endl;
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
	std::cout << this->_name << " - Généralement quand je marche dans la merde, \
je frotte un peu et ça part, mais toi, toi tu t'accroches vraiment bien."
	<< std::endl;
}

void		FragTrap::mechromagician(std::string const &target)
{
	std::cout << this->_name << " - Un café noir, bien noir, comme mon âme."
		<< std::endl;
}

void		FragTrap::funzerker(std::string const &target)
{
	std::cout << this->_name << " - Je suis une tempête de mort et de balles."
		<< std::endl;
}

void		FragTrap::laserInferno(std::string const &target)
{
	std::cout << this->_name << " - Je vais être franc, ça va picoter un peu."
		<< std::endl;
}

void		FragTrap::meatUnicycle(std::string const &target)
{
	std::cout << this->_name << " - Qu'as tu fait, sbire ?! C'était des êtres humains, \
avec des familles et... Non, c'est pour rire, allez, ON S'EN FOUT !" << std::endl;
}

int			FragTrap::getHp(void)
{
	return (this->_hitPoints);
}

int			FragTrap::getEp(void)
{
	return (this->_energyPoints);
}
