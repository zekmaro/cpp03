/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:49 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 16:57:28 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :	_health(DEFAULT_HEALTH),
								_energy(DEFAULT_ENERGY), 
								_damage(DEFAULT_DAMAGE) {}
ClapTrap::ClapTrap( std::string name ) {
	this->_name = name;
}

// ClapTrap::ClapTrap( const ClapTrap& other) {}
// ClapTrap& operator=(const ClapTrap& other);
ClapTrap::~ClapTrap( void ) {}

std::string	ClapTrap::getName( void ) const {
	
}

int			getHealth( void ) const;
int			getEnergy( void ) const;
int			getDamage( void ) const;

void		setName( const std::string name );
void		setHealth( const int health );
void		setEnergy( const int energy );
void		setDamage( const int damage );