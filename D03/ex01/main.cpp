/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:56 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/05 21:57:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <unistd.h>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

static void		fragTrapTest(void)
{
	FragTrap	ft1("(-_-)");
	FragTrap	ft2("Clap Trap");
	FragTrap	ft3("Clap Trap [2nd Souffle]");
	FragTrap	ft4;

	std::cout << std::endl;
	ft1.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	ft2.takeDamage(100);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	ft3.takeDamage(150);
	std::cout << "[MAIN] | ft3 HP: " << ft3.getHp() << std::endl;
	ft1.beRepaired(25);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	ft2.beRepaired(50);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	ft3.beRepaired(150);
	std::cout << "[MAIN] | ft3 HP: " << ft3.getHp() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	FragTrap	ft5(ft1);

	std::cout << std::endl;
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	ft1.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	ft5.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	std::cout << std::endl;

	ft4 = ft2;

	std::cout << std::endl;
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	ft4.takeDamage(50);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	ft1.rangedAttack("Jack");
	ft2.meleeAttack("Dr. Zed");
	std::cout << std::endl;

	int i = 0;
	int j = 0;

	while (i++ < 5)
	{
		j = 0;
		ft3.vaulthunter_dot_exe("Étalon du cul");
		std::cout << "[MAIN] | ft3 NRJ: " << ft3.getEp() << std::endl;
		std::cout << std::endl;
		sleep(1);
	}
}

static void		scavTrapTest(void)
{
	ScavTrap	ft1("(-_-)");
	ScavTrap	ft2("Scav Trap");
	ScavTrap	ft3("Scav Trap [2nd Souffle]");
	ScavTrap	ft4;

	std::cout << std::endl;
	ft1.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	ft2.takeDamage(100);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	ft3.takeDamage(150);
	std::cout << "[MAIN] | ft3 HP: " << ft3.getHp() << std::endl;
	ft1.beRepaired(25);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	ft2.beRepaired(50);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	ft3.beRepaired(150);
	std::cout << "[MAIN] | ft3 HP: " << ft3.getHp() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap	ft5(ft1);

	std::cout << std::endl;
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	ft1.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	ft5.takeDamage(50);
	std::cout << "[MAIN] | ft1 HP: " << ft1.getHp() << std::endl;
	std::cout << "[MAIN] | ft5 HP: " << ft5.getHp() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	std::cout << std::endl;

	ft4 = ft2;

	std::cout << std::endl;
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	ft4.takeDamage(50);
	std::cout << "[MAIN] | ft2 HP: " << ft2.getHp() << std::endl;
	std::cout << "[MAIN] | ft4 HP: " << ft4.getHp() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	ft1.rangedAttack("Jack");
	ft2.meleeAttack("Dr. Zed");
	std::cout << std::endl;

	ft3.challengeNewcomer("Sbire");
}

int		main(void)
{
	fragTrapTest();
	std::cout << std::endl;
	scavTrapTest();
	std::cout << std::endl;
	return (0);
}
