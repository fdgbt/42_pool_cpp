/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/01 01:53:19 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

public :

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void		attack(void) const;

private :

	std::string		_name;
	Weapon			&_weapon;

};

#endif
