/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:55:01 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/08 18:34:01 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	ScavTrap::ClapTrap()
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_hitPoints = ScavTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = ScavTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = ScavTrap::DEFAULT_ATTACK_DAMAGE;
}

ScavTrap::ScavTrap(const std::string &name):
	ScavTrap::ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_hitPoints = ScavTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = ScavTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = ScavTrap::DEFAULT_ATTACK_DAMAGE;
}

ScavTrap::ScavTrap(const ScavTrap& ref):
	ScavTrap::ClapTrap(ref)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << "ScavTrap Copy Operator called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " is now in Gate Keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	std::cout << "ScavTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}
