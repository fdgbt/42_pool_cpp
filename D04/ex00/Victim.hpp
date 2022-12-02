/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{

public :

	Victim(const std::string nameSrc);
	Victim(const Victim &src);
	Victim &operator=(const Victim &rhs);
	virtual ~Victim(void);

	std::string		getName(void) const;

	virtual void	getPolymorphed(void) const;

protected :

	Victim(void);

	std::string		_name;
};

std::ostream		&operator<<(std::ostream &out, const Victim &rhs);

#endif
