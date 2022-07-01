/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/29 20:55:22 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"
#include "dog.hpp"

int main()
{
	Cat cat("cat");
	Dog dog("Dog");
	// Animal *cat = new Cat();
	// WrongAnimal *Wrongmeow = new WrongCat();
	// Animal *dog = new Dog();
	
	cat.makeSound();
	dog.makeSound();
	// cat->makeSound();
	WrongCat Wrongmeow("wrongcat");
	Wrongmeow.makeSound();
	// Wrongmeow->makeSound();
	// dog->makeSound();
}
