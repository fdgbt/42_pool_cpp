/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:18:57 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public :

	AssaultTerminator(void);
	AssaultTerminator(const AssaultTerminator &src);
	AssaultTerminator &operator=(const AssaultTerminator &rhs);
	virtual ~AssaultTerminator(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			battleCry(void) const;
	virtual void			rangedAttack(void) const;
	virtual void			meleeAttack(void) const;
};

#endif
