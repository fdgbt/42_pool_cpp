/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/13 18:52:03 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

# include <iostream>
# include "ISpaceMarine.hpp"

class ISquad
{

public :

	virtual ~ISquad(void) {return ;}

	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int				push(ISpaceMarine *) = 0;

};

#endif
