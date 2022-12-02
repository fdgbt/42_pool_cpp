/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:44:07 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:44:08 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "annuary.class.hpp"
#include "contact.class.hpp"

static int		ft_check_cmd(Annuary *annuary, std::string in)
{
	if (!(in.compare("EXIT")))
		return (1);
	else if (!(in.compare("ADD")))
		annuary->ft_add_contact();
	else if (!(in.compare("SEARCH")))
		annuary->ft_search_contact();
	else
		std::cout << "Error : Unrecognized command, try again !\n";
	return (0);
}

static void		ft_check_input(Annuary *annuary)
{
	int ret = 0;
	std::string input ("\0");

	while (!ret)
	{
		std::cout << "Enter now your command : ";
		std::cin >> input;
		ret = ft_check_cmd(annuary, input);
	}
}

static void		ft_intro(void)
{
	std::cout << "Annuary - 8 contacts\nCommands Available :\nADD\nSEARCH\nEXIT\n";
}

int		main(void)
{
	Annuary annuary;

	ft_intro();
	ft_check_input(&annuary);
	return (0);
}
