/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:45:19 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 20:45:35 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <list>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:

    MutantStack<T>(void);
    MutantStack<T>(MutantStack const &src);
    MutantStack<T> const &operator=(MutantStack const &rhs);
    ~MutantStack<T>(void);

    void push(T element);
    void pop(void);

    T top(void) const;
    size_t size(void) const;
    bool empty(void) const;

    typedef std::list<int>::iterator iterator;

    iterator begin(void);
    iterator end(void);

private:

    std::list<T> _stack;
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
    return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src)
{
    *this = src;
}

template <typename T>
MutantStack<T> const & MutantStack<T>::operator=(MutantStack const &rhs)
{
    this->_stack = rhs._stack;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
    return ;
}

template <typename T>
void MutantStack<T>::push(T element)
{
    this->_stack.push_front(element);
}

template <typename T>
void MutantStack<T>::pop(void)
{
    this->_stack.pop_front();
}

template <typename T>
T MutantStack<T>::top(void) const
{
    return (this->_stack.front());
}

template <typename T>
size_t MutantStack<T>::size(void) const
{
    return (this->_stack.size());
}

template <typename T>
bool MutantStack<T>::empty(void) const
{
    return (this->_stack.empty());
}

typedef std::list<int>::iterator iterator;

template <typename T>
iterator MutantStack<T>::begin(void)
{
    return (this->_stack.begin());
}

template <typename T>
iterator MutantStack<T>::end(void)
{
    return (this->_stack.end());
}

#endif
