/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 21:55:49 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _zombies(NULL), _zombCount(n)
{
	int					i = 0;
	static std::string	names[5] = {"Thor", "Zaz", "Ol", "Coton", "Salty"};
	static std::string	types[5] = {"human", "animal", "vegetal", "alien", "ghost"};

	this->_zombies = new Zombie[n];
	while (i < n)
	{
		this->_zombies[i].setName(names[std::rand() % 5]);
		this->_zombies[i].setType(types[std::rand() % 5]);
		i++;
	}
	
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	return ;
}

void	ZombieHorde::announce(void) const
{
	int i = 0;

	while (i < this->_zombCount)
	{
		this->_zombies[i].announce();
		i++;
	}
}
