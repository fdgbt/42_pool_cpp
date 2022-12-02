/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 02:03:19 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public :

	FragTrap(void);
	FragTrap(const std::string nameSrc);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap(void);

	void			vaulthunter_dot_exe(std::string const &target);

private :

	typedef void	(FragTrap::*specialAttack)(std::string const &);
	specialAttack	_spAttack[5];

	void			rubberDucky(std::string const &target);
	void			mechromagician(std::string const &target);
	void			funzerker(std::string const &target);
	void			laserInferno(std::string const &target);
	void			meatUnicycle(std::string const &target);
};

#endif
