/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:04:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/08 18:35:57 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
	FragTrap::ClapTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_hitPoints = FragTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = FragTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = FragTrap::DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(const std::string &name):
	FragTrap::ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->_hitPoints = FragTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = FragTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = FragTrap::DEFAULT_ATTACK_DAMAGE;
}

FragTrap::FragTrap(const FragTrap& ref):
	FragTrap::ClapTrap(ref)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << "FragTrap Copy Operator called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me an high five guys!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	std::cout << "FragTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}
