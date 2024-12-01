/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:35:54 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 22:47:16 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string.h>
#include <iostream>
#include <sstream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(const std::string &name);
        ~Zombie();

        void setName(const std::string &name);
        void announce() const;
    
};

#endif