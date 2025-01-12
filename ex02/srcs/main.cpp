/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:23:36 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 21:39:33 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	// FragTrapオブジェクトを作成し、名前を設定する。
	FragTrap fragbot("FG_3");
	
	// FragTrapで攻撃を行う→ダメージを受ける→回復
	fragbot.attack("target1");
	fragbot.takeDamage(20); // ClapTrapクラスから継承
	fragbot.beRepaired(10); // ClapTrapクラスから継承

	// ハイタッチを要求する
	fragbot.highFivesGuys();

	// 再度攻撃する
	fragbot.attack("target2");
	return 0;
}
