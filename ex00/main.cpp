/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 16:50:01 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main() {
    // Test default constructor
    ClapTrap clap1;
    std::cout << "ClapTrap Name: " << clap1.getName() << std::endl;

    // Test constructor with name
    ClapTrap clap2("Clappy");
    std::cout << "ClapTrap Name: " << clap2.getName() << std::endl;

    // Test attack
    clap2.attack("target1");

    // Test takeDamage
    clap2.takeDamage(5);
    std::cout << "Health after damage: " << clap2.getHealth() << std::endl;

    // Test beRepaired
    clap2.beRepaired(3);
    std::cout << "Health after repair: " << clap2.getHealth() << std::endl;

    // Test out of energy scenario
    for (int i = 0; i < 10; ++i) {
        clap2.attack("target2");  // Should stop attacking once energy is 0
    }

    // Test death scenario
    clap2.takeDamage(100);
    clap2.attack("target3");      // Shouldn't attack when dead
    clap2.beRepaired(10);         // Shouldn't repair when dead

    return 0;
}
