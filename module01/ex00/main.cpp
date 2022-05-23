/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/17 15:11:39 by ahhammou         ###   ########.fr       */
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
	randomChump("Bosi");
	a->~Zombie();
}