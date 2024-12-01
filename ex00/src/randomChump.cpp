/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:43:45 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 20:05:00 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump(std::string name)
{
    Zombie tempZombie(name);
    std:: cout << name << "here" << std::endl;
    tempZombie.annouce();
}