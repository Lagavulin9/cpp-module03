/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:54:13 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/07 14:59:18 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const std::string&);
	FragTrap(const FragTrap&);
	~FragTrap();

	FragTrap&	operator=(const FragTrap&);
	void	highFivesGuys(void);
};

#endif
