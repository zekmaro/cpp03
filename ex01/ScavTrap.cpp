/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:18:56 by anarama           #+#    #+#             */
/*   Updated: 2024/10/09 16:50:54 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( void ) :
	ClapTrap("ScavTrap"),
	_guarding_gate(false) {
	_health = 100;
    _energy = 50;
    _damage = 20;
	std::cout << "ScavTrap was default constructed!" << std::endl;
}
	
ScavTrap::ScavTrap( std::string name ) :
	ClapTrap(name), 
	_guarding_gate(false) {
	_health = 100;
    _energy = 50;
    _damage = 20;
	std::cout << "ScavTrap was constructed with name parameter!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) :
	_name(other.getName()),
	_health(other.getHealth()), 
	_energy(other.getEnergy()),
	_damage(other.getDamage()) {
	std::cout << "ClapTrap was copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHealth(other.getHealth());
		this->setEnergy(other.getEnergy());
		this->setDamage(other.getDamage());
	}
	std::cout << "A copy assignment operator overload called for ClapTrap!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap was destroyed!" << std::endl;
}