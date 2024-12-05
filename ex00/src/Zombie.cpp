/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:36:34 by pipe              #+#    #+#             */
/*   Updated: 2024/12/05 13:25:22 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << ":Destructor called. Zombie destroyed." << std::endl;
    
}

void Zombie::annouce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;    
}