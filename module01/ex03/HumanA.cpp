/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:30:31 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/10 18:58:22 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout<< this->Name << " attacks with their " << this->Wep->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon wep)
{
	this->Wep = &wep;
}

HumanA::HumanA(std::string name, Weapon wep)
{
	this->Wep = &wep;
	this->Name = name;
}