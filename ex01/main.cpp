/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 17:05:19 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

int main() {
    // Test ScavTrap default constructor
    ScavTrap scav1;
    std::cout << "ScavTrap Name: " << scav1.getName() << std::endl;

    // Test ScavTrap constructor with name
    ScavTrap scav2("Scavvy");
    std::cout << "ScavTrap Name: " << scav2.getName() << std::endl;

    // Test attack method
    scav2.attack("target1");

    // Test takeDamage method from ClapTrap
    scav2.takeDamage(20);
    std::cout << "ScavTrap Health after damage: " << scav2.getHealth() << std::endl;

    // Test beRepaired method from ClapTrap
    scav2.beRepaired(10);
    std::cout << "ScavTrap Health after repair: " << scav2.getHealth() << std::endl;

    // Test guardGate method specific to ScavTrap
    scav2.guardGate();

    // Test copy constructor
    ScavTrap scav3(scav2);
    std::cout << "Copied ScavTrap Name: " << scav3.getName() << std::endl;

    // Test assignment operator
    scav1 = scav3;
    std::cout << "Assigned ScavTrap Name: " << scav1.getName() << std::endl;

    // Test energy depletion and attack prevention
    for (int i = 0; i < 55; ++i) {
        scav2.attack("target2");  // Should stop attacking when energy is 0
    }

    // Test destruction order when objects go out of scope
    return 0;
}