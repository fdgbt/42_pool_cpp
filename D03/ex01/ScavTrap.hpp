/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/05 21:43:55 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

class ScavTrap {

public :

	ScavTrap(void);
	ScavTrap(const std::string nameSrc);
	ScavTrap(const ScavTrap &src);
	ScavTrap &operator=(const ScavTrap &rhs); //right hand side
	~ScavTrap(void);

	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);

	void			challengeNewcomer(std::string const &target);

	int				getHp(void);
	int				getEp(void);

private :

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
