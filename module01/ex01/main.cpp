/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:02:44 by ahhammou         ###   ########.fr       */
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
	this->size = N;

	i = 0;
	while (i < N)
	{
		this->zombies[i] = *newZombie(name);
		i++;
	}
	return ((this)->zombies);
}

ZombieHorde::~ZombieHorde()
{
	int i;

	i = 0;
	while (i < size)
	{
		zombies[i].~Zombie();
		i++;
	}
}

ZombieHorde *create(int n, std::string name)
{
	ZombieHorde *a;
	Zombie *lead;
	a = new ZombieHorde;
	lead = a->ZombieHord(n, name);
	std::cout << "\033[1;36mThis is a test for the lead to check that he was created" << std::endl;
	lead->Announce();
	return (a);
}

int main()
{
	ZombieHorde *a;
	std::cout << "\033[1;33m";
	a = create(5, "ahmad");
	std::cout << "\033[1;31mThis is a DESTRUCTIONNNN!!!!" << std::endl;
	a->~ZombieHorde();
}
