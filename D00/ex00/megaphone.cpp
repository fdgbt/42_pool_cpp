/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:39:48 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:55:44 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void		ft_print_arg(char *argv)
{
	std::cout << argv;
}

static void		ft_to_upper(char *argv)
{
	int			i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= 97 && argv[i] <= 122)
			argv[i] -= 32;
		i++;
	}
	ft_print_arg(argv);
}

static void		ft_check_arg(int argc, char **argv)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		ft_to_upper(argv[i]);
		i++;
	}
	std::cout << std::endl;
}

int		main(int argc, char **argv)
{

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		ft_check_arg(argc, argv);
	return (0);
}
