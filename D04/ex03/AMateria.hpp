/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 20:18:57 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public :

	AMateria(void);
	AMateria(std::string const &type);
	AMateria(const AMateria &src);
	AMateria &operator=(const AMateria &rhs);
	virtual ~AMateria(void);

	std::string const &getType(void) const;
	unsigned int getXP(void) const;

	virtual AMateria		*clone(void) const = 0;
	virtual void			use(ICharacter &target);

protected :

	std::string				_type;
	unsigned int			_xp;

};

#endif
