/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/07 22:28:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Unknown"), _signed(false), _gradeSign(1), _gradeExec(1)
{
	return;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) :
	_name(name),
	_signed(false),
	_gradeSign(gradeSign),
	_gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(const Form &src) :
	_name(src.getName()),
	_signed(false),
	_gradeSign(src.getGradeSign()),
	_gradeExec(src.getGradeExec())
{
	*this = src;
	return;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

Form::~Form(void)
{
	return;
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool			Form::getSigned(void) const
{
	return (this->_signed);
}

int				Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int				Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void			Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (this->_signed)
		throw Form::FormSignedException();
	else if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char *Form::GradeTooHighException::what(void) const throw ()
{
	return ("grade is too high !");
}

const char *Form::GradeTooLowException::what(void) const throw ()
{
	return ("grade is too low !");
}

const char *Form::FormSignedException::what(void) const throw ()
{
	return ("form is already signed !");
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form name: " << rhs.getName() << std::endl << "Signed: " << rhs.getSigned() << std::endl
		<< "Grade required to sign: " << rhs.getGradeSign() << std::endl
		<< "Grade required to execute: " << rhs.getGradeExec() << std::endl;
	return (out);
}
