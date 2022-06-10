/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:34:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/10 19:06:44 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon a = Weapon("club");
	std::cout << "\033[1;33mThis is Wep"<<std::endl;
	std::cout << a.getType() << std::endl;
	HumanA bob("bob", a);
	std::cout << "\033[1;32mThis is BOB Attack"<<std::endl;
	bob.attack();
	a.setType("New club");
	bob.setWeapon(a);
	std::cout << "\033[1;31mThis is BOB New Attack"<<std::endl;
	bob.attack();
	
	std::cout << "\033[1;33mThis is POP Attack"<<std::endl;
	HumanB pop("pop");
	pop.attack();
	pop.setWeapon(a);
	std::cout << "\033[1;34mThis is POP Attack with Wep a (New club)"<<std::endl;
	pop.attack();
	
}
