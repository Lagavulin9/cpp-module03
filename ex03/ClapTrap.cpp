/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:45:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 15:32:38 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name("Default ClapTrap"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name):
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref):
	_name(ref.getName()),
	_hitPoints(ref.getHitPoints()),
	_energyPoints(ref.getEnergyPoints()),
	_attackDamage(ref.getAttackDamage())
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	this->_name = ref.getName();
	this->_hitPoints = ref.getHitPoints();
	this->_energyPoints = ref.getEnergyPoints();
	this->_attackDamage = ref.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << " causing " << this->_attackDamage;
	std::cout << "points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " took " << amount;
	std::cout << "points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoints || !this->_energyPoints)
		return ;
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name;
	std::cout << " repaired " << amount;
	std::cout << "points of hitPoints!" << std::endl;
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
