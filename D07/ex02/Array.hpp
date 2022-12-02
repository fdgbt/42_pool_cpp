/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template < typename T >
class Array 
{
    public:

        Array(void) : _array(NULL), _n(0) {}

        Array(unsigned int n) : _array(new T[n]()), _n(n) {}

        Array(Array const &src) : _array(NULL), _n(0) { *this = src; }

        Array const &operator=(Array const &rhs)
        {
            unsigned int i = 0;
        
            if (rhs.size() != this->size()) 
            {
                if (this->_array != NULL)
                    delete [] this->_array;
                this->_array = new T[rhs.size()];
            }

            this->_n = rhs.size();

            while(i < this->_n)
            {
                this->_array[i] = rhs._array[i];
                i++;
            }

            return (*this); 
        }

        ~Array(void)
        {
            if (this->_array != NULL)
                delete [] this->_array;
        }

        T &operator[](unsigned int n) const
        {
            if (!this->_array || n < 0 || n >= this->_n)
                throw std::exception();

            return (this->_array[n]);
        }

        unsigned int size(void) const
        {
            return (this->_n);
        }

    private:

        T *_array;
        unsigned int _n;

};

#endif
