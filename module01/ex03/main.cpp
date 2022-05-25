/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:34:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 04:42:42 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon a = Weapon("club");
	std::cout << a.getType() << std::endl;
	HumanA bob("bob", a);
	bob.attack();
	a.setType("New club");
	bob.attack();
	
	HumanB pop("pop");
	pop.attack();
	pop.setWeapon(a);
	pop.attack();
	
}