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
#include "mutantstack.hpp"

#define D_NB_VAL 10

void ft_main_test(void)
{
    MutantStack<int>    mstack;

    std::cout << "- Main Test -" << std::endl;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "full mstack: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int>     s(mstack);
}

void ft_extra_test(void)
{
    MutantStack<int>    mstack;
    int                 i = 0;

    std::cout << std::endl << "- Extra Test -" << std::endl;

    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "empty: " << mstack.empty() << std::endl;

    for (i = 0 ; i < D_NB_VAL ; i++)
    {
        mstack.push(std::rand());
    }

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::cout << "full mstack: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "empty: " << mstack.empty() << std::endl;

    MutantStack<int>    mstack_bis(mstack);
    mstack_bis.pop();
    mstack_bis.pop();

    it = mstack_bis.begin();
    ite = mstack_bis.end();

    std::cout << "full mstack_bis (reverse): " << std::endl;
    while (ite != it)
    {
        --ite;
        std::cout << *ite << std::endl;
    }

    MutantStack<int>    mstack_ter = mstack_bis;

    std::cout << "top: " << mstack_ter.top() << std::endl;
    std::cout << "size: " << mstack_ter.size() << std::endl;
    std::cout << "empty: " << mstack_ter.empty() << std::endl;
}

int main(void)
{
    std::srand(time(NULL));
    ft_main_test();
    ft_extra_test();
    return (0);
}
