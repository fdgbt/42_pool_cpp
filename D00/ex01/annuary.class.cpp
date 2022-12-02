/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuary.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:44:12 by fdagbert          #+#    #+#             */
/*   Updated: 2021/03/29 19:50:15 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "annuary.class.hpp"

Annuary::Annuary(void)
{
    this->_index = 0;
    return;
}

Annuary::~Annuary(void)
{
    return;
}

void Annuary::_ft_set_field(int field, std::string form)
{
    std::string in = "";

    std::cout << form;
    while (in.length() == 0)
        std::getline(std::cin, in);
    if (field < 3 && in.length() > 10)
    {
        in.resize(10);
        in.replace(9, 1, ".");
    }
    this->_annuary[this->_index].ft_fill_field(field, in);
}

void Annuary::ft_add_contact(void)
{
    if (this->_index >= D_CONTACT_MAX)
        std::cout << "Error: maximum contact number reached (" << D_CONTACT_MAX << ") !\n";
    else
    {
        _ft_set_field(0, "Enter first name : ");
        _ft_set_field(1, "Enter last name : ");
        _ft_set_field(2, "Enter nickname : ");
        _ft_set_field(3, "Enter login : ");
        _ft_set_field(4, "Enter postal address : ");
        _ft_set_field(5, "Enter email address : ");
        _ft_set_field(6, "Enter phone number : ");
        _ft_set_field(7, "Enter birthday date : ");
        _ft_set_field(8, "Enter favorite meal : ");
        _ft_set_field(9, "Enter underwear color : ");
        _ft_set_field(10, "Enter darkest secret : ");
        this->_index++;
    }
}

void Annuary::_ft_show_contact_data(int index) const
{
    std::cout << std::setw(20) << "first name : " << this->_annuary[index].ft_get_field(0) << std::endl;
    std::cout << std::setw(20) << "last name : " << this->_annuary[index].ft_get_field(1) << std::endl;
    std::cout << std::setw(20) << "nickname : " << this->_annuary[index].ft_get_field(2) << std::endl;
    std::cout << std::setw(20) << "login : " << this->_annuary[index].ft_get_field(3) << std::endl;
    std::cout << std::setw(20) << "postal address : " << this->_annuary[index].ft_get_field(4) << std::endl;
    std::cout << std::setw(20) << "email address : " << this->_annuary[index].ft_get_field(5) << std::endl;
    std::cout << std::setw(20) << "phone number : " << this->_annuary[index].ft_get_field(6) << std::endl;
    std::cout << std::setw(20) << "birthday date : " << this->_annuary[index].ft_get_field(7) << std::endl;
    std::cout << std::setw(20) << "favorite meal : " << this->_annuary[index].ft_get_field(8) << std::endl;
    std::cout << std::setw(20) << "underwear color : " << this->_annuary[index].ft_get_field(9) << std::endl;
    std::cout << std::setw(20) << "darkest secret : " << this->_annuary[index].ft_get_field(10) << std::endl;
}

void Annuary::_ft_get_index(void) const
{
    int             id_contact = 0;
    std::string     in = "";

    std::cout << "Enter now the index of contact : ";
    std::cin >> in;
    id_contact = std::atoi(in.c_str());
    while (id_contact < 0 || id_contact >= this->_index)
    {
        std::cout << "Error : Invalid index !\nEnter now the index of contact : ";
        std::cin >> in;
        id_contact = std::atoi(in.c_str());
    }
    _ft_show_contact_data(id_contact);
}

void Annuary::ft_search_contact(void) const
{
    int     i = 0;

    std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
                << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|\n";
    while (i < this->_index)
    {
        std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << this->_annuary[i].ft_get_field(0) << "|"
                << std::setw(10) << this->_annuary[i].ft_get_field(1) << "|" << std::setw(10) << this->_annuary[i].ft_get_field(2) << "|\n";
        i++;
    }
    if (this->_index)
        _ft_get_index();
}