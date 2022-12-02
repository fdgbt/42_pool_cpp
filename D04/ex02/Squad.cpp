/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _count(0), _squadList(NULL)
{
	return;
}

Squad::Squad(const Squad &src)
{
	this->_count = 0;
	this->_squadList = NULL;
	this->_deepCopySquad(src);
	return;
}

Squad	&Squad::operator=(const Squad &rhs)
{
	this->_deleteSquad();
	this->_deepCopySquad(rhs);
	return (*this);
}

Squad::~Squad(void)
{
	this->_deleteSquad();
	return;
}

int				Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_squadList *tmp = this->_squadList;

	if (n < 0 || n >= this->_count || tmp == NULL)
		return (NULL);
	while (n > 0)
	{
		tmp = tmp->_next;
		n--;
	}
	return (tmp->_unit);
}

int				Squad::_checkUnit(ISpaceMarine *unit)
{
	int			pos = 0;
	t_squadList *tmp = this->_squadList;

	while (pos < this->_count && tmp != NULL)
	{
		if (tmp->_unit == unit)
			return (pos);
		tmp = tmp->_next;
		pos++;
	}
	return (-1);
}

int				Squad::push(ISpaceMarine *unit)
{
	int			pos = 0;
	t_squadList *tmp = this->_squadList;

	if (unit == NULL)
	{
		std::cout << "Error: no unit to push." << std::endl;
		return (-1);
	}
		
	if ((pos = this->_checkUnit(unit)) >= 0)
	{
		std::cout << "Error: unit is already in the squad at position " << pos << '.' << std::endl;
		return (-2);
	}
	else
	{
		if (tmp == NULL)
		{
			this->_squadList = new t_squadList;
			this->_squadList->_unit = unit;
			this->_squadList->_next = NULL;
		}
		else
		{
			while (tmp->_next)
				tmp = tmp->_next;
			tmp->_next = new t_squadList;
			tmp->_next->_unit = unit;
			tmp->_next->_next = NULL;
		}
		this->_count++;
	}
	return (this->_count);
}

void			Squad::_deleteSquad(void)
{
	int			i = 0;
	t_squadList *tmp = this->_squadList;

	while (i < this->_count && tmp != NULL)
	{
		delete (tmp->_unit);
		this->_squadList = tmp->_next;
		delete (tmp);
		tmp = this->_squadList;
	}
	this->_count = 0;
}

void			Squad::_deepCopySquad(const Squad &rhs)
{
	int 			pos = 0;
	int 			rhsCount = rhs.getCount();
	ISpaceMarine	*deep_copy = NULL;

	while (pos < rhsCount)
	{
		deep_copy = rhs.getUnit(pos++)->clone();
		this->push(deep_copy);
	}
}

std::ostream &operator<<(std::ostream &out, const Squad &rhs)
{
	out << "Squad Count: " << rhs.getCount() << " - Squad List: " << rhs.getUnit(0)
		<< std::endl;
	return (out);
}
