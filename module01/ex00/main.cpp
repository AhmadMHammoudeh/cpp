/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/24 02:06:10 by ahhammou         ###   ########.fr       */
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

std::string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};

  std::string name = "";

  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if(random < 2 && count < 2) {
      name = name + consonents[rand() % 19];
      count++;
    }
    else {
      name = name + vowels[rand() % 5];
      count = 0;
    }
    random = rand() % 2;
  }

  return name;
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
	randomChump(randomName(5));
	a->~Zombie();
}