/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:38:21 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/05 16:15:58 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


 
    /*  
        //-----------------------------------------------//
        
        Test 1: Changed the gun of HumanB 
        This Example choose how HumanB can change 
        the weapon during the execution.
        //-----------------------------------------------//
             
        Test 2: Share weapon between HumanA and HumanB
        This example shows how HumanA and HumanB can share 
        the same weapon, reflecting changes in real time.

        //---------------------------------------------//

        Test 3: Used multiple weapons   
        Here we explore how multiple weapons can 
        coexist and how changes affect each human:

        //-----------------------------------------------//

        Test 4: No changes in shared weapon
        This example shows that HumanA cant 
        change the shared weapon directly:

        //-----------------------------------------------//
        
        Test 5: Not assigned weapon for HumanB
        This example demonstrates what happens 
        when HumanB does not have a weapon assigned:

        //-----------------------------------------------//
        
        Test 6: Create multiple instances of humans
        This example creates several HumanA and HumanB 
        instances to show how they behave with different weapons:
        
        //-----------------------------------------------//        
    */

int main() {

    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 1: Changed the gun of HumanB" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    {
    Weapon sword("sword");
    Weapon bow("bow");

    HumanB jim("Jim");
    jim.attack();

    jim.setWeapon(sword);
    jim.attack();

    jim.setWeapon(bow);
    jim.attack();
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 2: Share weapon between HumanA and HumanB" << std::endl;
    std::cout << "----------------------------------" << std::endl;


    {
    Weapon club("club");

    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);

    bob.attack();
    jim.attack();

    club.setType("axe");
    bob.attack();
    jim.attack();
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 3: Used multiple weapons" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    {
    Weapon sword("sword");
    Weapon shield("shield");

    HumanA alice("Alice", sword);
    HumanB charlie("Charlie");

    alice.attack();
    charlie.setWeapon(shield);
    charlie.attack();

    shield.setType("magic shield");
    charlie.attack();

    sword.setType("flaming sword");
    alice.attack();
    }
    
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 4: No changes in shared weapon" << std::endl; 
    std::cout << "----------------------------------" << std::endl;


    {
    Weapon club("club");
    HumanA marck("Bob", club);
    marck.attack();
    Weapon sword("sword");
    // marck.weapon = sword; 
    club.setType("axe");
    marck.attack();
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 5: Not assigned weapon for HumanB" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    {
    HumanB carl("Jim");
    carl.attack();

    Weapon club("club");
    carl.setWeapon(club);
    carl.attack();
    }
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Test 6: Create multiple instances of humans" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    {
    Weapon sword("sword");
    Weapon bow("bow");

    HumanA alice("Alice", sword);
    HumanA bob("Bob", bow);

    HumanB charlie("Charlie");
    HumanB dave("Dave");

    charlie.setWeapon(sword);
    dave.setWeapon(bow);

    alice.attack();
    bob.attack();
    charlie.attack();
    dave.attack();

    sword.setType("enchanted sword");
    bow.setType("crossbow");

    alice.attack();
    bob.attack();
    charlie.attack();
    dave.attack();
    }
    
    std::cout << "----------------------------------" << std::endl;
    std::cout << " End of tests" << std::endl;

    return (0);
}





// int main()
// {
//     {
//     Weapon club = Weapon("crude spiked club");
//     HumanA bob("Bob", club);
//     bob.attack();
//     club.setType("some other type of club");
//     bob.attack();
//     }
//     {
//     Weapon club = Weapon("crude spiked club");
//     HumanB jim("Jim");
//     jim.setWeapon(club);
//     jim.attack();
//     club.setType("some other type of club");
//     jim.attack();
//     }
//     return (0);
// }