/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:18:57 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public :

	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &src);
	TacticalMarine &operator=(const TacticalMarine &rhs);
	virtual ~TacticalMarine(void);

	virtual ISpaceMarine	*clone(void) const;
	virtual void			battleCry(void) const;
	virtual void			rangedAttack(void) const;
	virtual void			meleeAttack(void) const;
};

#endif
