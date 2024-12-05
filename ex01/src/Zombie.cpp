/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:40:35 by pipe              #+#    #+#             */
/*   Updated: 2024/12/05 13:25:54 by dbonilla         ###   ########.fr       */
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


std::string to_string_98(int number) {
    std::ostringstream oss;
    oss << number;
    return oss.str();
}

Zombie *zombieHorde(int N, const std::string &name)
{
    if (N <= 0)
    {
        std::cerr << "Error: the horde size be greather than 0 " << std::endl;
    }
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name + "_" + to_string_98(i + 1));
    }

    return (horde);
}