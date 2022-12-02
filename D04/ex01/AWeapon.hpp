/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:21:10 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class AWeapon
{

public:

	AWeapon(const std::string &name, int apcost, int damage);
	AWeapon(const AWeapon &src);
	AWeapon &operator=(const AWeapon &rhs);
	virtual ~AWeapon(void);

	virtual void		attack(void) const = 0;

	int					getAPCost(void) const;
	int					getDamage(void) const;
	const std::string	getName(void) const;

protected:

	AWeapon(void);

	std::string 		_name;
	int 				_apcost;
	int					_damage;
};

#endif