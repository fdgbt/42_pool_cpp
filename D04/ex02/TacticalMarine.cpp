/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:29:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	std::cout << "Tactical Marine ready for battle! (copy)" << std::endl;
	*this = src;
	return;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	std::cout << "Tactical Marine updated!" << std::endl;
	(void)rhs;
	return (*this);
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}

void				TacticalMarine::battleCry(void) const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
