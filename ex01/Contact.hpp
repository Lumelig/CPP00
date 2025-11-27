/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 04:17:45 by jpflegha          #+#    #+#             */
/*   Updated: 2025/11/27 04:17:47 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        void setFirstName(const std::string&);
        void setLastName(const std::string&);
        void setNickname(const std::string&);
        void setPhoneNumber(const std::string&);
        void setDarkestSecret(const std::string&);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname()const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
};



#endif