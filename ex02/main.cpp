/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 16:16:14 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap E = FragTrap("Kita");
	std::cout << "name: " << E.getName() << std::endl;
	std::cout << "attackDamage: " << E.getAttackDamage() << std::endl;
	std::cout << "energyPoint: " << E.getEnergyPoints() << std::endl;
	std::cout << "hitPoint: " << E.getHitPoints() << std::endl;
	E.highFivesGuys();
	return (0);
}
