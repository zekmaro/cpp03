/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:05:13 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 15:28:51 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name", 100, 50, 30), FragTrap(), ScavTrap() {
	_name = "default_diamond_trap_name";
	std::cout << "DiamondTrap was default constructed!" << std::endl;
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Hello! Im DiamondTrap " << this->_name << "my base class is ClapTrap " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap was destroyed!" << std::endl;
}