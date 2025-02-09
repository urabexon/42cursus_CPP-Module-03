/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:08:41 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 19:48:24 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	// ClapTrapオブジェクトを作成し、名前を設定する。
	ClapTrap clapbot("CT_1");
	
	// ターゲット1に対して攻撃を行う→ダメージを受ける→回復
	clapbot.attack("target1");
	clapbot.takeDamage(3);
	clapbot.beRepaired(5);
	
	// 再度攻撃→ダメージを受ける→回復
	clapbot.attack("target2");
	clapbot.takeDamage(15);
	clapbot.beRepaired(10);
	return 0;
}
