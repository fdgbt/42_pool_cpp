/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename T >
void iter(T *array, int &length, void (*fct)(T &))
{
    int i = 0;

    while (i < length)
    {
        fct(array[i]);
        i++;
    }
}

template < typename T >
void modif(T &value)
{
    value += value;
}

template < typename T >
void print(T &value)
{
    std::cout << value << std::endl;
}

#endif
