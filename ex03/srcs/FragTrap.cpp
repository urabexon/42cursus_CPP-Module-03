/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:35 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:10:56 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// コンストラクタ(FragTrapオブジェクトを初期化)
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " Ready for action!" << std::endl;
}

// コピーコンストラクタ(オブジェクトのコピーが作成される際に呼び出される)
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap " << _name << " copied!" << std::endl;
}

// 代入演算子のオーバーロード(オブジェクトの代入が行われる際に呼ばれる)
FragTrap& FragTrap::operator=(const FragTrap &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "FragTrap " << _name << " assigned!" << std::endl;
	return *this;
}

// デストラクタ
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " Destructed!" << std::endl;
}

// 指定されたターゲットに対して攻撃を行う関数
void FragTrap::attack(const std::string& target) {
	// エナジーポイントとヒットポイントが十分かチェック
	if (_energyPoints > 0 && _hitPoints > 0) {
		// 攻撃の結果出力してから、--でエナジーポイントを減らす
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		// 攻撃不能時のメッセージ
		std::cout << "FragTrap " << _name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

// ハイタッチを要求する関数
void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
