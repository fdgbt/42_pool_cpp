/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuary.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:44:12 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:50:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUARY_CLASS_H
# define ANNUARY_CLASS_H
# define D_CONTACT_MAX 8

# include <string>
# include "contact.class.hpp"

class Annuary {

public :

    Annuary(void);
    ~Annuary(void);
    void ft_add_contact(void);
    void ft_search_contact(void) const;

private :

    int     _index;
    Contact _annuary[D_CONTACT_MAX];

    void _ft_set_field(int field, std::string form);
    void _ft_get_index(void) const;
    void _ft_show_contact_data(int index) const;
};

#endif
