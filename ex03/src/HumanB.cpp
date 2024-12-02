/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:07:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 18:19:02 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() :name("Unnamed"), weapon(NULL)
{
    
}

HumanB::HumanB(const std::string &name) : name (name), weapon(NULL)
{
    
}

HumanB::HumanB(const HumanB &other) : name(other.name), weapon(other.weapon)
{
    
}

HumanB &HumanB::operator=(const HumanB &other)
{
    if (this != &other)
    {
        name = other.name;
        weapon = other.weapon;
    }
    return (*this);
}

HumanB::~HumanB()
{
    
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << name << " Attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " Has no weapon to attack with " << std::endl;
}