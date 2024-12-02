/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:38:21 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 19:13:08 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



// Cambiar el arma de HumanB
// Este ejemplo demuestra cómo HumanB puede cambiar de arma durante la ejecución:

// int main() {
//     Weapon sword("sword");
//     Weapon bow("bow");

//     HumanB jim("Jim");
//     jim.attack(); // Sin arma inicialmente

//     jim.setWeapon(sword);
//     jim.attack(); // Jim ahora usa la espada

//     jim.setWeapon(bow);
//     jim.attack(); // Jim ahora usa el arco

//     return 0;
// }


// Compartir un arma entre HumanA y HumanB
// En este caso, mostramos cómo HumanA y HumanB pueden compartir la misma arma, reflejando los cambios en tiempo real:

int main()
{
    Weapon club("club");

    HumanA bob("Bob", club);
    HumanB jim("Jim");
    jim.setWeapon(club);

    bob.attack(); // Bob usa el club
    jim.attack(); // Jim también usa el club

    club.setType("axe"); // Cambiar el tipo del arma
    bob.attack(); // Ambos ven el cambio
    jim.attack();

    return 0;
}

// Uso de múltiples armas
// Aquí exploramos cómo múltiples armas pueden coexistir y cómo los cambios afectan a cada humano:


// int main() {
//     Weapon sword("sword");
//     Weapon shield("shield");

//     HumanA alice("Alice", sword);
//     HumanB charlie("Charlie");

//     alice.attack(); // Alice usa la espada
//     charlie.setWeapon(shield);
//     charlie.attack(); // Charlie usa el escudo

//     shield.setType("magic shield");
//     charlie.attack(); // Charlie ve el cambio en el escudo

//     sword.setType("flaming sword");
//     alice.attack(); // Alice ve el cambio en la espada

//     return 0;
// }

// Sin cambios en el arma compartida
// Este ejemplo muestra que HumanA no puede cambiar el arma asignada directamente:


// int main() {
//     Weapon club("club");
//     HumanA bob("Bob", club);

//     bob.attack();

//     // Intentar asignar otra arma no es posible
//     // Weapon sword("sword");
//     // bob.weapon = sword; // Esto no compila porque `weapon` es una referencia constante.

//     club.setType("axe"); // Solo podemos cambiar el tipo del arma existente
//     bob.attack();

//     return 0;
// }

// Sin arma para HumanB
// Este ejemplo demuestra qué sucede cuando HumanB no tiene un arma asignada:

// int main() {
//     HumanB jim("Jim");
//     jim.attack(); // Jim no tiene un arma

//     Weapon club("club");
//     jim.setWeapon(club);
//     jim.attack(); // Jim ahora tiene un arma

//     return 0;
// }


// Crear múltiples instancias de humanos
// Este ejemplo crea varios HumanA y HumanB para mostrar cómo se comportan con diferentes armas:

// int main() {
//     Weapon sword("sword");
//     Weapon bow("bow");

//     HumanA alice("Alice", sword);
//     HumanA bob("Bob", bow);

//     HumanB charlie("Charlie");
//     HumanB dave("Dave");

//     charlie.setWeapon(sword);
//     dave.setWeapon(bow);

//     alice.attack();
//     bob.attack();
//     charlie.attack();
//     dave.attack();

//     sword.setType("enchanted sword");
//     bow.setType("crossbow");

//     alice.attack();
//     bob.attack();
//     charlie.attack();
//     dave.attack();

//     return 0;
// }

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