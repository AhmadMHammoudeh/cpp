/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:30:31 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 04:46:08 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->Wep)
		std::cout<< this->Name << " attacks with their " << this->Wep->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon wep)
{
	this->Wep = &wep;
}

HumanB::HumanB(std::string name)
{
	this->Name = name;
	this->Wep = NULL;
}