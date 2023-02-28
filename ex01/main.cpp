/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/26 19:30:18 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap E = ScavTrap("Ryo");
	std::cout << E.getName() << std::endl;
	std::cout << E.getAttackDamage() << std::endl;
	std::cout << E.getEnergyPoints() << std::endl;
	std::cout << E.getHitPoints() << std::endl;
	E.guardGate();

	return (0);
}
