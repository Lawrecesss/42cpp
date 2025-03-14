/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:52:18 by lshein            #+#    #+#             */
/*   Updated: 2025/03/13 01:19:03 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::set_index(int index)
{
    this->index = index;
}
void Contact::set_firstname(std::string firstname)
{
    this->first_name = firstname;
}

void Contact::set_lastname(std::string lastname)
{
    this->last_name = lastname;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phonenumber(std::string phonenumber)
{
    this->phone_number = phonenumber;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

int Contact::get_index()
{
    return (this->index);
}
std::string Contact::get_firstname()
{
    return (this->first_name);
}

std::string Contact::get_lastname()
{
    return (this->last_name);
}

std::string Contact::get_nickname()
{
    return (this->nickname);
}

std::string Contact::get_phonenumber()
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}
