/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 17:54:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
	std::cout << "The pony " << this->_name << " has been created.\n";
	return;
}

Pony::~Pony(void)
{
	std::cout << "The pony " << this->_name << " has been destroyed.\n";
	return;
}

void Pony::do_stuff(void) const
{
	std::cout << this->_name << ": *HUHUHUHUHUHUHUUUU*\n";
}
