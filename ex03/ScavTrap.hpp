/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:18:58 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 16:23:52 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	private:
		bool _gate_keeper_mode;

	public:
		ScavTrap( void );
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap( void );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif // SCAVTRAP_HPP