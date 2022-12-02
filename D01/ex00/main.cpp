/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:56 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 17:54:53 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Pony.hpp"

static void ponyOnTheStack(std::string name)
{
	std::cout << "Creating a pony on Stack...\n";
	Pony pony_s(name);

	pony_s.do_stuff();

	std::cout << "Deleting pony on Stack...\n";
}

static void ponyOnTheHeap(std::string name)
{
	std::cout << "Creating a pony on Heap...\n";
	Pony *pony_h = new Pony(name);

	pony_h->do_stuff();

	std::cout << "Deleting a pony on Heap...\n";
	delete pony_h;
}

int		main(void)
{
	ponyOnTheStack("Pony-Stack");
	std::cout << std::endl;
	ponyOnTheHeap("Pony-Heap");
	return (0);
}
