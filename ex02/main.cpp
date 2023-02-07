/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 16:22:09 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap E = FragTrap("Kita");
	std::cout << E.getName() << std::endl;
	std::cout << E.getAttackDamage() << std::endl;
	std::cout << E.getEnergyPoints() << std::endl;
	std::cout << E.getHitPoints() << std::endl;
	E.highFivesGuys();
	return (0);
}
