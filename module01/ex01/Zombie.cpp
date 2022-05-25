/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:09:49 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 01:52:27 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::Announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::GetName(void){
	std::cout << this->name;
}

void Zombie::Nameing(std::string name){
	this->name = name;
}
