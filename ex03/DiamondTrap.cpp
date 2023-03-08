/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:34:34 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/08 13:21:27 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	DiamondTrap::ClapTrap(),
	DiamondTrap::ScavTrap(),
	DiamondTrap::FragTrap()
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	std::string	clapname = ClapTrap::getName();
	this->_name = clapname.append("_clap_name");
	this->setHitPoints(FragTrap::DEFAULT_HIT_POINT);
	this->setEnergyPoints(ScavTrap::DEFAULT_ENERGY_POINT);
	this->setAttackDamage(FragTrap::DEFAULT_ATTACK_DAMAGE);
}

DiamondTrap::DiamondTrap(const std::string& name):
	DiamondTrap::ClapTrap(name),
	DiamondTrap::ScavTrap(name),
	DiamondTrap::FragTrap(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	std::string	clapname = ClapTrap::getName();
	this->_name = clapname.append("_clap_name");
	this->setHitPoints(FragTrap::DEFAULT_HIT_POINT);
	this->setEnergyPoints(ScavTrap::DEFAULT_ENERGY_POINT);
	this->setAttackDamage(FragTrap::DEFAULT_ATTACK_DAMAGE);
}

DiamondTrap::DiamondTrap(const DiamondTrap&)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	this->setAttackDamage(ref.getAttackDamage());
	this->setEnergyPoints(ref.getEnergyPoints());
	this->setHitPoints(ref.getHitPoints());
	this->setName(ref.getName());
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}
