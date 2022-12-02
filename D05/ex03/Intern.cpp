/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	return;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	rhs.doNothing();
	return (*this);
}

Intern::~Intern(void)
{
	return;
}

Form			*formPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form			*formRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form			*formShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form			*Intern::makeForm(std::string formRequest, std::string target)
{
	static s_formList	forms[3] = {
		{"presidential pardon", formPresidential},
		{"robotomy request", formRobotomy},
		{"shrubbery creation", formShrubbery}
	};
	int 				i = 0;

	while (formRequest[i])
	{
		formRequest[i] = std::tolower(formRequest[i]);
		i++;
	}

	i = 0;
	while (i < 3)
	{
		if (forms[i].formName == formRequest)
		{
			std::cout << "Intern creates " << formRequest << std::endl;
			return (forms[i].fct(target));
		}
		i++;
	}

	std::cout << "The form " << formRequest << " is unknown !" << std::endl;
	return (NULL);
}

void			Intern::doNothing(void) const
{
	return;
}

std::ostream &operator<<(std::ostream &out, const Intern &rhs)
{
	rhs.doNothing();
	out << "Intern do not have the right to talk !" << std::endl << "You're fired !" << std::endl;
	return (out);
}