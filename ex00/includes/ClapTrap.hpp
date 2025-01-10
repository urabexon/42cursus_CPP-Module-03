/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:17:11 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/10 22:39:03 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator = (const ClapTrap &copy);
		~ClapTrap();

		// アクション定義
		void attack(const std::string& target);	// 攻撃
		void takeDamage(unsigned int amount);	// ダメージを受ける 
		void beRepaired(unsigned int amount);	// 修復

	private:
		std::string _name;			// 名前
		unsigned int _hitPoints;	// ヒットポイント
		unsigned int _energyPoints;	// エナジーポイント
		unsigned int _attackDamage;	// 攻撃力
};

#endif
