/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hurabe <hurabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 21:55:32 by hurabe            #+#    #+#             */
/*   Updated: 2025/01/13 18:10:50 by hurabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// コンストラクタ
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " Ready for action!" << std::endl;
}

// コピーコンストラクタ(オブジェクトのコピーが作成される際に呼び出される)
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name){
	std::cout << "DiamondTrap " << _name << " copied!" << std::endl;
}

// 代入演算子のオーバーロード(オブジェクトの代入が行われる際に呼ばれる)
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "DiamondTrap " << _name << " assigned!" << std::endl;
	return *this;
}

// デストラクタ
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " Destructed!" << std::endl;
}

// 指定されたターゲットに対して攻撃を行う関数
void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target); // ScatTrapのattackを使用する
}

// DiamondTrapとClapTrapのそれぞれの名前を出力する関数
void DiamondTrap::whoAmI() {
	std::cout << "I am DiamondTrap " << _name << " and my ClapTrap name is " << ClapTrap::_name << "!" << std::endl;
}
