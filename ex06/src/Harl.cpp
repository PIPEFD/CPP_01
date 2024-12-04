/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:46 by pipe              #+#    #+#             */
/*   Updated: 2024/12/04 13:43:07 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;

}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;

}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;

}

void Harl::error()
{
    std::cout << "[ERROR]" << std::endl;

}

std::string  Harl::toLower(const std::string &str) const 
{
    std::string lowerstr;
    
    for (size_t i = 0; i < str.length(); i++)
        lowerstr += std::tolower(static_cast<unsigned char>(str[i]));
    return (lowerstr);
}

int Harl::getLevelIndex(const std::string &level) const
{
    Complaint complaints[] = 
    {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };

    std::string levellower = toLower(level);

    for (size_t i = 0;  i < 4; i++)
    {
        if (toLower(complaints[i].level) == levellower)
            return (i);
    }
    return (-1);
}

void Harl::complainFilter(const std::string &level)
{
    int index = getLevelIndex(level);
    if (index  == -1)
    {
        std::cerr << "[UNKNOWN] The level \"" << level << "\" is not recognized." << std::endl;
        return;
    }
    
    Complaint complaints[] = 
    {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };

    for (size_t i = index ; i < 4; i++)
            (this->*(complaints[i].method))();
}