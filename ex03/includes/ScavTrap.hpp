/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:25 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:09:51 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// ClapTrapクラスから継承し、ScavTrapクラスを作成する
class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string name);                  // コンストラクタ
		ScavTrap(const ScavTrap &copy);              // コピーコンストラクタ
		ScavTrap& operator=(const ScavTrap &copy); // 代入演算子のオーバーロード
		~ScavTrap();                                 // デストラクタ

		// アクション定義
		void attack(const std::string& target); // 攻撃
		void guardGate();						// ゲートキーパーモード
};

#endif
