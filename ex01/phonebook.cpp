/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:58:40 by lshein            #+#    #+#             */
/*   Updated: 2025/03/14 16:03:38 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::set_contact_count(int contact_count)
{
	this->contact_count = contact_count;
}

void PhoneBook::save_contact(Contact contact)
{
	if (this->contact_count > 8)
	{
		this->contact_count = (this->contact_count % 8) - 1;
	}
	// std::cout << this->contact_count;
	this->contacts[this->contact_count] = contact;
	this->contact_count++;
}
Contact PhoneBook::get_contact(int index)
{
	return (this->contacts[index]);
}

int PhoneBook::get_contact_count()
{
	return (this->contact_count);
}

