/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 15:31:37 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap E = ScavTrap("Ryo");
	std::cout << "name: " << E.getName() << std::endl;
	std::cout << "attackDamage: " << E.getAttackDamage() << std::endl;
	std::cout << "energyPoint: " << E.getEnergyPoints() << std::endl;
	std::cout << "hitPoint: " << E.getHitPoints() << std::endl;
	E.attack("Bocchi");
	E.guardGate();

	return (0);
}
