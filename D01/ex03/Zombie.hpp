/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 21:39:30 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

# include <string>

class Zombie {

public :

	Zombie(void);
	~Zombie(void);
	void	announce(void) const;
	void	setName(std::string name);
	void	setType(std::string type);

private :

	std::string _name;
	std::string _type;

};

#endif
