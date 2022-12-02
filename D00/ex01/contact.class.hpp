/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:44:12 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:50:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact {

public :

    Contact(void);
    ~Contact(void);
    void ft_fill_field(int fied, std::string in);
    std::string ft_get_field(int fied) const;

private :

    std::string     _first_name;
    std::string     _last_name;
    std::string     _nickname;
    std::string     _login;
    std::string     _postal_address;
    std::string     _email_address;
    std::string     _phone_number;
    std::string     _birthday_date;
    std::string     _favorite_meal;
    std::string     _underwear_color;
    std::string     _darkest_secret;
};

#endif
