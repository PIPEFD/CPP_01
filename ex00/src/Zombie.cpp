/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:36:34 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 20:00:12 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << "HOLAA" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << ":Destructor called. Zombie destroyed." << std::endl;
    
}

void Zombie::annouce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;    
}