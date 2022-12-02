/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/05/10 16:43:36 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "Form.hpp"

class Intern
{

public :

	Intern(void);
	Intern(const Intern &src);
	Intern &operator=(const Intern &rhs);
	virtual ~Intern(void);

	void	doNothing(void) const;

	Form *makeForm(std::string formRequest, std::string target);

private :

	struct s_formList {
		std::string		formName;
		Form			*(*fct)(std::string);
	};

};

std::ostream		&operator<<(std::ostream &out, const Intern &rhs);

#endif
