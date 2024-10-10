/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:43:28 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 16:36:35 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( void ) :
	ClapTrap("FragTrap", 100, 100, 30) {
	std::cout << "FragTrap was default constructed!" << std::endl;
}
	
FragTrap::FragTrap( const std::string& name ) :
	ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap was constructed with name parameter!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other) :
	ClapTrap(other.getName(),
			other.getHealth(),
			other.getEnergy(),
			other.getDamage()) {
	std::cout << "FragTrap was copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHealth(other.getHealth());
		this->setEnergy(other.getEnergy());
		this->setDamage(other.getDamage());
	}
	std::cout << "A copy assignment operator overload called for FragTrap!" << std::endl;
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap was destroyed!" << std::endl;
}

void FragTrap::attack( const std::string& target ) {
	if (this->_health <= 0 ) {
		std::cout << "FragTrap " << this->getName() << " cant attack. It's dead!" << std::endl;
		return ;
	}
	if (this->_energy <= 0 ) {
		std::cout << "FragTrap " << this->getName() << " cant attack. It has no energy!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
	this->_energy--;
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "Wanna do a high five!?" << std::endl;
}