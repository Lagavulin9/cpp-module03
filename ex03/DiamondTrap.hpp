/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:05:59 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 15:51:51 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(const std::string&);
	DiamondTrap(const DiamondTrap&);
	~DiamondTrap();

	DiamondTrap&	operator=(const DiamondTrap&);
	void			whoAmI(void);
	void			attack(const std::string&);
};

#endif
