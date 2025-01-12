/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:20 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/12 22:44:19 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(std::string name);                     // コンストラクタ
		DiamondTrap(const DiamondTrap &copy);              // コピーコンストラクタ
		DiamondTrap& operator = (const DiamondTrap &copy); // 代入演算子のオーバーロード
		~DiamondTrap();                                    // デストラクタ
		
		// アクション定義
		void attack(const std::string& target); // 攻撃
		void whoAmI();							// WhoAmIを表示

	private:
		std::string _name; //名前
};

#endif
