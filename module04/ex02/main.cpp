/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/23 16:58:03 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "cat.hpp"
// #include "dog.hpp"

int main()
{
	Cat *j = new Cat();
	// Dog dog("Dog");
	j->makeSound();
	j->setIdea("my Ideas");
	j->setIdea("my Ideas 2");
	j->setIdea("my Ideas 3");
	// j->setIdea("my Ideas2");
	std::cout << j->getIdea(0) << std::endl;
	std::cout << j->getIdea(1) << std::endl;
	std::cout << j->getIdea(2) << std::endl;
	Cat *catsecond = j;
	delete (j);
	std::cout << catsecond->getIdea(0) << std::endl;
	// std::cout << catsecond->getIdea(1) << std::endl;
	// std::cout << catsecond->getIdea(2) << std::endl;
	// catsecond->makeSound();
	// dog.makeSound();
}
