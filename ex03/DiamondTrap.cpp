/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:34:34 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 16:08:14 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	_name(this->getName())
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name):
	_name(name)
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
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
	std::cout << this->ClapTrap::getName() << std::endl;
}
