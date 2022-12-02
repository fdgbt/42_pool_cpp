/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:56 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/13 18:47:22 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "ISquad.hpp"
# include "Squad.hpp"
# include "ISpaceMarine.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

static void		extraTests(void)
{
	int					i = 0;
	Squad				*odst = new Squad;
	Squad				*noble = new Squad;
	
	ISpaceMarine		*jun = new TacticalMarine;
	AssaultTerminator	*emile = new AssaultTerminator;
	AssaultTerminator	*jorge = new AssaultTerminator;
	TacticalMarine		*carter = new TacticalMarine;
	TacticalMarine		*cath = new TacticalMarine;
	ISpaceMarine		*six = new TacticalMarine;
	
	std::cout << std::endl;

	ISpaceMarine		*dup1 = jorge->clone();
	ISpaceMarine		*dup2 = carter->clone();
	TacticalMarine		dup3(*cath);
	AssaultTerminator	dup4(*emile);
	
	std::cout << std::endl;

	odst->push(dup1);
	odst->push(dup2);

	ISpaceMarine *tmp = dup1;
	odst->push(tmp);
	tmp = dup2;
	odst->push(tmp);

	std::cout << std::endl << "odst" << std::endl;
	for (i = 0; i < odst->getCount() ; i++)
	{
		ISpaceMarine	*cur = odst->getUnit(i);
		std::cout << cur << " : ";
		cur->battleCry();
	}

	std::cout << std::endl << "odst clone" << std::endl;
	Squad		odst_clone(*odst);
	for (i = 0; i < odst_clone.getCount() ; i++)
	{
		ISpaceMarine	*cur = odst_clone.getUnit(i);
		std::cout << cur << " : ";
		cur->battleCry();
	}

	std::cout << std::endl << "noble" << std::endl;
	noble->push(jun);
	noble->push(emile);
	noble->push(jorge);
	noble->push(carter);
	noble->push(cath);
	noble->push(six);
	for (i = 0; i < noble->getCount() ; i++)
	{
		ISpaceMarine	*cur = noble->getUnit(i);
		std::cout << cur << " : ";
		cur->battleCry();
	}

	std::cout << std::endl << "noble clone" << std::endl;
	Squad noble_clone = *noble;
	for (i = 0; i < noble_clone.getCount() ; i++)
	{
		ISpaceMarine	*cur = noble_clone.getUnit(i);
		std::cout << cur << " : ";
		cur->battleCry();
	}
	std::cout << std::endl;

	delete (odst);
	delete (noble);
}

static void			mainTests(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;

	ISquad			*vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount() ; i++)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

int				main(void)
{
	mainTests();
	std::cout << std::endl;
	extraTests();
	return (0);
}

