/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 16:16:18 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A = ClapTrap("Bocchi");
	ClapTrap B = ClapTrap("Nijika");
	ClapTrap C = ClapTrap(B);
	ClapTrap D = A;

	std::cout << A.getName() << std::endl;
	std::cout << B.getName() << std::endl;
	std::cout << C.getName() << std::endl;
	std::cout << D.getName() << std::endl;
	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(1);
	std::cout << B.getEnergyPoints() << std::endl;
	std::cout << B.getHitPoints() << std::endl;
	return (0);
}
