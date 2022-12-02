/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:06:03 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 18:24:01 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

void		memoryLeak(void)
{
	std::string		*panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}
