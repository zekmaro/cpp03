/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:01 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 17:34:30 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    // Test DiamondTrap default constructor
    DiamondTrap diamond1;
    std::cout << "DiamondTrap Name: " << diamond1.getName() << std::endl;

    // Test DiamondTrap constructor with name
    DiamondTrap diamond2("Diamondy");
    std::cout << "DiamondTrap Name: " << diamond2.getName() << std::endl;
	std::cout << "DiamondTrap health: " << diamond2.getHealth() << std::endl;
	std::cout << "DiamondTrap energy: " << diamond2.getEnergy() << std::endl;
	std::cout << "DiamondTrap damage: " << diamond2.getDamage() << std::endl;

    // Test attack method from ScavTrap
    diamond2.attack("target");

    // Test takeDamage method from ClapTrap
    diamond2.takeDamage(30);
    std::cout << "Health after damage: " << diamond2.getHealth() << std::endl;

    // Test beRepaired method from ClapTrap
    diamond2.beRepaired(10);
    std::cout << "Health after repair: " << diamond2.getHealth() << std::endl;

    // Test special ability (whoAmI)
    diamond2.whoAmI();

    // Test copy constructor
    DiamondTrap diamond3(diamond2);
    std::cout << "Copied DiamondTrap Name: " << diamond3.getName() << std::endl;

    // Test assignment operator
    diamond1 = diamond3;
    std::cout << "Assigned DiamondTrap Name: " << diamond1.getName() << std::endl;

    // Test destruction order when objects go out of scope
    return 0;
}
