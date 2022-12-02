/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 20:22:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _selected_type("Dark")
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_selected_type = type;
	std::cout << "* Type changed to \"" << this->_selected_type << "\" *\n";
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name, this->_selected_type);
	return (new_zombie);
}

void	ZombieEvent::randomChump(void)
{
	static std::string names[5] = {"Thor", "Zaz", "Ol" "Coton", "Salty"};
	Zombie new_zombie(names[std::rand() % 5], this->_selected_type);

	new_zombie.announce();
}
