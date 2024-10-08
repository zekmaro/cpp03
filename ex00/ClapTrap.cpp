/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:49 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 18:12:10 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_health(DEFAULT_HEALTH),
	_energy(DEFAULT_ENERGY), 
	_damage(DEFAULT_DAMAGE) {}
	
ClapTrap::ClapTrap( std::string name ) {
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap& other) :
	_name(other.getName()),
	_health(other.getHealth()), 
	_energy(other.getEnergy()),
	_damage(other.getDamage()) {}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->setName(other.getName());
		this->setHealth(other.getHealth());
		this->setEnergy(other.getEnergy());
		this->setDamage(other.getDamage());
	}
	return *this;
}

ClapTrap::~ClapTrap( void ) {}

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
	std::cout << "ClapTrap " << this->getName() << "attacks " << target << ", causing " << this->getDamage() << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	
}

void ClapTrap::beRepaired( unsigned int amount ) {
	
}