/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:17:20 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/08 13:22:08 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap A("A");

	A.whoAmI();
	std::cout << "ClapName: " << A.ClapTrap::getName() << std::endl;
	std::cout << "Hitpoint: " << A.getHitPoints() << std::endl;
	std::cout << "EnergyPoint: " << A.getEnergyPoints() << std::endl;
	std::cout << "AttackDamage: " << A.getAttackDamage() << std::endl;
	A.attack("Some random trap");
	return (0);
}
