/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:36:16 by lshein            #+#    #+#             */
/*   Updated: 2025/03/13 01:18:45 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact
{
    private:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_index(int index);
        void set_firstname(std::string first_name);
        void set_lastname(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phonenumber(std::string phonenumber);
        void set_darkest_secret(std::string darkest_secret);
        int get_index();
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkest_secret();
};

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
    public:
        void set_contact_count(int contact_count);
        void save_contact(Contact contact);
        Contact get_contact(int index);
        int get_contact_count();
};

#endif
