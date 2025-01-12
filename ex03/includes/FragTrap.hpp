/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:23 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 22:26:07 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

// 基底クラスのClapTrapをインクルードする
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);                  // コンストラクタ
		FragTrap(const FragTrap &copy);              // コピーコンストラクタ
		FragTrap& operator = (const FragTrap &copy); // 代入演算子のオーバーロード
		~FragTrap();                                 // デストラクタ

		// アクション定義
		void attack(const std::string& target); // 攻撃
		void highFivesGuys(void);               // ハイタッチ
};

#endif
