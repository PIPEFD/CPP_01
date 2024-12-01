/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:40:35 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 22:48:58 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed")
{
    
}

Zombie::Zombie(const std::string &name) : name(name)
{
    
}

Zombie::~Zombie()
{
    std::cout << name << ": Destructor called. Zombie destroyed." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->name = name;
}

void Zombie::announce()const
{
   std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}