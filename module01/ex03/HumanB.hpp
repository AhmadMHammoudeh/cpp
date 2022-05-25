/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:21 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 04:38:54 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <cctype>
#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon *Wep;
	std::string Name;
	public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon wep);
};


#endif
