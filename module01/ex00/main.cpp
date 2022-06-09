/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:03:06 by ahhammou         ###   ########.fr       */
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
	std::cout << "\033[1;34mRANDOM CHUMP" <<std::endl;
	add->nameing(name);
	add->announce();
	delete (add);
}

int main()
{
	Zombie *a;
	std::cout << "\033[1;33mNew Zombie" <<std::endl;
	a = newZombie("ahmad");
	randomChump("IaMzOmBiE");
	std::cout << "\033[1;33mTHE DESTRUCTION OF New Zombie" << std::endl;
	a->~Zombie();
}
