/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 20:11:49 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_H
# define ZOMBIE_EVENT_CLASS_H

# include <string>
# include "Zombie.hpp"

class ZombieEvent {

public :

	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);

private :

	std::string		_selected_type;

};

#endif
