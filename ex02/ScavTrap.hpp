/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:38:12 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 14:57:50 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	
public:
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	~ScavTrap();

	ScavTrap&	operator=(const ScavTrap&);
	void		guardGate(void);
};

#endif
