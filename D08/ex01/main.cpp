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
#include "span.hpp"

#define D_NB_VALUES 10000
#define D_VAL_MAX 100

void ft_main_test(void)
{
    std::cout << "- Main Test -" << std::endl;

    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void ft_extra_test(void)
{
    int i = 0;

    std::cout << std::endl << "- Extra Test -" << std::endl;

    Span sp = Span(D_NB_VALUES);

    for (i = 0 ; i < D_NB_VALUES ; i++)
        sp.addNumber(std::rand());

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void ft_bonus_test(void)
{
    int i = 0;

    std::cout << std::endl << "- Bonus Test -" << std::endl;

    Span                sp = Span(D_NB_VALUES);
    std::vector<int>    range;

    for (i = 0 ; i < D_NB_VALUES ; i++)
        range.push_back(std::rand());

    sp.addNumber(range);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void ft_error_test(void)
{
    std::cout << std::endl << "- Error Test -" << std::endl;

    Span                sp_empty = Span(0);
    Span                sp_one = Span(1);
    Span                sp_full = Span(5);

    std::cout << "(Span Empty)" << std::endl;
    try
    {
        sp_empty.addNumber(std::rand());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        sp_empty.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "(Span One)" << std::endl;
    try
    {
        sp_one.addNumber(std::rand());
        std::cout << sp_one.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "(Span Full)" << std::endl;
    std::vector<int>    range{-50, 2, -10, 5, 0};
    try
    {
        sp_full.addNumber(range);
        std::cout << "sp min: " << sp_full.shortestSpan() << std::endl;
        std::cout << "sp max: " << sp_full.longestSpan() << std::endl;
        sp_full.addNumber(0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    std::srand(time(NULL));
    ft_main_test();
    ft_extra_test();
    ft_bonus_test();
    ft_error_test();
    return (0);
}
