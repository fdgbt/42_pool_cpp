/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:11 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/01 01:10:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int				main(void)
{
	{
		Weapon		club = Weapon("crude spiked club");
		HumanA		bob("Bob", club);

		bob.attack();

		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon		club = Weapon("crude spiked club");
		HumanB		jim("Jim");

		jim.setWeapon(club);
		jim.attack();

		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
