/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:45:51 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:09:08 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);                  // コンストラクタ
		ClapTrap(const ClapTrap &copy);              // コピーコンストラクタ
		ClapTrap& operator=(const ClapTrap &copy); // 代入演算子のオーバーロード
		~ClapTrap();                                 // デストラクタ

		// アクション定義
		void attack(const std::string& target);	// 攻撃
		void takeDamage(unsigned int amount);	// ダメージを受ける 
		void beRepaired(unsigned int amount);	// 回復
		
	protected:						// protectedに変更して、派生クラスからアクセス可能にする
		std::string _name;			// 名前
		unsigned int _hitPoints;	// ヒットポイント
		unsigned int _energyPoints;	// エナジーポイント
		unsigned int _attackDamage;	// 攻撃力
	
};

#endif
