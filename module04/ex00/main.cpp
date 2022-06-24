/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/22 13:01:59 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"
#include "dog.hpp"

int main()
{
	// Cat cat("cat");
	// WrongCat Wrongmeow("wrongcat");
	// Dog dog("Dog");
	Animal *cat = new Cat();
	WrongAnimal *Wrongmeow = new WrongCat();
	Animal *dog = new Dog();
	
	cat->makeSound();
	Wrongmeow->makeSound();
	dog->makeSound();
}
