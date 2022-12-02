/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:13:43 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/29 19:04:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public :

	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed				&operator=(const Fixed &rhs); //right hand side

	int					getRawBits(void) const;
	void				setRawBits(const int raw);

private :

	int					_value;
	static const int	_binaryPoint = 8;
};

#endif
