/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomviw.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:09:49 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/17 14:17:46 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameing(std::string name){
	this->name = name;
}