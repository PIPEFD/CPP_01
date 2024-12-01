/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:30:47 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 19:30:59 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string.h>
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
    Zombie(std::string name);
    void annouce() const;
    ~Zombie();
    
};

#endif
