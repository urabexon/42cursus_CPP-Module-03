/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:08:44 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/11 19:34:31 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// デフォルトコンストラクタ
ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

// 引数をとるコンストラクタ
ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << this->_name << " has been assembled! Ready for action!" << std::endl;
}

// コピーコンストラクタ
ClapTrap::ClapTrap(const ClapTrap &copy) {
	
}

// 代入演算子のオーバーロード
ClapTrap& ClapTrap::operator = (const ClapTrap &copy) {
	
}

// デストラクタ
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " Destructed!" << std::endl; 
}

// 指定されたターゲットに対して攻撃を行う関数
void ClapTrap::attack(const std::string& target) {
	// エナジーポイントとヒットポイントが十分かチェック
	if (_energyPoints > 0 && _hitPoints > 0) {
		// 攻撃の結果出力してから、--でエナジーポイントを減らす
		std::cout << "ClapTrap " << _name << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		// 攻撃不能時のメッセージ
		std::cout << "ClapTrap " << _name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

// 指定されたダメージ量を受けて、ヒットポイントを減らす関数
void ClapTrap::takeDamage(unsigned int amount) {
	// 受けたダメージがヒットポイントを上回る場合は0,そうでなければ受けたダメージ文だけヒットポイントを減らす
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " point of damage!" << std::endl;
}

// ヒットポイントを回復する関数
void ClapTrap::beRepaired(unsigned int amount) {
	// エナジーポイントとヒットポイントが十分かチェック
	if (_energyPoints > 0 && _hitPoints > 0) {
		_hitPoints += amount; // ヒットポイント回復
		_energyPoints--;      // 回復後にエナジーポイントを減らす
		std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
	} else {
		// 回復不可能のメッセージ
		std::cout << "ClapTrap " << _name << " cannot be repaired, insufficient energy or hit points!" << std::endl;
	}
}
