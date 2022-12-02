/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:18:57 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{

public :

	Squad(void);
	Squad(const Squad &src);
	Squad &operator=(const Squad &rhs);
	virtual ~Squad(void);

	virtual int				getCount(void) const;
	virtual ISpaceMarine	*getUnit(int N) const;

	virtual int				push(ISpaceMarine *unit);

private :

	int						_count;

	typedef struct			s_squadList
	{
		ISpaceMarine		*_unit;
		struct s_squadList	*_next;
	}						t_squadList;

	t_squadList				*_squadList;

	int						_checkUnit(ISpaceMarine *unit);

	void					_deleteSquad();
	void					_deepCopySquad(const Squad &rhs);

};

std::ostream		&operator<<(std::ostream &out, const Squad &rhs);

#endif
