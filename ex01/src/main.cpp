/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:52:47 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 20:55:37 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde (int N, const std::string &name);

int main()
{
    int hordeSize = 5;

    Zombie *horde = zombieHorde(hordeSize, "Zombie");
    
    if (horde)
    {
        for (int i = 0; i < hordeSize; ++i)
        {
            horde[i].announce();
        }
        delete[] horde;
    }
    return (0);
}