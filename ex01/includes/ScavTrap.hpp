/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:45:54 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 19:42:01 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// ClapTrapクラスから継承し、ScavTrapクラスを作成する
class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap& operator = (const ScavTrap &copy);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};

#endif
