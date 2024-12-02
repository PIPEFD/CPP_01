/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:18:16 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 16:10:29 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string.h>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    
    public:
        HumanB();
        HumanB(const std::string &name);
        HumanB(const HumanB& other);
        HumanB& operator=(const HumanB& other);
        ~HumanB();
        
        void setWeapon(Weapon &weapon);
        void attack()const;
};


#endif