/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:18:56 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 16:28:15 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) :
	ClapTrap("ScavTrap", 100, 50, 20) {
	_gate_keeper_mode = false;
	std::cout << "ScavTrap was default constructed!" << std::endl;
}
	
ScavTrap::ScavTrap( const std::string& name ) :
	ClapTrap(name, 100, 50, 20) {
	_gate_keeper_mode = false;
	std::cout << "ScavTrap was constructed with name parameter!" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other) :
	ClapTrap(other.getName(), other.getHealth(), other.getEnergy(), other.getDamage()) {
	_gate_keeper_mode = false;
	std::cout << "ScavTrap was copy constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHealth(other.getHealth());
		this->setEnergy(other.getEnergy());
		this->setDamage(other.getDamage());
	}
	std::cout << "A copy assignment operator overload called for ScavTrap!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap was destroyed!" << std::endl;
}

void ScavTrap::attack( const std::string& target ) {
	if (this->_health <= 0 ) {
		std::cout << "ScavTrap " << this->getName() << " cant attack. It's dead!" << std::endl;
		return ;
	}
	if (this->_energy <= 0 ) {
		std::cout << "ScavTrap " << this->getName() << " cant attack. It has no energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
	this->_energy--;
}

void ScavTrap::guardGate( void ) {
	if (this->_gate_keeper_mode == false) {
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
		_gate_keeper_mode = true;
	}
}