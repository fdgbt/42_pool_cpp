/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:56 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 21:37:52 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"

class Stud42 : public Victim
{
	public :

		Stud42(const std::string nameSrc);
		Stud42(const Stud42 &src);
		Stud42	&operator=(const Stud42 &rhs);
		virtual ~Stud42(void);
		virtual void	getPolymorphed(void) const;
	
	private :

		Stud42(void);
};

Stud42::Stud42(void) : Victim("3b3-12345")
{
	std::cout << "A new student called " << this->_name << " started the 42Cursus." << std::endl;
	return ;
}

Stud42::Stud42(const std::string nameSrc) : Victim(nameSrc)
{
	std::cout << "A new student called " << this->_name << " started the 42Cursus." << std::endl;
	return ;
}

Stud42::Stud42(const Stud42 &src)
{
	*this = src;
	std::cout << "A new student called " << this->_name << " started the 42Cursus." << std::endl;
	return ;
}

Stud42	&Stud42::operator=(const Stud42 &rhs)
{
	std::cout << "The student " << this->_name << " has been set to student "
		<< rhs._name << '.' << std::endl;
	this->_name = rhs._name;
	return (*this);
}

Stud42::~Stud42(void)
{
	std::cout << "The student " << this->_name << " has been absorbed by the Black Hole." << std::endl;
	return ;
}

void		Stud42::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into Norminet!" << std::endl;
}

static void		extraTests(void)
{
	Sorcerer *merlin = new Sorcerer("Merlin", "the Wizard");
	Sorcerer *clone = new Sorcerer(*merlin);
	Victim	*tom = new Victim("Tom");
	Stud42	*flo = new Stud42("Flo");

	clone->polymorph(*tom);
	clone->polymorph(*flo);

	std::cout << *tom << *flo;

	*tom = *flo;
	std::cout << *tom << *flo;

	delete (merlin);
	delete (clone);
	delete (tom);
	delete (flo);
}

static void		mainTests(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
}

int				main(void)
{
	mainTests();
	std::cout << std::endl;
	extraTests();
	return (0);
}

