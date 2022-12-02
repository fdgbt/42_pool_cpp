/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:42:52 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
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

	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	virtual ~Bureaucrat(void);

	std::string		getName(void) const;
	int				getGrade(void) const;

	void			increaseGrade(void);
	void			decreaseGrade(void);

	void			signForm(Form &form) const;
	void			executeForm(const Form &form);


private :

	const std::string		_name;
	int						_grade;

};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
