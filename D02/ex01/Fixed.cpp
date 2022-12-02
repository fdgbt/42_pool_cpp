/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:46 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/29 18:58:25 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(const int valInt) : _value(valInt << _binaryPoint)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float valFloat) : _value((int)roundf(valFloat * (1 << _binaryPoint)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed		&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}

int			Fixed::getRawBits(void) const
{
	return (this->_value);
}

void		Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

int			Fixed::toInt(void) const
{
	return (this->_value >> this->_binaryPoint);
}

float		Fixed::toFloat(void) const
{
	return (this->_value / (float)(1 << this->_binaryPoint));
}

