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
#include <list>
#include "easyfind.hpp"

#define D_NB_VALUES 10
#define D_VAL_MAX 100

int main(int argc, char **argv)
{
    int             i = 0;
    int             search = 0;
    int             found = 0;
    std::list<int>  listA;
    
    std::srand(time(NULL));

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (!std::isdigit(argv[1][i]))
            {
                std::cout << "ERROR - Value must be an integer." << std::endl;
                return (-1);
            }
            i++;
        }
            
        search = std::atoi(argv[1]);

        if (search < 0 || search > D_VAL_MAX)
        {
            std::cout << "ERROR - Value must be between 0 and " << D_VAL_MAX << "." << std::endl;
            return (-2);
        }

        for (i = 0; i < D_NB_VALUES; i++)
        {
            listA.push_back(std::rand() % (D_VAL_MAX + 1));
            std::cout << listA.back() << std::endl;
        }

        try
        {
            found = easyfind(listA, search);
            std::cout << "WIN - " << found << " has been detected in the list !" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << "LOST - " << search << " can not be found." << std::endl;
        }
    }
    else
    {
        std::cout << "usage: ./find [number]" << std::endl;
    }

    return (0);
}
