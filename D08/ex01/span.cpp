/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <stdexcept>

Span::Span(unsigned int size) : _size(size)
{
    _range.reserve(size);
}

Span::Span(Span const &src)
{
    *this = src;
}

Span const &Span::operator=(Span const &rhs)
{
    this->_size = rhs._size;
    this->_range = rhs._range;

    return (*this);
}

Span::~Span(void)
{
    return ;
}

void Span::addNumber(int n)
{
    if (this->_range.size() == this->_size)
        throw std::out_of_range("Span is full !");
    this->_range.push_back(n);
}

void Span::addNumber(std::vector<int> &range)
{
    if (this->_range.size() + range.size() > this->_size)
        throw std::out_of_range("Span is full !");
    this->_range.insert(this->_range.end(), range.begin(), range.end());
}

unsigned int Span::shortestSpan(void)
{
    unsigned int    diff = 0;
    unsigned int    min = __UINT32_MAX__;

    if (this->_range.size() <= 1)
        throw std::out_of_range("Span is empty !");

    std::vector<int> sorted = this->_range;
    std::sort(sorted.begin(), sorted.end());

    std::vector<int>::iterator start = sorted.begin();
    std::vector<int>::iterator end = start;
    end++;

    while (end != sorted.end())
    {
        diff = *end - *start;
        if (diff < min)
            min = diff;
        start++;
        end++;
    }
    return (min);
}

unsigned int Span::longestSpan(void)
{
    std::vector<int>::const_iterator min = std::min_element(this->_range.begin(), this->_range.end());
    std::vector<int>::const_iterator max = std::max_element(this->_range.begin(), this->_range.end());

    if (this->_range.size() <= 1)
        throw std::out_of_range("Span is empty !");
        
    return (*max - *min);
}

