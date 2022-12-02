/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:00:58 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/31 22:07:10 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &rstr = str;

	std::cout << "pointer  : " << *pstr << std::endl;
	std::cout << "reference: " << rstr << std::endl;
}
