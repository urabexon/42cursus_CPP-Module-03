/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:13 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 23:36:14 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamondbot("DT_4");

	diamondbot.attack("target1");
	diamondbot.takeDamage(30);
	diamondbot.beRepaired(20);
	diamondbot.whoAmI();
	return 0;
}
