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
# include "Bureaucrat.hpp"

static void		mainTests(const std::string name, int grade, int test)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);

		std::cout << bureaucrat;

		if (test == 1)
		{
			bureaucrat.increaseGrade();
			std::cout << bureaucrat;
		}
		else if (test == 2)
		{
			bureaucrat.decreaseGrade();
			std::cout << bureaucrat;
		}
	}
	catch (std::exception &e)
	{
		std::cout << name << " - " << e.what() << std::endl;
	}
}

int				main(void)
{
	mainTests("Bob", 0, 1);
	mainTests("Jay", 151, 2);
	std::cout << std::endl;
	mainTests("Jean", 1, 1);
	mainTests("Jean", 1, 2);
	std::cout << std::endl;
	mainTests("Vanessa", 150, 2);
	mainTests("Vanessa", 150, 1);
	return (0);
}

