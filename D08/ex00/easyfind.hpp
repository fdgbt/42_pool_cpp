/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template < typename T >
int easyfind(T const &list, int const &n)
{
    typename T::const_iterator it = std::find(list.begin(), list.end(), n);

    if (*it != n)
        throw std::exception();

    return (*it);
}

#endif
