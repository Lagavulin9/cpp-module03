/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:04:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/26 20:47:24 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setAttackDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	this->setName(name);
	this->setAttackDamage(30);
	this->setEnergyPoints(100);
	this->setHitPoints(100);
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
