/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookk.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 04:16:59 by jpflegha          #+#    #+#             */
/*   Updated: 2025/11/27 04:40:32 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookk.hpp"

PhoneBook::PhoneBook() : count(0), next(0) {}

static  std::string truncate(const std::string &str)
{
    if (str.length() > 10)
    {
        return (str.substr(0, 9) + '.');
    }
    else
        return (str);
}
void    PhoneBook::addContact()
{
    std::string input;

    std::cout << "What is the First name ?";
    std::getline(std::cin, input);
    contacts[next].setFirstName(input);
}