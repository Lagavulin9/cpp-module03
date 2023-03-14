/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:45:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/14 14:18:24 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = "Default Name";
	this->_hitPoints = ClapTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = ClapTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = ClapTrap::DEFAULT_ATTACK_DAMAGE;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = ClapTrap::DEFAULT_HIT_POINT;
	this->_energyPoints = ClapTrap::DEFAULT_ENERGY_POINT;
	this->_attackDamage = ClapTrap::DEFAULT_ATTACK_DAMAGE;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
	this->_name = ref._name;
	this->_hitPoints = ref._hitPoints;
	this->_energyPoints = ref._energyPoints;
	this->_attackDamage = ref._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	if (this->_hitPoints < amount)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	long	repaired;

	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	this->_energyPoints -= 1;
	repaired = this->_hitPoints + amount;
	if (repaired > UNSIGNED_INTMAX)
		this->_hitPoints = UNSIGNED_INTMAX;
	else
		this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " repaired " << amount;
	std::cout << " points of hitPoints!" << std::endl;
}

void	ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int n)
{
	this->_hitPoints = n;
}

void	ClapTrap::setEnergyPoints(unsigned int n)
{
	this->_energyPoints = n;
}

void	ClapTrap::setAttackDamage(unsigned int n)
{
	this->_attackDamage = n;
}

const std::string&	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}
