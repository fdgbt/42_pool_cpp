/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:11 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 20:24:44 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void		ft_random_zombie(void)
{
	ZombieEvent event;

	std::cout << "-> Create Zombie with random name.\n";
	event.randomChump();
	std::cout << "\n-> Change the type to \"Low QI\".\n";
	event.setZombieType("LOW QI");
	std::cout << "-> Create Zombie with random name and the new type.\n";
	event.randomChump();
}

static int		ft_perso_zombie(void)
{
	ZombieEvent event;
	Zombie *flo = NULL;

	std::cout << "-> Change the type to \"Super\".\n";
	event.setZombieType("Super");
	std::cout << "-> Create Zombie called \"Flo\".\n";
	flo = event.newZombie("Flo");
	if (!flo)
		return (-1);
	flo->announce();
	delete flo;
	return (0);
}

int				main(void)
{
	ft_random_zombie();
	std::cout << std::endl;
	if (ft_perso_zombie() < 0)
		return (-1);
	return (0);
}
