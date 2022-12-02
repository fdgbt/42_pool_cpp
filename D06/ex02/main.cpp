/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:56:15 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:39:14 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base		*generate(void)
{
	int		i = 0;

	srand(time(NULL));
	i = rand() % 3;
	if (!i)
	{
		std::cout << "Random A" << std::endl;
		return (new A());
	}
	else if (i == 1)
	{
		std::cout << "Random B" << std::endl;
		return (new B());
	}
	else if (i == 2)
	{
		std::cout << "Random C" << std::endl;
		return (new C());
	}
	else
		return (NULL);
}

void		identify(Base *p)
{
	std::cout << "- identify (*p) -" << std::endl;

	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void		identify(Base &p)
{
	std::cout << "- identify (&p) -" << std::endl;

	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

int main(void)
{
	Base	*baseClass = generate();

	identify(baseClass);
	identify(*baseClass);

	delete baseClass;
	return (0);
}
