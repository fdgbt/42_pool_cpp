/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 02:14:09 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap {

public :

	FragTrap(void);
	FragTrap(const std::string nameSrc);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(const FragTrap &rhs); //right hand side
	~FragTrap(void);

	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);

	void			vaulthunter_dot_exe(std::string const &target);

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

	typedef void	(FragTrap::*specialAttack)(std::string const &);
	specialAttack	_spAttack[5];

	void			rubberDucky(std::string const &target);
	void			mechromagician(std::string const &target);
	void			funzerker(std::string const &target);
	void			laserInferno(std::string const &target);
	void			meatUnicycle(std::string const &target);
};

#endif
