/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:54:13 by jinholee          #+#    #+#             */
/*   Updated: 2023/03/01 15:40:42 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
protected:
	static const int DEFAULT_HIT_POINT = 100;
	static const int DEFAULT_ENERGY_POINT = 100;
	static const int DEFAULT_ATTACK_DAMAGE = 30;
private:

public:
	FragTrap();
	FragTrap(const std::string&);
	FragTrap(const FragTrap&);
	~FragTrap();

	FragTrap&	operator=(const FragTrap&);

	void	highFivesGuys(void);
	void	attack(const std::string&);
};

#endif
