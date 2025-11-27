/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 04:17:40 by jpflegha          #+#    #+#             */
/*   Updated: 2025/11/27 04:17:42 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    contact::setFirstName(const std::string &str)
{
    FirstName = str;
}
void    contact::setLastName(const std::string &str)
{
    LastName = str;
}
void    contact::setNickname(const std::string &str)
{
    Nickname = str;
}
void    contact::setPhoneNumber(const std::string &str)
{
    PhoneNumber = str;
}
void    contact::setDarkestSecret(const std::string &str)
{
    DarkestSecret = str;
}
std::string contact::getFirstName() const
{
    return (FirstName);
}
std::string contact::getLastName() const
{
    return (LastName);
}
std::string contact::getNickname() const
{
    return (Nickname);
}
std::string contact::getDarkestSecret() const
{
    return (DarkestSecret);
}
