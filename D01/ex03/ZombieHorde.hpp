/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 21:20:41 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_CLASS_H
# define ZOMBIE_HORDE_CLASS_H

# include <string>
# include "Zombie.hpp"

class ZombieHorde {

public :

	ZombieHorde(int n);
	~ZombieHorde(void);

	void	announce(void) const;

private :

	Zombie		*_zombies;
	int			_zombCount;

};

#endif
