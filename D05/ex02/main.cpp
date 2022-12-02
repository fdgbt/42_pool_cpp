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
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

static void		testBure(Bureaucrat &bureaucrat, int test)
{
	try
	{
		std::cout << bureaucrat;

		if (test == 1)
			bureaucrat.increaseGrade();
		else if (test == 2)
			bureaucrat.decreaseGrade();
		
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << bureaucrat.getName() << " - " << e.what() << std::endl;
	}
}

static void		testSignForm(Bureaucrat &bureaucrat, Form &form)
{
	try
	{
		bureaucrat.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

static void		testExecForm(Bureaucrat &bureaucrat, Form &form)
{
	try
	{
		bureaucrat.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int				main(void)
{
	Bureaucrat jean("Jean", 1);
	testBure(jean, 1);
	testBure(jean, 2);

	std::cout << std::endl;

	Bureaucrat vanessa("Vanessa", 150);
	testBure(vanessa, 2);
	testBure(vanessa, 1);
	
	ShrubberyCreationForm a("jardin");
	RobotomyRequestForm b("Nicolas");
	PresidentialPardonForm c("Florian");

	std::cout << std::endl << a << std::endl << b << std::endl << c << std::endl;

	testSignForm(vanessa, a);
	testExecForm(jean, a);
	
	testSignForm(jean, a);
	testExecForm(vanessa, a);
	testExecForm(jean, a);

	std::cout << std::endl;

	testSignForm(vanessa, b);
	testExecForm(jean, b);
	
	testSignForm(jean, b);
	testExecForm(vanessa, b);
	testExecForm(jean, b);

	std::cout << std::endl;

	testSignForm(vanessa, c);
	testExecForm(jean, c);
	
	testSignForm(jean, c);
	testExecForm(vanessa, c);
	testExecForm(jean, c);

	std::cout << std::endl << a << std::endl << b << std::endl << c;

	return (0);
}

