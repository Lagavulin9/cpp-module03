/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:38:12 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 15:26:12 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
protected:
	static const int DEFAULT_HIT_POINT = 100;
	static const int DEFAULT_ENERGY_POINT = 50;
	static const int DEFAULT_ATTACK_DAMAGE = 20;
private:
	
public:
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap&);
	void		guardGate(void);
	void		attack(const std::string&);
};

#endif
