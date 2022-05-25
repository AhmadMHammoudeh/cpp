/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:30:31 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 04:24:38 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const char *Weapon::getType()
{
	return (this->type.c_str());
}

void Weapon::setType(std::string wep)
{
	this->type = wep;
}

Weapon::Weapon(std::string wep)
{
	this->setType(wep);
}