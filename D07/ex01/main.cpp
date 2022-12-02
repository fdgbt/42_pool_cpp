/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

#define D_SIZE 5

int main(void)
{
    int tab[D_SIZE];
    int len = D_SIZE;
    int i;

    srand(time(NULL));

    for (i = 0 ; i < D_SIZE ; i++)
    {
        tab[i] = rand();
    }

    std::cout << "Original List" << std::endl;
    ::iter(tab, len, ::print);

    ::iter(tab, len, ::modif);

    std::cout << std::endl << "Modified List" << std::endl;
    ::iter(tab, len, ::print);

    return (0);
}