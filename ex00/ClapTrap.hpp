/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:38:09 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/31 17:13:06 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap&);

	void		attack(const std::string&);
	void		takeDamage(unsigned int);
	void		beRepaired(unsigned int);

	const std::string&	getName(void) const;
	int					getHitPoints(void) const;
	int					getEnergyPoints(void) const;
	int					getAttackDamage(void) const;
};

#endif
