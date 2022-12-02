/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 01:55:16 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{

public :

	ClapTrap(void);
	ClapTrap(const std::string nameSrc);
	ClapTrap(const ClapTrap &src);
	ClapTrap(int hp, int hpMax, int en, int enMax, int lvl, std::string name, int melee, int ranged, int armor);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap(void);

	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);

	int				getHp(void);
	int				getEp(void);

protected :

	int				_hitPoints;
	int				_maxHitPoints;
	int				_energyPoints;
	int				_maxEnergyPoints;
	int				_level;
	std::string		_name;
	int				_meleeAttackDamage;
	int				_rangedAttackDamage;
	int				_armorDamageReduction;

};

#endif
