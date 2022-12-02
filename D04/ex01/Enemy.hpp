/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy
{

public:

	Enemy(int hp, const std::string &type);
	Enemy(const Enemy &src);
	Enemy &operator=(const Enemy &rhs);
	virtual ~Enemy(void);

	int					getHP(void) const;
	const std::string	getType(void) const;

	virtual void		takeDamage(int damage);

protected:

	Enemy(void);

	std::string			_type;
	int					_hp;
};

#endif
