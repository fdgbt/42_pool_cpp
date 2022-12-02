/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/06 17:03:08 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

public :

	NinjaTrap(void);
	NinjaTrap(const std::string nameSrc);
	NinjaTrap(const NinjaTrap &src);
	NinjaTrap &operator=(const NinjaTrap &rhs);
	~NinjaTrap(void);

	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
	void	ninjaShoebox(NinjaTrap &target);

};

#endif
