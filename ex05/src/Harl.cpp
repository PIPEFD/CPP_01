/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:46 by pipe              #+#    #+#             */
/*   Updated: 2024/12/04 13:10:51 by pipe             ###   ########.fr       */
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

void Harl::complain(const std::string &level)
{
    Complaint complaints[] = 
    {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };

    for (size_t i = 0;  i < 4; i++)
    {
        if (complaints[i].level == level)
        {
            (this->*(complaints[i].method))();
            return;
        }
    }

    std::cerr << "[UNKNOWN] The level \"" << level << "\" is not recognized." << std::endl;
}