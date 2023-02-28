/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:55:01 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/28 13:16:15 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	ScavTrap::ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name):
	ScavTrap::ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap Constructor called" << std::endl;
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
	this->setAttackDamage(ref.getAttackDamage());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setHitPoints(ref.getHitPoints());
	this->setName(ref.getName());
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName();
	std::cout << " is now in Gate Keeper mode" << std::endl;
}
