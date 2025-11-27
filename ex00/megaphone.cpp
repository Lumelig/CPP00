/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 04:17:12 by jpflegha          #+#    #+#             */
/*   Updated: 2025/11/27 18:38:07 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int ac, char ** av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j] != '\0'; ++j)
        {
            char c = av[i][j];
            c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
            std::cout << c;
        }
        if (i + 1 < ac)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
