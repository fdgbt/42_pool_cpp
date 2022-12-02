/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:

	SuperMutant(void);
	SuperMutant(const SuperMutant &src);
	SuperMutant &operator=(const SuperMutant &rhs);
	~SuperMutant(void);

	virtual void		takeDamage(int damage);
};

#endif
