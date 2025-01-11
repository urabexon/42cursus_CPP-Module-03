/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:08:41 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/11 17:32:41 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	// ClapTrapオブジェクトを作成し、名前を設定する。
	ClapTrap robot("CT_1");
	
	// ターゲット1に対して攻撃を行う→ダメージを受ける→修復
	robot.attack("target1");
	robot.takeDamage(3);
	robot.beRepaired(5);
	
	// 再度攻撃→ダメージ受ける→修復
	robot.attack("target2");
	robot.takeDamage(15);
	robot.beRepaired(10);
	return 0;
}
