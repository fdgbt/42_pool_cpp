/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public :

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	class FormSignedException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};

	Form(void);
	Form(const std::string name, const int gradeSign, const int gradeExec);
	Form(const Form &src);
	Form &operator=(const Form &rhs);
	virtual ~Form(void);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	int				getGradeSign(void) const;
	int				getGradeExec(void) const;

	void			beSigned(const Bureaucrat &bureaucrat);

private :

	const std::string				_name;
	bool							_signed;
	const int						_gradeSign;
	const int						_gradeExec;

};

std::ostream		&operator<<(std::ostream &out, const Form &rhs);

#endif
