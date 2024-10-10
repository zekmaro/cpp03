/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 17:21:47 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

int main() {
    // Test FragTrap default constructor
    FragTrap frag1;
    std::cout << "FragTrap Name: " << frag1.getName() << std::endl;

    // Test FragTrap constructor with name
    FragTrap frag2("Fraggy");
    std::cout << "FragTrap Name: " << frag2.getName() << std::endl;

    // Test attack method
    frag2.attack("target1");

    // Test takeDamage method from ClapTrap
    frag2.takeDamage(20);
    std::cout << "FragTrap Health after damage: " << frag2.getHealth() << std::endl;

    // Test beRepaired method from ClapTrap
    frag2.beRepaired(10);
    std::cout << "FragTrap Health after repair: " << frag2.getHealth() << std::endl;

    // Test high fives
    frag2.highFivesGuys();

    // Test copy constructor
    FragTrap frag3(frag2);
    std::cout << "Copied FragTrap Name: " << frag3.getName() << std::endl;

    // Test assignment operator
    frag1 = frag3;
    std::cout << "Assigned FragTrap Name: " << frag1.getName() << std::endl;

    // Test energy depletion and attack prevention
    for (int i = 0; i < 105; ++i) {
        frag2.attack("target2");  // Should stop attacking when energy is 0
    }

    // Test destruction order when objects go out of scope
    return 0;
}