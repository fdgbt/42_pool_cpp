/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 18:37:05 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

# include <iostream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public :

	SuperTrap(void);
	SuperTrap(const std::string nameSrc);
	SuperTrap(const SuperTrap &src);
	SuperTrap &operator=(const SuperTrap &rhs);
	~SuperTrap(void);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

};

#endif
