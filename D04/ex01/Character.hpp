/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 15:56:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:

	Character(const Character &src);
	Character(const std::string &name);
	Character &operator=(const Character &rhs);
	~Character(void);

	void				recoverAP(void);
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);

	int					getAP(void) const;
	AWeapon				*getWeapon(void) const;
	const std::string 	getName(void) const;

private:

	Character(void);

	std::string			_name;
	int					_ap;
	AWeapon				*_weapon;
	
};

std::ostream &operator<<(std::ostream &out, const Character &rhs);

#endif