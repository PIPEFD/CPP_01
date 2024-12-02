/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:18:13 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 18:18:37 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"


HumanA::HumanA(const std::string &name, Weapon &weapon): name (name), weapon(weapon)
{
    
}
HumanA::~HumanA()
{
    
}

void HumanA::attack() const
{
    std::cout << name << "Attacks with their: " << weapon.getType() << std::endl;
}
