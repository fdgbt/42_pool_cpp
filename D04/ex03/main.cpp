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
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

static void		extraTests(void)
{
	Character	*her = new Character("Hercule");
	ICharacter	*him = new Character("Himesh");

	Ice 		ice;
	Cure 		cure;

	her->equip(&ice);
	him->equip(&cure);
	
	std::cout << ice.getType() << " has " << ice.getXP() << " XP." << std::endl;
	her->use(0, *him);
	std::cout << ice.getType() << " has " << ice.getXP() << " XP." << std::endl;
	her->use(0, *him);
	std::cout << ice.getType() << " has " << ice.getXP() << " XP." << std::endl;

	std::cout << cure.getType() << " has " << cure.getXP() << " XP." << std::endl;
	him->use(0, *her);
	std::cout << cure.getType() << " has " << cure.getXP() << " XP." << std::endl;

	MateriaSource	*inventory = new MateriaSource();

	inventory->learnMateria(&ice);
	inventory->learnMateria(&cure);

	AMateria 		*cure2 = inventory->createMateria("cure");
	AMateria 		*ice2;

	ice2 = inventory->createMateria("ice2");
	ice2 = inventory->createMateria("ice");
	
	her->equip(ice2);
	her->equip(cure2);
	her->equip(&cure);
	her->equip(&ice);

	Character	copy = *her;

	her->use(1, copy);
	std::cout << ice2->getType() << " has " << ice2->getXP() << " XP." << std::endl;
	copy.use(1, *him);
	std::cout << ice2->getType() << " has " << ice2->getXP() << " XP." << std::endl;

	him->unequip(0);

	her->unequip(0);
	her->unequip(3);
	her->use(0, copy);
	her->use(3, copy);
		
	copy.use(0, *him);
	copy.use(1, *her);
	copy.use(2, copy);
	copy.use(3, *him);
	std::cout << ice2->getType() << " has " << ice2->getXP() << " XP." << std::endl;

	delete her;
	delete him;

	inventory->forgetMateria("ice");
	inventory->forgetMateria(&cure);
	delete inventory;
}

static void			mainTests(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");

	AMateria 	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter	*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int				main(void)
{
	mainTests();
	std::cout << std::endl;
	extraTests();

	return (0);
}

