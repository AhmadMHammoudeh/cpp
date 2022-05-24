/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/24 22:39:33 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name){
	Zombie *add;

	add = new Zombie;
	add->nameing(name);
	add->announce();
	return (add);
}

void randomChump(std::string name){
	Zombie *add;

	add = new Zombie;
	add->nameing(name);
	add->announce();
}

int main()
{
	Zombie *a;
	
	a = newZombie("ahmad");
	randomChump("IaMzOmBiE");
	a->~Zombie();
}
