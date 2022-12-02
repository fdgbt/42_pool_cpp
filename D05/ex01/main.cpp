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

static void		testBadBure(const std::string name, int grade)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << name << " - " << e.what() << std::endl;
	}
}

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

static void		testBadForm(const std::string name, int gradeSign, int gradeExec)
{
	try
	{
		Form form(name, gradeSign, gradeExec);
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << name << " - " << e.what() << std::endl;
	}
}

static void		testForm(Bureaucrat &bureaucrat, Form &form)
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

int				main(void)
{
	testBadBure("Bob", 0);
	testBadBure("Jay", 151);
	
	std::cout << std::endl;

	Bureaucrat jean("Jean", 1);
	testBure(jean, 1);
	testBure(jean, 2);

	std::cout << std::endl;

	Bureaucrat vanessa("Vanessa", 150);
	testBure(vanessa, 2);
	testBure(vanessa, 1);

	std::cout << std::endl;
	
	testBadForm("Déclaration sur l'honneur", 0, 1);
	testBadForm("Réclamation", 151, 150);
	
	std::cout << std::endl;
	
	Form a("Cerfa 01", 1, 1);
	Form b("Cerfa 02", 148, 148);

	testForm(jean, a);
	testBure(jean, 1);
	testForm(jean, a);
	
	std::cout << std::endl;

	testForm(vanessa, b);
	testBure(vanessa, 1);
	testForm(vanessa, b);
	
	std::cout << std::endl;

	testForm(jean, a);
	testForm(jean, b);

	std::cout << std::endl << a;
	std::cout << std::endl << b;

	return (0);
}

