/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/13 18:53:52 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

# include <iostream>

class ISpaceMarine
{

public :

	virtual ~ISpaceMarine(void) {return;}

	virtual ISpaceMarine	*clone(void) const = 0;
	virtual void			battleCry(void) const = 0;
	virtual void			rangedAttack(void) const = 0;
	virtual void			meleeAttack(void) const = 0;

};

#endif
