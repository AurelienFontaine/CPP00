/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:26:11 by afontain          #+#    #+#             */
/*   Updated: 2024/07/18 19:20:29 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	Contact nouveau;
	PhoneBook book;
	std::string str;
	
	std::cout << "Write a command" << std::endl;
	while(getline(std::cin, str))
	{
		if (str == "EXIT")
			return (0);
		if (str == "ADD")
			book.add();
		if (str == "SEARCH")
			book.search();
	}
	return (1);
}