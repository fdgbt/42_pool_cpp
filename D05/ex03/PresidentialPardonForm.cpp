/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5), _target("none")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : _target(src.getTarget())
{
	*this = src;
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

std::string		PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void			PresidentialPardonForm::action(void) const
{	
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &rhs)
{
	out << "Form name: " << rhs.getName() << std::endl << "Signed: " << rhs.getSigned() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
		<< "Target: " << rhs.getTarget() << std::endl;
	return (out);
}
