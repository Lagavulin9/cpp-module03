/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:44:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 17:10:18 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap A;
	ClapTrap B = ClapTrap("Bocchi");
	ClapTrap C = ClapTrap(B);
	ClapTrap D = B;

	std::cout << A.getName() << std::endl;
	std::cout << B.getName() << std::endl;
	std::cout << C.getName() << std::endl;
	std::cout << D.getName() << std::endl;
	return (0);
}
