/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("null")
{
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	return;
}

Character::Character(const std::string &name) : _name(name)
{
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	return;
}

Character::Character(const Character &src)
{
	this->_name = src._name;
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	if (src._materia[0])
		this->_materia[0] = src._materia[0]->clone();
	if (src._materia[1])
		this->_materia[1] = src._materia[1]->clone();
	if (src._materia[2])
		this->_materia[2] = src._materia[2]->clone();
	if (src._materia[3])
		this->_materia[3] = src._materia[3]->clone();
	return;
}

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	if (this->_materia[0])
		delete this->_materia[0];
	if (this->_materia[1])
		delete this->_materia[1];
	if (this->_materia[2])
		delete this->_materia[2];
	if (this->_materia[3])
		delete this->_materia[3];
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	if (rhs._materia[0])
		this->_materia[0] = rhs._materia[0]->clone();
	if (rhs._materia[1])
		this->_materia[1] = rhs._materia[1]->clone();
	if (rhs._materia[2])
		this->_materia[2] = rhs._materia[2]->clone();
	if (rhs._materia[3])
		this->_materia[3] = rhs._materia[3]->clone();
	return (*this);
}

Character::~Character(void)
{
	if (this->_materia[0])
		delete this->_materia[0];
	if (this->_materia[1])
		delete this->_materia[1];
	if (this->_materia[2])
		delete this->_materia[2];
	if (this->_materia[3])
		delete this->_materia[3];
	return;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void				Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			i = 5;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Materia inventory is full !" << std::endl;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_materia[idx])
			this->_materia[idx] = NULL;
		else
			std::cout << "Materia number " << idx << " is Empty !" << std::endl;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->_materia[idx])
			this->_materia[idx]->use(target);
		else
			std::cout << "Materia number " << idx << " is Empty !" << std::endl;
	}
}