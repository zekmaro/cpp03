/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:05:13 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 17:35:44 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() :
	ClapTrap("DiamondTrap_clap_name", 100, 50, 30),
	FragTrap(),
	ScavTrap() {
	std::cout << "DiamondTrap was default constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name", 100, 50, 30),
	FragTrap(name),
	ScavTrap(name),
	_name(name) {
	std::cout << "DiamondTrap was default constructed!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other) :
	ClapTrap(other.getName(),
			other.getHealth(),
			other.getEnergy(),
			other.getDamage()), 
	FragTrap(other.getName()),
	ScavTrap(other.getName()),
	_name(other.getName()) {
	std::cout << "DiamondTrap was copy constructed!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHealth(other.getHealth());
		this->setEnergy(other.getEnergy());
		this->setDamage(other.getDamage());
	}
	std::cout << "A copy assignment operator overload called for DiamondTrap!" << std::endl;
	return *this;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void) {
	std::cout << "Hello! Im DiamondTrap " << this->_name << " my base class is ClapTrap " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap was destroyed!" << std::endl;
}