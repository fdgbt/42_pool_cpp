/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
    public:

        Span(unsigned int size);
        Span(Span const &src);
        Span const &operator=(Span const &rhs);
        ~Span(void);

        void addNumber(int n);
        void addNumber(std::vector<int> &range);

        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
    
    private:
        unsigned int                _size;
        std::vector<int>            _range;
};

#endif
