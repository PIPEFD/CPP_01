/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:18:19 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 18:52:00 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() :  type("Default weapon ")
{
    
}
Weapon::Weapon(const std::string &type) :type(type)
{
    
}

Weapon::Weapon(const Weapon &other) : type(other.type)
{
    
}

Weapon &Weapon::operator=(const Weapon &other)
{
    if (this != &other)
    {
        type =  other.type;
    }
    return (*this);
}

Weapon::~Weapon()
{
    
}

const std::string &Weapon::getType() const
{
    return (type);
}

void Weapon::setType(const std::string &newType)
{
    type =  newType;
}