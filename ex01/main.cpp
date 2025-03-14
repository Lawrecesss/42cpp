/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:18:34 by lshein            #+#    #+#             */
/*   Updated: 2025/03/14 16:03:33 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void do_while_loop(std::string *arg, int *eof, std::string field)
{
    do
    {
        std::cout << "Enter " << field << ": ";
        if (!(std::getline(std::cin, *arg)))
        {
            *eof = 1;
            break;
        }
    } while ((*arg).empty());
}

int add(PhoneBook *phonebook)
{
    Contact contact;
    std::string index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int eof = 0;
    do_while_loop(&first_name, &eof, "first name");
    // do_while_loop(&last_name, &eof, "last name");
    // do_while_loop(&nickname, &eof, "nickname");
    // do_while_loop(&phone_number, &eof, "phone number");
    // do_while_loop(&darkest_secret, &eof, "darkest secret");
    if (eof)
        return (1);
    // std::cout << "here";
    contact.set_index(phonebook->get_contact_count());
    contact.set_firstname(first_name);
    // contact.set_lastname(last_name);
    // contact.set_nickname(nickname);
    // contact.set_phonenumber(phone_number);
    // contact.set_darkest_secret(darkest_secret);
    phonebook->save_contact(contact);
    return (0);
}

std::string truncate(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str += ".";
    }
    else
    {
        while (str.length() < 10)
            str = " " + str;
    }
    return (str);
}

void display_phonebook(PhoneBook phonebook)
{
    int i = 0;
    int index = phonebook.get_contact_count();

    while (i < index)
    {
        Contact contact = phonebook.get_contact(i);
        std::string firstname = truncate(contact.get_firstname());
        std::string lastname = truncate(contact.get_lastname());
        std::string nickname = truncate(contact.get_nickname());
        std::cout << "        " << contact.get_index()<< "|";
        std::cout << firstname << "|";
        std::cout << lastname << "|";
        std::cout << nickname << "|" << std::endl;
        i++;
    }

}

void search(std::string index, PhoneBook phonebook)
{
    int i = index[0] - '0';
    Contact contact = phonebook.get_contact(i);
    std::cout << "First Name: " << contact.get_firstname() << std::endl;
    std::cout << "Last Name: " << contact.get_lastname() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Phone Number: " << contact.get_phonenumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}

int main(void)
{
    PhoneBook phonebook;
    std::string cmd;

    phonebook.set_contact_count(0);
    std::cout << "> ";
    std::getline(std::cin, cmd);
    while (cmd != "EXIT")
    {
        if (cmd.empty())
        {
			std::cout << "\nEOF detected. ";
			break;
		}
        if (cmd == "a")
        {
            if (add(&phonebook) == 1)
            {
                std::cout << "\nEOF detected. ";
                break;
            }
            std::cout <<"Added Successfully" << std::endl;
        }
        else if (cmd == "SEARCH")
        {
            display_phonebook(phonebook);
            if (phonebook.get_contact_count() > 0)
            {
                std::cout << "Enter index: ";
                std::getline(std::cin, cmd);
                search(cmd, phonebook);
            }
        }
        std::cout << "> ";
        std::getline(std::cin, cmd);
    }
    std::cout << "Exiting program" << std::endl;
}
