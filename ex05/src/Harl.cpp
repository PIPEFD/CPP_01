/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:17:46 by pipe              #+#    #+#             */
/*   Updated: 2024/12/05 15:54:51 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug()
{
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}

void Harl::info()
{
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}

void Harl::warning()
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month. "  << std::endl;

}

void Harl::error()
{
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;

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