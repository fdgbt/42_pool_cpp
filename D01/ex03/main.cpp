/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:11 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 21:49:11 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

static void		ft_new_horde(int n)
{
	ZombieHorde horde(n);
	std::cout << std::endl;
	horde.announce();
	std::cout << std::endl;
}

int				main(int argc, char **argv)
{
	int n = 0;

	if (argc != 2)
		std::cout << "usage: ./a.out [n zombies]\n";
	else
	{
		n = std::atoi(argv[1]);
		if (n <= 0)
			std::cout << "Error: n must be positive.\n";
		else
			ft_new_horde(n);
	}
	return (0);
}
