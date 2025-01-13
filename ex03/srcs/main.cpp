/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:13 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:00:35 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap diamondbot("DT_4");
	//DiamondTrap& diamondbot2 = diamondbot;
	//ClapTrap* diamondbot3 = new DiamondTrap("test_bot");

	diamondbot.attack("target1");
	diamondbot.takeDamage(30);
	diamondbot.beRepaired(20);
	diamondbot.whoAmI();
	
	//diamondbot2.attack("target2");
	//diamondbot2.takeDamage(30);
	//diamondbot2.beRepaired(20);

	//diamondbot3->attack("target3");
	//diamondbot3->takeDamage(30);
	//diamondbot3->beRepaired(20);
	return 0;
}
