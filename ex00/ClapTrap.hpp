/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:52 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 16:56:42 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <string>

# define DEFAULT_HEALTH 10
# define DEFAULT_ENERGY 10
# define DEFAULT_DAMAGE 0

class ClapTrap {
	private:
		std::string _name;
		int _health;
		int _energy;
		int _damage;
		
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap( void );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName( void ) const;
		int			getHealth( void ) const;
		int			getEnergy( void ) const;
		int			getDamage( void ) const;

		void		setName( const std::string name );
		void		setHealth( const int health );
		void		setEnergy( const int energy );
		void		setDamage( const int damage );
};

#endif