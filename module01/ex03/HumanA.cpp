/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:30:31 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 04:31:56 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout<< this->Name << " attacks with their " << this->Wep->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon wep)
{
	this->Wep = &wep;
	this->Name = name;
}