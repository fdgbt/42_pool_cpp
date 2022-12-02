/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery Creation", 145, 137), _target("none")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery Creation", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : _target(src.getTarget())
{
	*this = src;
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void			ShrubberyCreationForm::action(void) const
{
	std::string 	trees = \
	"	       ,@@@@@@@,							\n" \
	"       ,,,.   ,@@@@@@/@@,  .oo8888o.			\n" \
	"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o			\n" \
	"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		\n" \
	"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		\n" \
	"   %&&/% %&%%&&@@\\ V /@@' `88\\8 `/88'		\n" \
	"   `&%\\ ` /%&'    |.|        \\ '|8'			\n" \
	"       |o|        | |         |0|				\n" \
	"       | |        | |         | |				\n" \
	"______/   \\______/   \\_______/   \\______	\n";

	std::string 	filename = this->_target + "_shrubbery";

	std::ofstream	ofs(filename);

	ofs << trees << std::endl;
	ofs.close();
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &rhs)
{
	out << "Form name: " << rhs.getName() << std::endl << "Signed: " << rhs.getSigned() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
		<< "Target: " << rhs.getTarget() << std::endl;
	return (out);
}
