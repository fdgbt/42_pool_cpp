/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	this->_materia[0] = src._materia[0];
	this->_materia[1] = src._materia[1];
	this->_materia[2] = src._materia[2];
	this->_materia[3] = src._materia[3];
	return;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	this->_materia[0] = rhs._materia[0];
	this->_materia[1] = rhs._materia[1];
	this->_materia[2] = rhs._materia[2];
	this->_materia[3] = rhs._materia[3];
	return (*this);
}

MateriaSource::~MateriaSource(void)
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

void				MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			i = 4;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Materia inventory is full !" << std::endl;
}

void				MateriaSource::forgetMateria(AMateria const *m)
{
	int i = 0;

	while (i < 4)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i] == m)
			{
				this->_materia[i] = NULL;
				i = 4;
			}		
		}
		i++;
	}
	if (i == 4)
		std::cout << "Materia type not found !" << std::endl;
}

void				MateriaSource::forgetMateria(std::string const &type)
{
	int i = 0;

	while (i < 4)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i]->getType() == type)
			{
				this->_materia[i] = NULL;
				i = 4;
			}		
		}
		i++;
	}
	if (i == 4)
		std::cout << "Materia type not found !" << std::endl;
}

AMateria			*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	if (type == "")
		return (NULL);
	while (i < 4)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i]->getType() == type)
				return (this->_materia[i]->clone());
		}
		i++;
	}
	std::cout << "Materia type not found !" << std::endl;
	return (NULL);
}
