/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/29 20:59:52 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

int main()
{
	Animal *animal[10];
	for (int i = 0; i < 10; i++)
	{
		animal[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		delete (animal[i]);
	}
	Cat* j = new Cat();
	// Dog dog("Dog");
	j->makeSound();
	j->setIdea("my Ideas");
	j->setIdea("my Ideas 2");
	j->setIdea("my Ideas 3");
	// j->setIdea("my Ideas2");
	std::cout << j->getIdea(0) << std::endl;
	std::cout << j->getIdea(1) << std::endl;
	std::cout << j->getIdea(2) << std::endl;
	Cat catsecond =Cat(*j);
	// catsecond = j;
	delete (j);
	std::cout << catsecond.getIdea(2) << std::endl;
	catsecond.makeSound();
	Dog* a = new Dog();
	// Dog dog("Dog");
	a->makeSound();
	a->setIdea("my Ideas");
	a->setIdea("my Ideas 2");
	a->setIdea("my Ideas 3");
	// j->setIdea("my Ideas2");
	std::cout << a->getIdea(0) << std::endl;
	std::cout << a->getIdea(1) << std::endl;
	std::cout << a->getIdea(2) << std::endl;
	Dog Dogsecond = Dog(*a);
	// Dogsecond = j;
	delete (a);
	std::cout << Dogsecond.getIdea(2) << std::endl;
	Dogsecond.makeSound();
	 // dog.makeSound();
}
