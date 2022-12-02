/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:53:45 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/01 00:19:33 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

# include <string>
# include "Brain.hpp"

class Human {

public :

	Human(void);
	~Human(void);

	std::string		identify(void) const;
	Brain		&getBrain(void) const;

private :

	static Brain _Brain;

};

#endif
