/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/23 20:21:07 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A = ClapTrap("Bocchi");
	ClapTrap B = ClapTrap("Nijika");
	ClapTrap C = ClapTrap(B);
	ClapTrap D = A;

	std::cout << "A getName(): " << A.getName() << std::endl;
	std::cout << "B getName(): " << B.getName() << std::endl;
	std::cout << "C getName(): " << C.getName() << std::endl;
	std::cout << "D getName(): " << D.getName() << std::endl;
	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(1);
	std::cout << "B getEnergyPoints(): " << B.getEnergyPoints() << std::endl;
	std::cout << "B getHitPoints(): " << B.getHitPoints() << std::endl;
	return (0);
}
