/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 16:26:35 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A = ClapTrap("A");
	ClapTrap B = ClapTrap("B");
	ClapTrap C = ClapTrap(B);
	ClapTrap D = A;

	std::cout << "A Name: " << A.getName() << std::endl;
	std::cout << "B Name: " << B.getName() << std::endl;
	std::cout << "C Name: " << C.getName() << std::endl;
	std::cout << "D Name: " << D.getName() << std::endl;
	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(1);
	std::cout << B.getName() << " EnergyPoints: " << B.getEnergyPoints() << std::endl;
	std::cout << B.getName() << " HitPoints: " << B.getHitPoints() << std::endl;
	A.setAttackDamage(10);
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(1);
	std::cout << B.getName() << " EnergyPoints: " << B.getEnergyPoints() << std::endl;
	std::cout << B.getName() << " HitPoints: " << B.getHitPoints() << std::endl;
	A.setAttackDamage(10);
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(1);
	std::cout << B.getName() << " EnergyPoints: " << B.getEnergyPoints() << std::endl;
	std::cout << B.getName() << " HitPoints: " << B.getHitPoints() << std::endl;
	return (0);
}
