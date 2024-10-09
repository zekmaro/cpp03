/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:49 by anarama           #+#    #+#             */
/*   Updated: 2024/10/09 12:37:05 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_health(DEFAULT_HEALTH),
	_energy(DEFAULT_ENERGY), 
	_damage(DEFAULT_DAMAGE) {
	std::cout << "ClapTrap was default constructed!" << std::endl;
}
	
ClapTrap::ClapTrap( std::string name ) :
	_health(DEFAULT_HEALTH),
	_energy(DEFAULT_ENERGY), 
	_damage(DEFAULT_DAMAGE),
	_name(name) {
	std::cout << "ClapTrap was constructed with name parameter!" << std::endl;
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

std::string	ClapTrap::getName( void ) const {
	return this->_name;
}

int	ClapTrap::getHealth( void ) const {
	return this->_health;
}

int	ClapTrap::getEnergy( void ) const {
	return this->_energy;
}

int	ClapTrap::getDamage( void ) const {
	return this->_damage;
}

void ClapTrap::setName( const std::string name ) {
	this->_name = name;
}

void ClapTrap::setHealth( const int health ) {
	this->_health = health;	
}

void ClapTrap::setEnergy( const int energy ) {
	this->_energy = energy;
}

void ClapTrap::setDamage( const int damage ) {
	this->_damage = damage;
}


void ClapTrap::attack( const std::string& target ) {
	if (this->_health <= 0 ) {
		std::cout << "ClapTrap " << this->getName() << "is dead!" << std::endl;
		return ;
	}
	if (this->_energy <= 0 ) {
		std::cout << "ClapTrap " << this->getName() << "has no energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << "attacks " << target << ", causing " << this->getDamage() << "points of damage!" << std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_health <= 0 ) {
		std::cout << "ClapTrap " << this->getName() << "is dead!" << std::endl;
		return ;
	}
	if (this->_energy <= 0 ) {
		std::cout << "ClapTrap " << this->getName() << "has no energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << "gets " << amount << " points of damage!" << std::endl;
	this->_health -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_health <= 0 ) {
		std::cout << "ClapTrap " << this->getName() << "is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << "repaires " << amount << "of energy!" << std::endl;
	this->_energy++;
}