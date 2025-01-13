/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:22:29 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:11:27 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// コンストラクタ(基本クラスClapTrapのコンストラクタを呼び出して属性を初期化する)
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " Ready for action!" << std::endl;
}

// コピーコンストラクタ(オブジェクトのコピーが作成される際に呼び出される)
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap " << _name << " copied!" << std::endl;
}

// 代入演算子のオーバーロード(オブジェクトの代入が行われる際に呼ばれる)
ScavTrap& ScavTrap::operator=(const ScavTrap &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "ScavTrap " << _name << " assigned!" << std::endl;
	return *this;
}

// デストラクタ
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " Destructed!" << std::endl;
}

// 指定されたターゲットに対して攻撃を行う関数
void ScavTrap::attack(const std::string& target) {
	// エナジーポイントとヒットポイントが十分かチェック
	if (_energyPoints > 0 && _hitPoints > 0) {
		// 攻撃の結果出力してから、--でエナジーポイントを減らす
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		// 攻撃不能時のメッセージ
		std::cout << "ScavTrap " << _name << " cannot attack, insufficient energy or hit points!" << std::endl;
	}
}

// ゲートキーパーのモードに入ることを表示する関数
void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
