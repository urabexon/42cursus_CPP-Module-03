/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:44:59 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 20:45:25 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	// ClapTrap,ScavTrapオブジェクトを作成し、名前を設定する。
	ClapTrap clapbot("CT_1");
	ScavTrap scavbot("ST_2");
	
	// ClapTrapで攻撃を行う→ダメージを受ける→回復
	clapbot.attack("target1");
	clapbot.takeDamage(3);
	clapbot.beRepaired(5);
	
	// ScavTrapで攻撃を行う→ダメージを受ける→回復→ゲートキーパーモード
	scavbot.attack("target2");
	scavbot.takeDamage(15);
	scavbot.beRepaired(10);
	scavbot.guardGate();

	// new,deleteケース
	ClapTrap *test = new ScavTrap("test");
	test->attack("test");
	delete test;
	return 0;
}
