/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 15:56:26 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{

public :

	Sorcerer(const std::string nameSrc, const std::string titleSrc);
	Sorcerer(const Sorcerer &src);
	Sorcerer &operator=(const Sorcerer &rhs);
	~Sorcerer(void);

	void			polymorph(Victim const &) const;
	std::string		getName(void) const;
	std::string		getTitle(void) const;

private :

	Sorcerer(void);

	std::string		_name;
	std::string		_title;
};

std::ostream		&operator<<(std::ostream &out, const Sorcerer &rhs);

#endif
