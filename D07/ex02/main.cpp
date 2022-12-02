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
#include "Array.hpp"

#define D_SIZE 5

int main(void)
{
    int i = 0;
    int len = 0;


    Array<int> a;
    std::cout << "A(" << a.size() << "):" << std::endl << &a << std::endl << std::endl;

    Array<int> b(D_SIZE);
    len = b.size();
    
    std::cout << "B(" << len << "):" << std::endl;
    while (i < len)
    {
        std::cout << b[i] << std::endl;
        i++;
    }
    std::cout << std::endl;

    Array<int> c(b);

    i = 0;
    while (i < len)
    {
        c[i] += 1;
        i++;
    }

    std::cout << "C(" << len << "):" << std::endl;
    i = 0;
    while (i < len)
    {
        std::cout << c[i] << std::endl;
        i++;
    }
    std::cout << std::endl;

    a = b;
    std::cout << "new A(" << len << "):" << std::endl;
    i = 0;
    while (i < len)
    {
        std::cout << a[i] << std::endl;
        i++;
    }
    std::cout << std::endl;

    a = c;

    i = 0;
    while (i < len)
    {
        a[i] += 1;
        i++;
    }

    std::cout << "new new A(" << len << "):" << std::endl;
    i = 0;
    while (i < len)
    {
        std::cout << a[i] << std::endl;
        i++;
    }
    std::cout << std::endl;

    std::cout << "C(" << len << "):" << std::endl;
    i = 0;
    while (i < len)
    {
        std::cout << c[i] << std::endl;
        i++;
    }
    std::cout << std::endl;

    return (0);
}