/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:09:49 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/24 02:04:47 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameing(std::string name){
	this->name = name;
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