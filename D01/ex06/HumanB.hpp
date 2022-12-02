/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/01 01:39:16 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

public :

	HumanB(std::string name);
	~HumanB(void);

	void		attack(void) const;
	void		setWeapon(Weapon &weapon);

private :

	std::string		_name;
	Weapon			*_weapon;

};

#endif
