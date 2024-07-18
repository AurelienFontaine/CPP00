/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:14 by afontain          #+#    #+#             */
/*   Updated: 2024/07/18 19:22:28 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):i(0) {
	// std::cout << "On construit un book" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	// std::cout << "On detruit un book" << std::endl;
	return ;
}

void PhoneBook::add()
{
	int j = 0;
	
	j = i%8;
	this->Contact[j].setFirstName();
	this->Contact[j].setLastName();
	this->Contact[j].setNickName();
	this->Contact[j].setDarkestSecret();
	this->Contact[j].setPhoneNumber();
	this->i++;
}
			
// void PhoneBook::search()
// {
	
// }

int  PhoneBook::checkContact(std::string str)
{
	long int nb;

	
}