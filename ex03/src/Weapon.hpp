/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:18:21 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 16:18:24 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>


class Weapon
{
    private:
        std::string type;
    
    public:
        Weapon();
        Weapon(const std::string &type);
        Weapon(const Weapon &other);
        Weapon &operator= (const Weapon &other);
        ~Weapon();
    const std::string &getType() const;
    void setType(const std::string &newType);
};

#endif