/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:04:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 15:41:07 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
	FragTrap::ClapTrap()
{
	this->setHitPoints(FragTrap::DEFAULT_HIT_POINT);
	this->setEnergyPoints(FragTrap::DEFAULT_ENERGY_POINT);
	this->setAttackDamage(FragTrap::DEFAULT_ATTACK_DAMAGE);
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name):
	FragTrap::ClapTrap(name)
{
	this->setHitPoints(FragTrap::DEFAULT_HIT_POINT);
	this->setEnergyPoints(FragTrap::DEFAULT_ENERGY_POINT);
	this->setAttackDamage(FragTrap::DEFAULT_ATTACK_DAMAGE);
	std::cout << "FragTrap Constructor called" << std::endl;
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
	this->setAttackDamage(ref.getAttackDamage());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setHitPoints(ref.getHitPoints());
	this->setName(ref.getName());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Give me an high five guys!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->getHitPoints() || !this->getEnergyPoints())
		return ;
	std::cout << "FragTrap " << this->getName();
	std::cout << " attacks " << target;
	std::cout << " causing " << this->getAttackDamage();
	std::cout << " points of damage!" << std::endl;
}
