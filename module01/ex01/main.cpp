/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/17 15:35:39 by ahhammou         ###   ########.fr       */
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

/*for checking 
Zombie* zombieHorde( int N, std::string name )
{
	int i;
	std::string newname;
	Zombie *hord[N];

	i = 0;
	while (i < N)
	{
		newname = name + std::to_string(i);
		hord[i] = newZombie(name);
		i++;
	}
	return (*hord);
}
*/


Zombie* zombieHorde( int N, std::string name )
{
	int i;
	Zombie *hord[N];

	i = 0;
	while (i < N)
	{
		hord[i] = newZombie(name);
		i++;
	}
	return (*hord);
}

int main()
{
	Zombie *a;
	
	a = zombieHorde(5, "ahmad");
	a->~Zombie();
}