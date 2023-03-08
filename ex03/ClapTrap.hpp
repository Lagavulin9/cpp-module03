/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:38:09 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/08 18:32:27 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# define UNSIGNED_INTMAX 4294967295

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	static const int	DEFAULT_HIT_POINT = 10;
	static const int	DEFAULT_ENERGY_POINT = 10;
	static const int	DEFAULT_ATTACK_DAMAGE = 0;
	
	std::string			_name;
	unsigned int		_hitPoints;
	unsigned int		_energyPoints;
	unsigned int		_attackDamage;
private:

public:
	ClapTrap();
	ClapTrap(const std::string);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	ClapTrap&			operator=(const ClapTrap&);

	void				attack(const std::string&);
	void				takeDamage(unsigned int);
	void				beRepaired(unsigned int);

	void				setName(const std::string&);
	void				setHitPoints(unsigned int);
	void				setEnergyPoints(unsigned int);
	void				setAttackDamage(unsigned int);
	const std::string&	getName(void) const;
	int					getHitPoints(void) const;
	int					getEnergyPoints(void) const;
	int					getAttackDamage(void) const;
};

#endif
