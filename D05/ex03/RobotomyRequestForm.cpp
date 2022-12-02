/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45), _target("none")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("Robotomy Request", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : _target(src.getTarget())
{
	*this = src;
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

std::string		RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void			RobotomyRequestForm::action(void) const
{	
	srand(time(NULL));
	std::cout << "* DRILLING NOIZE *" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "Failed to robotomize " << this->_target << " !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &rhs)
{
	out << "Form name: " << rhs.getName() << std::endl << "Signed: " << rhs.getSigned() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl
		<< "Target: " << rhs.getTarget() << std::endl;
	return (out);
}
