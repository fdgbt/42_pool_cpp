/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>


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

private :

	const std::string		_name;
	int						_grade;

};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
