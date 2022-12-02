/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template < typename T >
T const & min(T const &x, T const &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

template < typename T >
T const & max(T const &x, T const &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

#endif
