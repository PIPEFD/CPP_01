/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 19:46:05 by pipe              #+#    #+#             */
/*   Updated: 2024/12/05 13:25:07 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main ()
{
    Zombie *heapZombie = newZombie("HeapZombie");
    Zombie *heapZombie2 = newZombie("Heap2Zombie");
    
    heapZombie->annouce();
    heapZombie2->annouce();

    randomChump("StackZombie");
    randomChump("StackZombieeeee");

    
    delete heapZombie;
    delete heapZombie2;


    return (0);
}