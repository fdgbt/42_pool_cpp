/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:44:12 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:50:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
#include "contact.class.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void Contact::ft_fill_field(int field, std::string in)
{
    if (field == 0)
        this->_first_name = in;
    else if (field == 1)
        this->_last_name = in;
    else if (field == 2)
        this->_nickname = in;
    else if (field == 3)
        this->_login = in;
    else if (field == 4)
        this->_postal_address = in;
    else if (field == 5)
        this->_email_address = in;
    else if (field == 6)
        this->_phone_number = in;
    else if (field == 7)
        this->_birthday_date = in;
    else if (field == 8)
        this->_favorite_meal = in;
    else if (field == 9)
        this->_underwear_color = in;
    else if (field == 10)
        this->_darkest_secret = in;
}

std::string Contact::ft_get_field(int field) const
{
    if (field == 0)
        return (this->_first_name);
    else if (field == 1)
        return (this->_last_name);
    else if (field == 2)
        return (this->_nickname);
    else if (field == 3)
        return (this->_login);
    else if (field == 4)
        return (this->_postal_address);
    else if (field == 5)
        return (this->_email_address);
    else if (field == 6)
        return (this->_phone_number);
    else if (field == 7)
        return (this->_birthday_date);
    else if (field == 8)
        return (this->_favorite_meal);
    else if (field == 9)
        return (this->_underwear_color);
    else if (field == 10)
        return (this->_darkest_secret);
    else
        return ("\0");
}