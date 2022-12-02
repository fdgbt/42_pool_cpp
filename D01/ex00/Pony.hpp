/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 18:01:11 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H

# include <string>
# include <iostream>

class Pony {

public :

	Pony(std::string name);
	~Pony(void);

	void	do_stuff(void) const;

private :

	std::string		_name;

};

#endif
