/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:43:20 by anarama           #+#    #+#             */
/*   Updated: 2024/10/10 16:24:06 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap( void );

		void	attack( const std::string& target );
		void	highFivesGuys( void );
};

#endif //FRAGTRAP_HPP