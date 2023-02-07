/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 16:12:12 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	A;

	A.whoAmI();
	std::cout << A.FragTrap::getHitPoints() << std::endl;
	std::cout << A.ScavTrap::getEnergyPoints() << std::endl;
	std::cout << A.FragTrap::getAttackDamage() << std::endl;
	A.ScavTrap::attack("A");
	return (0);
}
