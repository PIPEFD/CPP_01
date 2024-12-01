/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:49:10 by pipe              #+#    #+#             */
/*   Updated: 2024/12/01 22:49:50 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <cstdlib> // Para std::itoa en sistemas que lo soportan

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