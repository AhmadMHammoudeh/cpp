/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 02:08:54 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie *newZombie(std::string name){
	Zombie *add;

	add = new Zombie;
	add->Nameing(name);
	add->Announce();
	return (add);
}

void	ZombieHorde::announce()
{
	std::cout << this->name << std::endl;
}

Zombie	*ZombieHorde::ZombieHord(int N, std::string name)
{
	int i;
	this->zombies = new Zombie[N];

	i = 0;
	while (i < N)
	{
		this->zombies[i] = *newZombie(name);
		i++;
	}
	return ((this)->zombies);
}

ZombieHorde *create(int n, std::string name)
{
	ZombieHorde *a;
	Zombie *lead;
	a = new ZombieHorde;
	lead = a->ZombieHord(n, name);
	lead->Announce();
	return (a);
}

int main()
{
	ZombieHorde *a;
	
	a = create(5, "ahmad");
	a->~ZombieHorde();
}