/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:07 by afontain          #+#    #+#             */
/*   Updated: 2024/07/18 19:19:22 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	this->FirstName = "None";
	this->LastName = "None";
	this->NickName = "None";
	this->PhoneNumber = 0;
	this->DarkestSecret = "None";
	return ;
}

Contact::~Contact(void)
{
//std::cout << "On detruit le Contact" << std::endl;
} 

int	Contact::isPhone(std::string str)
{
	long long int nb;
	if (isdigit(str) == 0)
		return(0);
	nb = std::stol(str);
	if (nb < 0 || nb > 2147483647)
		return (0);
	return (1);
}

void Contact::printline(std::string line)
{
	int i = 0;
	
	if (line.length() < 10 )
	{
		while (line.length() - i > 0)
		{
			std::cout << " ";
			i++;
		}
	}
	i = 0;
	while (line[i] && i < 9)
	{
		std::cout << line[i];
		i++;
	}
	if (i == 9 && line.length() > 9)
		std::cout << ".";
}

int	Contact::isInput(std::string str) 
{
	if (str[0] == '\0' || str[0] == '\n')
		return (0);
	return (1);
}

void	Contact::search() 
{
	printline(this->FirstName);
	std::cout << " | ";
	printline(this->LastName);
	std::cout << " | ";
	printline(this->NickName);
	std::cout << std::endl;
}

void Contact::setLastName()
{
	std::string str;

	std::cout << "Last Name: ";
	getline(std::cin, str);
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", last name: ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->LastName = str;
	
}

void Contact::setFirstName()
{
	std::string str;

	std::cout << "First Name: ";
	getline(std::cin, str);
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", first name: ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->FirstName = str;
	
}
void Contact::setNickName()
{
	std::string str;

	std::cout << "Nick Name: ";
	getline(std::cin, str);
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", nick name: ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->NickName = str;
	
}
void Contact::setDarkestSecret()
{
	std::string str;

	std::cout << "Darkest Secret : ";
	getline(std::cin, str);
	while (isInput(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", darkest secret : ";
		getline(std::cin, str);
	}
	std::cout << std::endl;
	this->DarkestSecret = str;
	
}

void Contact::setPhoneNumber()
{
	std::string str;
	long long int i;

	std::cout << "Phone Number : ";
	getline(std::cin, str);
	while (isPhone(str) != 1)
	{
		std::cout << std::endl;
		std::cout << "\033[1;31mWrong input\033[0m" << ", last name: ";
		getline(std::cin, str);
	}
	i = stol(str);
	std::cout << std::endl;
	this->PhoneNumber = i;
}
