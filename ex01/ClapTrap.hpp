/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:38:09 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 14:54:53 by jinholee         ###   ########.fr       */
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
	ClapTrap(const std::string);
	ClapTrap(const ClapTrap&);
	~ClapTrap();

	ClapTrap&			operator=(const ClapTrap&);

	void				attack(const std::string&);
	void				takeDamage(unsigned int);
	void				beRepaired(unsigned int);

	void				setName(const std::string& name) { this->_name = name; };
	void				setHitPoints(int n) { this->_hitPoints = n; };
	void				setEnergyPoints(int n) { this->_energyPoints = n; };
	void				setAttackDamage(int n) { this->_attackDamage = n; };
	const std::string&	getName(void) const;
	int					getHitPoints(void) const;
	int					getEnergyPoints(void) const;
	int					getAttackDamage(void) const;
};

#endif